void arrange(int arr[], int n){
    int i = -1;
    int j;
    int temp;
    for (j = 0; j < n; j++)
    {
        if (arr[j] < 0){
            i++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
  
 
    int pos = i + 1, neg = 0;
 
    while (pos < n && neg < pos && arr[neg] < 0){
       
        temp=arr[neg];
         arr[neg]=arr[pos];
         arr[pos]=temp;
        pos++;
        neg += 2;
    }
}
