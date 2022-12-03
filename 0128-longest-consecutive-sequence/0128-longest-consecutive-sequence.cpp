class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int count = 0;
        int max_count = 0;
        for(int it : nums)
        {
            s.insert(it);
        }
        
        for(int it : nums)
        {
           if(!s.count(it-1)){
               count = 1;
               int temp = it;
               while(s.count(temp+1)){
                   count++;
                   temp++;
               }
           }
            max_count = max(count,max_count);
        }
        return max_count;
    }
};