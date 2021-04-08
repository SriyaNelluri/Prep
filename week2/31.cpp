class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int i;
        int n=nums.size();
        //replacing evens with 0 and odds with 1
        for(i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                nums[i]=0;
            }
            else{
                nums[i]=1;
            }
        }
  unordered_map<int, int> prevSum;
    int res = 0;
    int currsum = 0;
    for (int i = 0; i < n; i++) {
        currsum += nums[i];
        if (currsum == k)
            res++;
        if (prevSum.find(currsum - k) != prevSum.end())
            res += (prevSum[currsum - k]);
        prevSum[currsum]++;        
    }
        return res;
    }
};
