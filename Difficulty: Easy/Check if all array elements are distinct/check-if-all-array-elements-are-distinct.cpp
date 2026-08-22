class Solution {
  public:
    bool isDistinct(vector<int> arr) {
        // code here
        unordered_map<int, int> freq;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
            if (freq[arr[i]]>1){
                return false;
            }
        }
        return true;
    }
};