class Solution {
  public:
    bool divisibleBy4(string& s) {
        // code here
        int i=0;
        int num=0;
        int n=s.size();
        if(n==1){
            num=s[0]-'0';
        }
        else{
            num=(s[n-2]-'0')*10+(s[n-1]-'0');
        }
        if(num%4==0){
            return true;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna