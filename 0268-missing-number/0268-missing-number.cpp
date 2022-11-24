class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N = nums.size();
        int n = (N*(N+1))/2;
        for(int i=0;i<N;i++)
        {
            n -= nums[i];
        }
        return n;
    }
};