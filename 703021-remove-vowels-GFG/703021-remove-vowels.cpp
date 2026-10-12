class Solution {
  public:
    string removeVowels(string& s) {
        // code here
        int i=0;
        int m=s.size();
        string ans =" ";
        while(i<m){
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
                ans+=s[i];
            }
            i++;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna