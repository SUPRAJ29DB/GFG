class Solution {
  public:
    int minProductSum(vector<int> &a, vector<int> &b) {
        // code here
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());
        long long ans=0;
        for(int i=0;i<a.size();i++){
            ans+=1LL*a[i]*b[i];
        }
        return ans;
    }
};