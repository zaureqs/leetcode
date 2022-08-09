class Solution {
public:
    bool checkIfPangram(string s) {
        set<char> a;
        if(s.size()<26)
            return false;
        for(int i = 0 ;i<s.size();i++){
            a.insert(s[i]);
        }
        if(a.size()<26)
            return false;
        return true;
    }
};