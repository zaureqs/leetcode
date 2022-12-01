//{ Driver Code Starts
// Program to find best buying and selling days
#include <bits/stdc++.h>

using namespace std;

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int *, int);

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, i;
        cin >> n;
        int price[n];
        for (i = 0; i < n; i++) cin >> price[i];
        // function call
        stockBuySell(price, n);
    }
    return 0;
}

// } Driver Code Ends


// User function template for C++

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n) {
    // code here
    bool flag = false;
    for(int i = 0;i<n-1;i++)
    {
        if(price[i]<price[i+1])
            flag = true;
    }
    if(!flag){
        cout<<"No Profit"<<endl;
        return;
    }
    
    int sell = 0,buy=0;
    
    for(sell = 0;sell<n-1;sell++)
    {
        if(price[sell]>price[sell+1])
        {
            if(buy != sell)
            {
                cout<<"("<<buy<<" "<<sell<<") ";
                buy=sell+1;
            }
            else{
                buy=sell+1;
            }
        }
    }
    
    if(price[n-1]>price[n-2])
    {
        if(buy!=(sell))
            cout<<"("<<buy<<" "<<sell<<") ";
    }
    cout<<endl;
}