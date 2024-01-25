void insertion_sort(int unsortedArray[], const int size) {
 for (int i = 0; i < size; ++i) {
  int temp = unsortedArray[i];
  int j = i - 1;

  while(j >= 0 && unsortedArray[j] > temp) {
    unsortedArray[j+1] = unsortedArray[j];
    --j;
  }

  unsortedArray[j+1] = temp;
 }  
}