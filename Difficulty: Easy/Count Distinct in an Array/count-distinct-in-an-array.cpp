class Solution {
  public:
    int countDistinct(vector<int>& arr) {
        // code here
    //     int n= arr.size();
    //     int count=0;
    //     vector<int>freq(n+1,0);
    //     for (int i=0;i<n;i++){
    //         if(freq[arr[i]]==0){
    //             count++;
    //         }
    //         freq[arr[i]]++;
    //     }
    //     return count;
    // }
     int count = 0;
        
        for(int i = 0; i < arr.size(); i++) {
            
            bool found = false;
            
            for(int j = 0; j < i; j++) {
                if(arr[i] == arr[j]) {
                    found = true;
                    break;
                }
            }
            
            if(!found)
                count++;
        }
        
        return count;
    }
};