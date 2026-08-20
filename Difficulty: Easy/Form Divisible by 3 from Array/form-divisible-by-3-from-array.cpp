class Solution {
  public:
    bool isPossible(vector<int>& arr) {
        // code here
        int sum=0;
        for(int i : arr){
            while(i>0){
                sum+=i%10;
                i/=10;
            }
        }
        return sum%3==0;
    }
};