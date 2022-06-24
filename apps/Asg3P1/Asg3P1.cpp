//Jonathan Hartsell
//CS 372 Assignment 3 Problem 1
//Filename: Asg3P1.cpp
// Source for code: https://github.com/kjprajapati18/To-Do-List/blob/master/src/Main.c


#include "vector.h"
#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <queue>
#include <iostream>
#include <fstream>
using namespace std; 



int main(void){
	setbuf(stdout, NULL);

    //Get a valid List file
    char* filename = (char *) malloc(MAX_LINE_LENGTH*sizeof(char));
    char* input = (char *) malloc(MAX_LINE_LENGTH*sizeof(char));
    FILE* list;

    do{
        getInp(filename, "Enter the location of the To-Do list file (enter d for default): ");
        if(filename == NULL || strcmp(filename, "d")== 0|| strcmp(filename, "D")==0){
            filename = "p3.txt";
        }
        list = fopen(filename, "r");

        if(list == NULL) {
            printf("List was invalid\n");
            fclose(list);
        }
    } while (list == NULL);

    struct DayNode* listRoot = buildList(list);
    fclose(list);
    createBackUp(filename);

    printList(&listRoot);

    //Main loop where user enters actions to perform
    int loop = 1;
    while(loop == 1){
        getInp(input, "\nWould you like to display all items (a), dispaly selected item (b), mark task as done (c), or quit (d)? ");
        if(input == NULL){
            printf("Null entry \n");
            continue;
        }
        switch(input[0]){
        case 'a':
        case 'A':
            
            printList(&listRoot);
            break;
        case 'b':
        case 'B':
            //Check/Complete an existing item in list
        	displaySelected(&listRoot);
            break;
        case 'c':
        case 'C':
        	//Edit an entry
        	userCheckEntry(&listRoot);
        	break;
        
        case 'd':
        case 'D':
            printf("Saving and exiting...");
            loop--;
            break;
        default:
            printf("That is an invalid option\n");
            break;
        }
        input[0] = '\0';
        saveList(&listRoot, filename);
    }

    free(input);
    free(filename);
    printf(" Done!\n Press enter to close...");
    getchar();
    return 0;
}