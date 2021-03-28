void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


int findDuplicate(int* nums, int numsSize){
  insertionSort(nums,numsSize);
  int i=0;
  for(i=0;i<numsSize;i++){
      if(nums[i]==nums[i+1]){
          return nums[i];
      }
  }
    
 return -1;
}
