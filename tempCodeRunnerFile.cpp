//Jonathan Hartsell
//Assignment 1 Problem 3 - Test Application for CircularList
//Asg1P3.cpp

#include <iostream>
#include "CicrularList.h"
using namespace std;

template <typename T>
void printItem(T &item) {
  std::cout << item << " ";
}

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
  std::cout << std::endl;
  return 0;
}
