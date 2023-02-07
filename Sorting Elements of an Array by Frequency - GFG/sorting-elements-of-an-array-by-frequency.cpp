#include<bits/stdc++.h> 
using namespace std;
bool sorted(pair<int,int> a, pair<int,int> b)
{
    if(a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first > b.first;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        vector<pair<int,int>> vp;
        for(auto &it : mp)
        {
            vp.push_back(make_pair(it.second,it.first));
        }
        sort(vp.begin(),vp.end(),sorted);
        for(int i=0;i<vp.size();i++)
        {
            int el = vp[i].second;
            int fq = vp[i].first;
            while(fq--)
            {
                cout<<el<<" ";
            }
        }
        cout << endl;
        
    }
    
}