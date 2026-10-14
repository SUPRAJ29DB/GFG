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