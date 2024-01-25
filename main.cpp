#include <iostream>
#include "buble_sort.h"
#include "insertion_sort.h"
#include "sorting.hpp"

void print_array(const int arrayToPrint[], const int size) {
  std::cout << "array : ";
  for(int i = 0; i < size; ++i) {
    std::cout << arrayToPrint[i] << " ; ";
  }
  std::cout << std::endl;
}

int main() {
  int testArray[9] = {69, 11, 43, 54, 22, 18, 98, 96, 5};
  const int size = sizeof(testArray)/sizeof(testArray[0]);

  print_array(testArray, size);

  selection_sort(testArray, size);
  print_array(testArray, size);

  return EXIT_SUCCESS;
}