class Solution {
  public:
    string concatenatedString(string s1, string s2) {
        string result = "";
        int i = 0;

        while (i < s1.size()) {
            int j = 0;
            bool found = false;

            while (j < s2.size()) {
                if (s1[i] == s2[j]) {
                    found = true;
                    break;
                }
                j++;
            }

            if (!found) {
                result += s1[i];
            }
            i++;
        }

        i = 0;
        while (i < s2.size()) {
            int j = 0;
            bool found = false;

            while (j < s1.size()) {
                if (s2[i] == s1[j]) {
                    found = true;
                    break;
                }
                j++;
            }

            if (!found) {
                result += s2[i];
            }
            i++;
        }

        if (result == "") {
            return "-1";
        }

        return result;
    }
};