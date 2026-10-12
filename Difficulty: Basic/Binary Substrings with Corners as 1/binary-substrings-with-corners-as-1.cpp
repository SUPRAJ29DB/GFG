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
