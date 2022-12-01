class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        
        int n = arr.size();
        vector<int> pos;
        vector<int> neg;
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=0)
            {
                pos.push_back(arr[i]);
            }
            else
            {
                neg.push_back(arr[i]);
            }
        }
        
        int i = 0;
        int k = 0;
        while(i<pos.size() && i < neg.size())
        {
            arr[k]=pos[i];
            k++;
            arr[k]=neg[i];
            k++;
            i++;
        }
        while(i<pos.size())
        {
           arr[k]=pos[i];
           k++;
           i++;
        }
        while(i<neg.size())
        {
           arr[k]=neg[i];
           k++;
           i++;
        }
        
        return arr;
    }
};