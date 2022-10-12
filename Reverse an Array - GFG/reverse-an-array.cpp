#include<bits/stdc++.h> 
using namespace std;

void reversee(int arr[], int n)
{
    if(n >= 0)
    {
        cout << arr[n] << " ";
        reversee(arr,n-1);    
    }
    // return 0;
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
        for(int i=0;i<n;i++)
        {
            cin >> arr[i]; 
        }
        reversee(arr,n-1);
        cout << endl;
    }
    return 0;
}