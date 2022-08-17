class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count =1 ;
        int ans = 0;
        if(nums.size() == 1)
            return 1;
        
        for(int i =0;i<nums.size()-1;i++)
        {
            if(nums[i] < nums [i+1])
                count ++;
            
            else
                count =1;
            
            ans = max(ans,count);
        }
        return ans;
    }
};