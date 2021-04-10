class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int X) {
   vector<vector<int> > res;
int l, r;
int n=arr.size();
sort (arr.begin(),arr.end());
for (int i = 0; i < n - 3; i++) {
for (int j = i+1; j < n - 2; j++) {
l = j + 1;
r = n-1;
while (l < r) {
vector<int> res1;
if( arr[i] + arr[j] + arr[l] + arr[r] == X)
{
res1.push_back(arr[i]);
res1.push_back(arr[j]);
res1.push_back(arr[l]);
res1.push_back(arr[r]);
l++; r--;
res.push_back(res1);
}
else if (arr[i] + arr[j] + arr[l] + arr[r] < X)
l++;
else
r--;
}
}
}
sort(res.begin(),res.end());
res.erase(unique(res.begin(),res.end()), res.end());

return res;
    }
};
