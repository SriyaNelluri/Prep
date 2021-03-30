class Solution {
public:
    bool isPalindrome(int x) {
    if(x<0){
        return 0;
    }
    stringstream ss;  
    ss<<x;  
    string s;  
    ss>>s; 
    int i=0;
    int j=s.length()-1;
    while(i<=j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else{
            return 0;
        }
    }
    return 1;
        
          
        
    }
};
