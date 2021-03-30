class Solution {
public:
    string convertToTitle(int columnNumber) {
    string s;
    int x;
while (columnNumber) {
            x = (columnNumber-1) % 26; 
            s = (char)('A' + x) + s; 
            columnNumber = (columnNumber-1)/26; 
        }
        return s; 
        
    }
};
