class Solution {
public:
    int guessNumber(int n) {
   int l= 1;
        int r = n;
        while (l<=r) {
            int mid = l+(r-l)/2;
            int ans = guess(mid);
            if (ans == 0)
                return mid;
            else if (ans < 0)
                r = mid - 1;
            else
                l=mid + 1;
        }
        return -1;
        
    }
};
