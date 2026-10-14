class Solution {
  public:
    int isSame(string s) {
        int i = s.size() - 1;
        int num = 0;
        int place = 1;

        while (i >= 0 && s[i] >= '0' && s[i] <= '9') {
            num = (s[i] - '0') * place + num;
            place = place * 10;
            i--;
        }

        return (i + 1 == num) ? 1 : 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna