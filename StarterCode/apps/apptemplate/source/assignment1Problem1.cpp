//
// File:   assignment1.cpp
// Author: <Jonathan Hartsell>
// Purpose:
// Illustrate some of the bad thins that can happen with
// pointers
//
#include <iostream>
using namespace std;
void A();
void B();
string& C(); 
void print(string*);

int main() {
  A();
  B(); 
     
  print(C);

  return 0;
}
void A ()
{
    int size, i;
    int *array;
    int *b; 
    // Prompt the user for the size of the array.
    cout << "How many entries should the array be? ";
    cin >> size;
 
    // Create the new array based on the size read in from the user.
    array = new int[size];
    b = array; 
 
    
    for(i = 0; i < size; i++)
    {
        array[i]+=0 + i; 
    }     
        
    delete [] array; 
   
        cout<<b[i]<<endl; 
        cout<<b[i+1]<<endl; 
        cout<<b[i+2]<<endl; 
        cout<<b[i+3]<<endl; 
        cout<<b[i+4]<<endl; 
        cout<<b[i+5]<<endl; 
        cout<<b[i+6]<<endl; 
        cout<<b[i+7]<<endl; 
        cout<<b[i+8]<<endl; 
        cout<<b[i+9]<<endl; 

}   

void B()
{
int size, i;
    int *array;
    int *b; 
    // Prompt the user for the size of the array.
    cout << "How many entries should the array be? ";
    cin >> size;
 
    // Create the new array based on the size read in from the user.
    array = new int[size];
    b = array; 
 
    
    for(i = 0; i < size; i++)
    {
        array[i]+=0 + i; 
    }     
        
    delete array; 
        cout<<&b<<endl; 
        cout<<b[i]<<endl; 
        cout<<b[i+1]<<endl; 
        cout<<b[i+2]<<endl; 
        cout<<b[i+3]<<endl; 
        cout<<b[i+4]<<endl; 
        cout<<b[i+5]<<endl; 
        cout<<b[i+6]<<endl; 
        cout<<b[i+7]<<endl; 
        cout<<b[i+8]<<endl; 
        cout<<b[i+9]<<endl; 

}   

string& C(){
string s; 
string *obj = new string("abcdefghijkl");


return *obj; 


}
void  print(string obj){
     
    cout<<obj<<endl; 
}
