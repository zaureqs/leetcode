class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int ans = 0;
        
        for(int i = 1;i<nums.size();i++){
            if(nums[ans]==nums[i])
                count++;
            else
                count--;
            if(count==0){
                count = 1;
                ans = i;
            }
        }
        count = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == nums[ans])
                count++;
            if(count == (nums.size()/2))
                return nums[ans];
        }
        return nums[ans];
    }
};