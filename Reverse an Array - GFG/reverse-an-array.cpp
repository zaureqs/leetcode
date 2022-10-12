#include<bits/stdc++.h> 
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i]; 
        }
        int l = 0;
        int r = n-1;
        while(l<r){
            swap(arr[l],arr[r]);
            l++;
            r--;
        }
        
        for(int i=0;i<n;i++)
        {
            cout << arr[i] << " ";
        }
        cout<<endl;
    }
}