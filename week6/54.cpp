class Solution {
public:
    void buildBST(vector<int>&nums,int start,int end,vector<int>&ans){
        if(start>end)
            return;
        int mid = (start+end)/2;
        ans.push_back(nums[mid]);
        buildBST(nums,start,mid-1,ans);
        buildBST(nums,mid+1,end,ans);
        
    }
        vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int>ans;
        int n = nums.size();
        buildBST(nums,0,n-1,ans);
        return ans;
    }
};
