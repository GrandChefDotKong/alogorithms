#include <iostream>
#include "sorting.hpp"
#include "search.hpp"

void print_array(const int arrayToPrint[], const int size) {
  std::cout << "array : ";
  for(int i = 0; i < size; ++i) {
    std::cout << arrayToPrint[i] << " ; ";
  }
  std::cout << std::endl;
}

int main() {
  int testArray[7] = {11, 25, 43, 54, 68, 76, 95};
  const int size = sizeof(testArray)/sizeof(testArray[0]);

  print_array(testArray, size);

  int result = jump_search(testArray, 7, 3, -1);

  std::cout << "result = " << result << "\n";

  //selection_sort(testArray, 9);
  //quick_sort(testArray, 0, 8);
  //radix_sort(testArray, 9);
  //print_array(testArray, size);

  return EXIT_SUCCESS;
}