
void buble_sort(int* unsortedArray, const int size) {
  for (int i = 0; i < size - 1; ++i) {
    for(int j = 0; j < size - i - 1; ++j) {
      if(unsortedArray[j] > unsortedArray[j+1]) {
        int temp = unsortedArray[j];
        unsortedArray[j] = unsortedArray[j+1];
        unsortedArray[j+1] = temp;
      }
    }
  }
}



