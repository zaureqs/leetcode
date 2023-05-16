//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int precedance(char c)
    {
        if(c == '(')
            return -1;
        else if(c == '+' || c == '-')
            return 0;
        else if(c == '*' || c == '/' || c == '%')
            return 1;
        else if(c == '^')
            return 2;
        else
            return 3;
    }
    string infixToPostfix(string s) 
    {
        string ans;
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            {
                ans += s[i];
            }
            else if(s[i] == '(')
            {
                st.push(s[i]);
            }
            else if(s[i] == ')')
            {
                while(!st.empty() && (st.top() != '('))
                {
                    char c = st.top();
                    st.pop();
                    ans += c;
                }
                st.pop();
            }
            else if(!st.empty() && (precedance(s[i]) > precedance(st.top())) )
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty())
                {
                    st.push(s[i]);
                }
                else
                {
                    while(!st.empty() && precedance(s[i]) <= precedance(st.top()))
                    {
                        char c = st.top();
                        st.pop();
                        ans += c;
                    }
                    st.push(s[i]);
                }
            }
        }
        while(!st.empty())
        {
            char c = st.top();
            st.pop();
            ans += c;
        }
        return ans;
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends