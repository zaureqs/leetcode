class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        if(magazine.size() < ransomNote.size())
        {
            return false;
        }  
        map<char,int> mp;
        for(auto &it : ransomNote)
        {
            mp[it]++;
        }
        for(auto &it : magazine)
        {
            mp[it]--;
        }
        for(auto &it : mp)
        {
            if(it.second > 0)
            {
                return false;
            }
        }
        return true;
    }
};