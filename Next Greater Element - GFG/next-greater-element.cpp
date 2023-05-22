//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> nums, int n)
    {
        // Your code here
        stack<long long> st;
        st.push(nums[nums.size()-1]);
        nums[nums.size()-1] = -1;
        
        for(long long i = nums.size()-2; i>=0; i--)
        {
            if(!st.empty() && nums[i] < st.top())
            {
                long long temp = st.top();
                st.push(nums[i]);
                nums[i] = temp;
            }
            else{
                while(!st.empty() && nums[i] >= st.top()) st.pop();
                if(st.empty())
                {
                    st.push(nums[i]);
                    nums[i] = -1;
                }
                else
                {
                    long long temp = st.top();
                    st.push(nums[i]);
                    nums[i] = temp;
                }
            }
        }
        return nums;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends