class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int, int> pevsum;
        int sum = 0;
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
            
            if(sum==k) count++;
            if(pevsum.find(sum-k) != pevsum.end()){
                count += pevsum[sum-k];
            }
            pevsum[sum]++;
        }
        return count;
    }
};