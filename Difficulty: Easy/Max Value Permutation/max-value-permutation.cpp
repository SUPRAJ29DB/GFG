class Solution {
  public:
    int maxValue(vector<int> &arr) {
        // code here
        int n=arr.size();
        long long sum=0;
        long long mod=1e9+7;
        sort(arr.begin(), arr.end());
        for(int i=0;i<n;i++){
            sum+=(arr[i]*i)%mod;
        }
        return sum;
    }
};