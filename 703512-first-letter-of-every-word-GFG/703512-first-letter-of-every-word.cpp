class Solution {
  public:
    string firstAlphabet(string s) {
        string ans = "";
        int i = 0;

        while (i < s.size()) {
            if (i == 0 || s[i - 1] == ' ') {
                ans += s[i];
            }
            i++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna