class Solution {
  public:
    string toUpper(string& s) {
        // code here
        int i=0;
        int m=s.size();
        while(i<=m){
            if(s[i]>='a' && s[i]<='z'){
                s[i]-=32;
            }
            i++;
        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna