class Solution {
  public:
    bool isBinary(string& s) {
        // code here
        int i=0;
     long long    int m=s.size();
        while(i<m){
            if(s[i]!='0' && s[i]!='1'){
                return false;
            }
            i++;
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna