class Solution {
public:
    bool isPalindrome(int x){
        
        if(x<0)
            return false;
        else if(x==0)
            return true;
        else{
             long long rem , n = x ,rev = 0;
            while(n!=0){    
                rem=n%10;      
                rev=rev*10+rem;    
                n/=10;    
              }
            if(x==rev)
                return true;
            else
                return false;
        }
    }
};