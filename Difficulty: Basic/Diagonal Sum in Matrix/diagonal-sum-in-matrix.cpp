class Solution {
  public:
    int diagonalSum(vector<vector<int> >& mat) {
        // Code here
        int n=mat.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=mat[i][i];
            sum+=mat[i][n-i-1];
        }
       
        
        return sum;
    }
};