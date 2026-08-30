class Solution {
  public:
    int factorial(int n) {
        // code here
        // if (n<1){
        //     return 0;
        // }
        long long fact=1;
        for(long long i=n;i>=1;i--){
            fact*=i;
        }
        return fact;
    }
};