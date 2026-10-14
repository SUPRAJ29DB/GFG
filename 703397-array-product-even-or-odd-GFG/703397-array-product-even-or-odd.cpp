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

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna