class Solution {
public:
    bool halvesAreAlike(string s) {
        int pre = 0;
        int mid = s.size()/2;
        int count = 0;
        for(;mid<s.size();pre++,mid++){
            if(s[pre] == 'a' || s[pre] == 'e'|| s[pre] == 'i'|| s[pre] == 'o'|| s[pre] == 'u'|| s[pre] == 'A'|| s[pre] == 'E'|| s[pre] == 'I'|| s[pre] == 'O'|| s[pre] == 'U'){
                count++;
            }
            if(s[mid] == 'a' || s[mid] == 'e'|| s[mid] == 'i'|| s[mid] == 'o'|| s[mid] == 'u' || s[mid] == 'A'|| s[mid] == 'E'|| s[mid] == 'I'|| s[mid] == 'O'|| s[mid] == 'U'){
                count--;
            }
                
        }
        if(count==0)
            return true;
        else
            return false;
    }
};