class Solution {
public:
    int guessNumber(int n) {
     int l= 1;
        int r = n;
        while (l<=r) {
            int mid = (l+r) / 2;
            int ans = guess(mid);
            if (ans == 0)
                return mid;
            else if (ans < 0)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return -1;
        
    }
};
