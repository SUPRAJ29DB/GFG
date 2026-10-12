class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        string ans = s;
        int m=s.size()-1;
        int i=0;
        while(i<m){
            if(s[i]!=s[m]){
                return false;
            }
            i++;
            m--;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna