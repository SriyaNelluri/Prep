class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int first1=INT_MIN;
        int first2=0;
        int second1=INT_MIN;
        int second2=0;
        int i;
        for(i=0;i<prices.size();i++)
        {
            first1=max(first1,-prices[i]);
            first2=max(first2,first1+prices[i]);
            second1=max(second1,first2-prices[i]);
            second2=max(second2,second1+prices[i]);
        }
        return second2;
    }
};
