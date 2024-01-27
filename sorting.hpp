/** UTILITY FUNCTION **/
void swap_value(int array[], const int firstIndex, const int secondIndex);

/**************************/
/** QUICK SORT ALOGOITHM **/
/**************************/
int partition(int array[], const int begin, const int end);
void quick_sort(int unsortedArray[], const int begin, const int end) {
  if(begin >= end ) {
    return;
  }

  int mid = partition(unsortedArray, begin, end); 

  quick_sort(unsortedArray, begin, mid-1);
  quick_sort(unsortedArray, mid+1, end);
}

int partition(int array[], const int begin, const int end) {
  int pivot = array[end];
  int i = begin;

  for(int j = begin; j <= end; ++j) {
    if(array[j] >= pivot) {
      continue;
    }

    if(i != j) {
      swap_value(array, i, j);
    }

    ++i;
  }

  if(i != end) {
    swap_value(array, i, end);
  }

  return i;
}

/**************************/
/** MERGE SORT ALOGOITHM **/
/**************************/
void merge(int array[], const int left, const int right, const int mid);

void merge_sort(int unsortedArray[], const int begin, const int end) {
  if(begin >= end) {
    return;
  }

  int mid = begin + (end - begin) / 2;
  merge_sort(unsortedArray, begin, mid);
  merge_sort(unsortedArray, mid + 1, end);
  merge(unsortedArray, begin, mid, end);
}

void merge(int array[], const int left, const int mid, const int right) {
  const int subArrayOne = mid - left + 1;
  const int subArrayTwo = right - mid;

  auto *leftArray = new int[subArrayOne];
  auto *rightArray = new int[subArrayTwo];

  for(int i = 0; i < subArrayOne; ++i) {
    leftArray[i] = array[left+i];
  }
  for(int i = 0; i < subArrayTwo; ++i) {
    rightArray[i] = array[mid+1+i];
  }

  int subArrayOneIndex = 0, subArrayTwoIndex = 0, mergedArrayIndex = left;

  while (subArrayOneIndex < subArrayOne && subArrayTwoIndex < subArrayTwo) {
    if(leftArray[subArrayOneIndex] <= rightArray[subArrayTwoIndex]) {
      array[mergedArrayIndex] = leftArray[subArrayOneIndex];
      subArrayOneIndex++;
    } else {
      array[mergedArrayIndex] = rightArray[subArrayTwoIndex];
      subArrayTwoIndex++;
    }
    mergedArrayIndex++;
  }

  while(subArrayOneIndex < subArrayOne) {
    array[mergedArrayIndex] = leftArray[subArrayOneIndex];
    subArrayOneIndex++;
    mergedArrayIndex++;
  }

  while(subArrayTwoIndex < subArrayTwo) {
    array[mergedArrayIndex] = rightArray[subArrayTwoIndex];
    subArrayTwoIndex++;
    mergedArrayIndex++;
  }

  delete[] leftArray;
  delete[] rightArray;
}

/******************************/
/** SELECTION SORT ALOGOITHM **/
/******************************/
void selection_sort(int unsortedArray[], const int size) {
  for(int i(0); i < size - 1; ++i) {
    
    int minimumValueIndex = i;
    for(int j(i+1); j < size; ++j) {
      if(unsortedArray[j] < unsortedArray[minimumValueIndex]) {
        minimumValueIndex = j;
      }
    }

    if(minimumValueIndex == i) {
      continue;
    }

    swap_value(unsortedArray, minimumValueIndex, i);
  }
}

/******************************/
/** INSERTION SORT ALOGOITHM **/
/******************************/
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

/**************************/
/** BUBLE SORT ALOGOITHM **/
/**************************/
void buble_sort(int* unsortedArray, const int size) {
  for (int i = 0; i < size - 1; ++i) {
    for(int j = 0; j < size - i - 1; ++j) {
      if(unsortedArray[j] > unsortedArray[j+1]) {
        swap_value(unsortedArray, j, j+1);
      }
    }
  }
}

/**********************/
/** SWAP ARRAY VALUE **/
/**********************/
void swap_value(int array[], const int firstIndex, const int secondIndex) {
  int temp = array[firstIndex];
  array[firstIndex] = array[secondIndex];
  array[secondIndex] = temp;
}