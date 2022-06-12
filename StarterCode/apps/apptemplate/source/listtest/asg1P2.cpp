//
// File:   asg1P2.cpp
// Author: Jonathan Hartsell
// Purpose: Assignment 1 Problem 2
// Testing the list class
//
#include <iostream>
#include "list.h"

template <typename T>
void printItem(T &item) {
  std::cout << item << " ";
}

int Test1();   //Addition
int Test2();   //Subtraction
int Test3();  // Multiplication of negative numbers
int Test4();  // Push a negative integer to the front
int Test5();  // Push a random number to the front
int main() {
  List<int> aListOfIntegers;
  if (aListOfIntegers.empty()) {
    std::cout << "Yep, the new list is empty. " << std::endl;
  }
  for (int i = 10; i >= 0; i--) {
    aListOfIntegers.push_front(i);
  }
  aListOfIntegers.traverse(printItem);
  std::cout << std::endl;
  for (int i = 0; i < 10; i++) {
    std::cout << aListOfIntegers.back() << " ";
    aListOfIntegers.pop_back();
  }
  if (!aListOfIntegers.empty()) {
    aListOfIntegers.traverse(printItem);
    std::cout << std::endl;
  }
  aListOfIntegers.push_back(42);
  aListOfIntegers.traverse(printItem);
  std::cout<< std::endl;
   aListOfIntegers.push_back(Test1());          //Test 1
  aListOfIntegers.traverse(printItem);
  std::cout<< std::endl;
  aListOfIntegers.push_back(Test2());          //Test 2
  aListOfIntegers.traverse(printItem);
  std::cout<< std::endl;
   aListOfIntegers.push_back(Test3());        //Test 3
  aListOfIntegers.traverse(printItem);
  std::cout<< std::endl;
  aListOfIntegers.push_front(Test4());      // Test 4 -- Push a negative integer to the front
  aListOfIntegers.traverse(printItem); 
  std::cout<< std::endl; 
  aListOfIntegers.push_front(Test5());  // Test 5 -- Push a random number to the front
  aListOfIntegers.traverse(printItem); 
  std::cout<< std::endl; 

  

  return 0;
}

int Test1()
{                             //Testing addition of integers from the list
      int x = 3 ;             // New integer should be 45
      return x + 42; 
                
  
}
int Test2()                   // Testing subtraction of integers from the list
{
   return 100 - 20;           // New integer should be 80

}
int Test3()                 //Testing multiplication of negative integers from the list
{
 return -5 * 4;              // New integer should be -20

}
int Test4()               // Return a negative integer to the front
{
  return -100; 
}

int Test5()               //Push a random number to the front
{
  random(); 
}