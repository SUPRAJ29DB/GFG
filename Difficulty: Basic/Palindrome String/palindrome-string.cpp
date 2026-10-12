class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        string ans = s;
        int m=s.size()-1;
        int i=0;
        while(i<m){
            if(s[i]!=s[m]){
                return false;
            }
            i++;
            m--;
        }
        return true;
    }
};