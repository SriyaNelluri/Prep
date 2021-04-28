int idx(int arr[],int low,int high){
  int mid;
  while(low<=high){
    mid=(low+high)/2;
    if(arr[mid]==1&&(mid==0||arr[mid-1]==0)){
      break;
    }
    else if(arr[mid]==1){
      high=mid-1;
    }
    else{
      low=mid+1;
    }
  }
  return mid;
}
