//Jonathan Hartsell
// Assignment 2 Problem 2

#pragma once
#include <iostream>
#include "list.h"

template <typename Thing>
class Bag {
public:
  void insert(Thing aThing) {
    bagContents.push_back(aThing);
    bagSize++;
  }
  Thing &pop() {
    Thing aThing;
    if (bagContents.size() > 0) {
      aThing = bagContents[bagSize];
      bagSize--;
    }
    else {
      std::cerr << "Can't pop out of an empty bag" << std::endl;
    }
    return aThing;
  }
  int size() {
    return bagSize;
  }
  int count(Thing aThing) {
    int bagCount = 0;
    for (int i = 0 ; i < bagSize; i++) {
      if (bagContents[i] == aThing) {
        bagCount++;
      }
    }
    return bagCount;
  }
private:
  List<Thing> bagContents;
  int bagSize = 0;
};