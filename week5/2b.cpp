class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
             return x;
        int l= 1, r = x/2, ans;
        while (l <=r){        
         int mid = (l+r) / 2;
         int sq=x/mid;
         if (mid== sq)
            return mid;
         if (mid<sq){
            l= mid + 1;
            ans = mid;
            }
        else 
            r= mid-1;        
    }
    return ans;
  }
};
