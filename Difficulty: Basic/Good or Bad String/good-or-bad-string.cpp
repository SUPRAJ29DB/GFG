class Solution {
  public:
    bool isGoodOrBad(string &s) {
        int i = 0;
        int vowels = 0;
        int consonant = 0;
        int m = s.size();

        while (i < m) {
            if (s[i] == 'a' || s[i] == 'e' ||
                s[i] == 'i' || s[i] == 'o' ||
                s[i] == 'u') {
                vowels++;
                consonant = 0;
            }
            else if (s[i] == '?') {
                vowels++;
                consonant++;
            }
            else {
                consonant++;
                vowels = 0;
            }

            if (vowels > 5 || consonant > 3) {
                return false;
            }

            i++;
        }

        return true;
    }
};