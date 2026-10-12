class Solution {
	public:
	int binarySubstring(string& s) {
		// code here
		long long ones = 0;
		int i = 0;
	int 	n=s.size();
		while (i < n) {
			if (s[i] == '1') {
				ones++;
			}
			i++;
		}
		
		return ones * (ones - 1) / 2;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna