class Solution {
public:
    bool checkIfPangram(string s) {
        set<char> a;
        
        for(int i = 0 ;i<s.size();i++){
            a.insert(s[i]);
        }
        if(a.size()<26)
            return false;
        return true;
    }
};