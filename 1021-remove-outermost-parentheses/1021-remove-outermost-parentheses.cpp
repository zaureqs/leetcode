class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        std::string str;
        for (int i = 0 ;i<s.length();i++){
            if (s[i] == '(') {
                if (count>0)
                    str += '(';
        
                count++;
            }
            
            else {
                --count;
                
                if (count>0)
                    str += ')';
            }
        }
        
        return str;
    }
};