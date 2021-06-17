class Solution {
public:

  vector<int> p;
    
    int p(int i) {
        if(p[i] == i)
            return i;
        return p[i] = p(p[i]);
    }
    
    void union1(int i, int j) {
        i = p(i);
        j = p(j);
        
        if(i!=j)
            p[j] = i;
    }
    
    int findCircleNum(vector<vector<int>>& M) {
        int n = M.size();
        int groups=0;
        p.resize(n);

        for(int i=0;i<n;i++)
            p[i] = i;

        
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                if(M[i][j] == 1)
                    union1(i,j);
            }
        }
        
        for(int i=0;i<n;i++) {
            if(p[i] == i)
                groups++;
        }
        
        return groups;
    }


};
