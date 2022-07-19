class Solution {
public:
    int gcd(int a,int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> mp;
        for(int i=0;i<deck.size();i++){
            mp[deck[i]]++;
        }
        int g=mp[deck[0]];
        for(auto it:mp){
            g=gcd(max(it.second,g),min(it.second,g));
        }
        if(g>1)return 1;
        else return 0;
    }
};