void moveToEnd(int mPlusN[], int size){
   int j = size - 1;
   for (int i = size - 1; i >= 0; i--)
     if (mPlusN[i] != NA){
        mPlusN[j] = mPlusN[i];
        j--;
     }
}

int merge(int mPlusN[], int N[], int m, int n){
   int i = n; 
   int j = 0; 
   int k = 0; 
   while (k < (m + n)){
    if ((j == n)||(i < (m + n) && mPlusN[i] <= N[j])){
        mPlusN[k] = mPlusN[i];
        k++;
        i++;
    }
    else {
       mPlusN[k] = N[j];
       k++;
       j++;
    }
   }
}
