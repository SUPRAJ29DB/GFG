class Solution {
  public:
    string reverseWords(string s) {
        string ans = "";
        string word = "";
        int i = 0;

        while (i < s.size()) {
            if (s[i] != '.') {
                word += s[i];
            }
            else {
                if (word != "") {
                    if (ans != "") {
                        ans = word + "." + ans;
                    }
                    else {
                        ans = word;
                    }
                    word = "";
                }
            }
            i++;
        }

        if (word != "") {
            if (ans != "") {
                ans = word + "." + ans;
            }
            else {
                ans = word;
            }
        }

        return ans;
    }
};