class Solution {
  public:
    bool isProductEven(vector<int> &arr) {
        // code here
        long long int product=0;
        int n=arr.size();
        int i=0;
        while(i<n){
            if(arr[i]%2==0){
                return true;
            }
            i++;
        }
        return false;
    }
};