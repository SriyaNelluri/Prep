class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return 1;
        }
        int lis[n];
        lis[0]=1;
        int maxl=INT_MIN;
        for(int i=1;i<n;i++){
            lis[i]=1;
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]&&lis[i]<lis[j]+1){
                    lis[i]=lis[j]+1;
                }
            }
            if(maxl<lis[i])
                maxl=lis[i];
        }
        return maxl;
    }
};
