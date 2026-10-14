class Solution {
	public:
	bool allCharactersSame(string &s) {
		// code here
	int i = 0;
        int m = s.size();
        char ans = s[0];

        while (i < m) {
            if (s[i] != ans) {
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