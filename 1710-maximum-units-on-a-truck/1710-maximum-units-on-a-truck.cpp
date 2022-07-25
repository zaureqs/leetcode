class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        int total = 0;
        int flag;
        
        for(int i = 0;  ;i++) {
            int maxj = 0;
            for(int j = 0;j<boxTypes.size();j++){
                if(boxTypes[j][1] > maxj){
                    maxj = boxTypes[j][1];
                    flag = j;
                }
            }
           
            if(boxTypes[flag][0] >= truckSize) { 
                total += truckSize * boxTypes[flag][1];
                break;
            }
            else{
                total += boxTypes[flag][0]*boxTypes[flag][1];
                truckSize -= boxTypes[flag][0];
            }
             boxTypes[flag][1]=0;
        }
        return total;
    }
};

