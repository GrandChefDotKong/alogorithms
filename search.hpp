
/*****************************/
/** LINEAR SEARCH ALGORYTHM **/
/*****************************/
int linear_search(const int array[], const int size, const int valueToSearch) {
  for (int i = 0; i < size; ++i) {
    if(array[i] == valueToSearch) {
      return i;
    }
  }

  return -1;
}

/**************************************/ // I DON'T GET THE VALUE OF THIS 
/** SENTINEL LINEAR SEARCH ALGORYTHM **/ // ALGORITHM ...
/**************************************/
int sentinel_linear_search(int array[], const int size, const int valueToSearch) {

  if(array[size-1] == valueToSearch) {
    return size-1;
  }
  
  int temp = array[size-1];
  array[size-1] = valueToSearch;

  int i = 0;
  while(array[i] != valueToSearch) {
    ++i;
  }

  array[size-1] = temp;

  if(i == size-1) {
    return -1;
  }

  return i;  
}

/*****************************/
/** BINARY SEARCH ALGORYTHM **/
/*****************************/
// RECURSIVE VERSION
int binary_search(const int array[], const int begin, const int end, const int valueToSearch) {
  
  int mid = (end - begin) / 2 + begin;

  if(array[mid] == valueToSearch) {
    return mid;
  }

  if(begin >= end) {
    return -1;
  }

  if(array[mid] > valueToSearch) {
    return binary_search(array, begin, mid-1, valueToSearch);
  } else {
    return binary_search(array, mid+1, end, valueToSearch);
  }
}
// NON RECURSIVE VERSION
int binary_search(const int array[], const int size, const int valueToSearch) {
  int begin = 0, end = size -1;

  while(begin <= end) {
    int mid = (end - begin) / 2 + begin;

    if(array[mid] == valueToSearch) {
      return mid;
    }

    if(array[mid] > valueToSearch) {
      end = mid - 1;
    } else {
      begin = mid + 1;
    }
  }

  return -1;
}




