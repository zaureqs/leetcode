class Solution {
public:
    int fib(int n) {
        int ans = 0;
        int a = 1,b = 0;
        int c = 1;
        for(int i=1;i<=n;i++)
        {
            c = a+b;
            a=b;
            b=c;
    
            ans = c;
        }

        return ans;
    }
};