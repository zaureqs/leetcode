//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int lb, int mid, int ub)
    {
        int i,j,k,b[ub-lb+1];
        i = lb;
        j = mid+1;
        k = 0;
        while(i <= mid && j <= ub)
        {
            if(arr[i] < arr[j])
            {
                b[k] = arr[i];
                i++;
                k++;
            }
            else
            {
                b[k] = arr[j];
                j++;
                k++;
            }
        }
        while(i <= mid)
        {
            b[k] = arr[i];
            i++;
            k++;
        }
        while(j <= ub)
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    
        for(i=lb;i<=ub;i++)
        {
            arr[i] = b[i-lb];
        }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if (l < r) 
        {
            int mid = l + (r - l) / 2;
            mergeSort(arr, l, mid);
            mergeSort(arr, mid + 1, r);
            merge(arr, l, mid, r);
        }
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends