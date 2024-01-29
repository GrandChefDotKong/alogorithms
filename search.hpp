/******************************/
/** JUMP SEARCH ALGORYTHM **/
/******************************/
int jump_search(const int array[], const int size, const int jump, const int valueToSearch) {
  int index = 0, prevIndex = -1;

  while(true) {
    if(index >= size) {
      index = size - 1;
    }

    if(array[index] == valueToSearch) {
      return index;
    }
    
    if(index == prevIndex) {
      return -1;
    }

    prevIndex = index;

    if(array[index] < valueToSearch) {
      index += jump;
      continue;
    }

    index--;
    
    if(index < 0) {
      return -1;
    }  
  }
}

/******************************/
/** TERNARY SEARCH ALGORYTHM **/
/******************************/
int ternary_search(const int array[], int begin, int end, const int valueToSearch) {
  int left = begin + (end - begin) / 3;
  int right = end - (end - begin) / 3;

  if(valueToSearch == array[right]) {
    return right;
  }

  if(valueToSearch == array[left]) {
    return left;
  }

  if(begin >= end) {
    return -1;
  }

  if(valueToSearch < array[left]) {
    return ternary_search(array, begin, left-1, valueToSearch);
  } else if(valueToSearch < array[right]) {
    return ternary_search(array, left+1, right-1, valueToSearch);
  } else {
    return ternary_search(array, right+1, end, valueToSearch);
  }
}

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




