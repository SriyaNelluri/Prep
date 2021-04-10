class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums,int k) {
   if(k<=1) return 0;
        int product=1,right=-1,left=0,subArrCount=0;
        while(++right<nums.size())
        {
            product*=nums[right];
            while(left < nums.size() && product>=k)
                product/=nums[left++];
            subArrCount+=(right-left)+1;
        }
        return subArrCount;
    }
};
