class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, maxcount = 0;
        
        for(int element : nums)
        {
            if(element == 1)
            {
                count++;
            }
            else
            {
                maxcount = max(maxcount,count);
                count = 0;
            }
        }
        return max(maxcount , count);
    }
};