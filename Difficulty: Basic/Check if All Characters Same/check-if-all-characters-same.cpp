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
