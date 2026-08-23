class Solution {
  public:
    int sumOfMatrix(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<mat[i].size();j++){
                sum+=mat[i][j];
            }
        }
        return sum;
    }
};