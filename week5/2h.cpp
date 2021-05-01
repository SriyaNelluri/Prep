class Solution {
public:
    int search(vector<int>& nums, int target) {
        int rot;
        int low=0;
        int high=nums.size()-1;
        while(low<high)
        {
            int mid=low+(high-low)/2;
            if(nums[high]>nums[mid]){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        rot=low; //as low contains the position of our smallest element
        low=0;
        high=nums.size()-1;
        if(nums[rot]<=target && nums[high]>=target)
        {
            low=rot;
        }
        else{
            high=rot-1;
        }
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
    }
};
