//Jonathan Hartsell
// Assignment 6 Problem 4
//Filename: Ag6P4.cpp
// Still working on this one


#include<iostream>
#include<chrono>
#include "tree.h"
#include<algorithm>
using namespace std;

template <typename T>
void bsearch (T a[], size_t n, int x)
{
    size_t left = 0;
    size_t right = n - 1;
    int match = 0;
    while(left <= right)
    {
        size_t middle = (left + right) / 2;
        if(a[middle] == x)
        {
            cout<<"Success! \n";
            cout<<a[middle];
            match++;
            break;
        }
        if(a[middle] < x)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    if(match == 0)
    {
        cout<<"Failure! \n";
    }
}




int main()
{


int sz;
   cout<<"Enter the size of array::";
   cin>>sz;
   int randArray[sz];
   for(int i=0;i<sz;i++)
      randArray[i]=rand()%100;  //Generate number between 0 to 99
  
   cout<<"\nElements of the array::"<<endl;
  
   for(int i=0;i<sz;i++)
      cout<<"Elements no "<<i+1<<"::"<<randArray[i]<<endl;

    
   return 0;
}


