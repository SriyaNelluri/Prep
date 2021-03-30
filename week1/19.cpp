void moveZeroes(vector<int>& nums) {
    int notzero= 0;
   
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[notzero++] = nums[i];
        }
    }
 	
    for (int i = notzero; i < nums.size(); i++) {
        nums[i] = 0;
    }
  //traverse through array, variable "notzero" finds nonzero elements and stores them in the array and all the zeros are added at the end
