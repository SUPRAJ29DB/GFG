class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        int i=0;
        int j=0;
        int m=s.size();
        while (i<m){
            if(s[i]!=' '){
                s[j]=s[i];
                j++;
            }
            i++;
        }
        s.resize(j);
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna