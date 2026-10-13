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