class Solution {
  public:
    long long int product(vector<int> &arr) {
        // code here
       long long int product=1; 
        int i=0;
        int mod=1000000007;
        while(i<arr.size()){
            product=(product*arr[i])%mod;
            i++;
        }
        return product;
    }
};