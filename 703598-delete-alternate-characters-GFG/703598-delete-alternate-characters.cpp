class Solution {
  public:
    string delAlternate(string &s) {
        // code here
        int m=s.size();
        int i=0;
        string ans=" ";
        while(i<m){
            ans+=s[i];
            i+=2;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna