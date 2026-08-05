class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
          int freq=0;
        for(int x:arr){
          
            if(x==target){
                freq++;
                
            }
        }
        return freq;
    }
};
