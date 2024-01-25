void selection_sort(int unsortedArray[], const int size) {
  for(int i(0); i < size - 1; ++i) {
    
    int minIndex = i;
    for(int j(i+1); j < size; ++j) {
      if(unsortedArray[j] < unsortedArray[minIndex]) {
        minIndex = j;
      }
    }

    if(minIndex == i) {
      continue;
    }

    int tempValue = unsortedArray[minIndex];
    unsortedArray[minIndex] = unsortedArray[i];
    unsortedArray[i] = tempValue; 
  }
}

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