#include <iostream>
#include "sorting.hpp"
#include "search.hpp"
#include <deque>
#include <vector>
#include <string>
#include <algorithm>    // std::sort

void print_array(const int arrayToPrint[], const int size) {
  std::cout << "array : ";
  for(int i = 0; i < size; ++i) {
    std::cout << arrayToPrint[i] << " ; ";
  }
  std::cout << std::endl;
}

void print_deque(const std::deque<int>& vector) {
  std::cout << "deque : ";
  for(int i = 0; i < vector.size(); ++i) {
    std::cout << vector[i] << " ; ";
  }
  std::cout << std::endl;
}

void print_vector(const std::vector<std::string>& vector) {
  std::cout << "vector : ";
  for(int i = 0; i < vector.size(); ++i) {
    std::cout << vector[i] << " ; ";
  }
  std::cout << std::endl;
}

int main() {

  int testArray[7] = {11, 25, 43, 54, 68, 76, 95};
  const int size = sizeof(testArray)/sizeof(testArray[0]);

  print_array(testArray, size);

  int result = interpolation_search(testArray, 7, 76);

  std::cout << "result = " << result << "\n";
  
  //selection_sort(testArray, 9);
  //quick_sort(testArray, 0, 8);
  //radix_sort(testArray, 9);
  //print_array(testArray, size);

  return EXIT_SUCCESS;
}