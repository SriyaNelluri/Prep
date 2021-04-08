class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
      int max_sum_so_far=nums[0];
      int sum_ending_here=nums[0];
    int n=nums.size();
    int flag=0;
     int i;
        for(i=1;i<n;i++){
            
            if(nums[i]>nums[i-1]){
                sum_ending_here+=nums[i];
            }
            else{
                sum_ending_here=nums[i];
            }
            if(max_sum_so_far<sum_ending_here){
                max_sum_so_far=sum_ending_here;
            }
            
        }
       return max_sum_so_far; 
    }
};
