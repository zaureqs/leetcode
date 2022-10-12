class Solution {
public:
    bool isPalindrome(string S) {
        int l = 0;
	    int r = S.size()-1;
	    while(l<r)
	    {
            if(!isalnum(S[l])) l++;
            else if(!isalnum(S[r])) r--;
            
	        else if(tolower(S[l])!=tolower(S[r]))
	            return 0;
	       
            else{
                l++;
	            r--;
            }
            
	    }
	    return 1;
    }
};