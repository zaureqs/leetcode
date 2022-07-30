class Solution {
public:
    bool wordPattern(string p, string s) {
        vector<string> v;
        stringstream ss(s);
        string str;
        
        while(ss >> str)
            v.push_back(str);
        
        if(p.size() != v.size())
            return false;
     
        unordered_map<char, int> mp1;
        unordered_map<string, int> mp2;
        
        for(int i=0; i<p.size(); i++)
        {
            if(mp1[p[i]] != mp2[v[i]])
                return false;
            
            mp1[p[i]] = i+1;
            mp2[v[i]] = i+1;
        }

        return true;
    }
};