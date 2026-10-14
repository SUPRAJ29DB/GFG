class Solution {
  public:
    string delAlternate(string &s) {
        // code here
        int m=s.size();
        int i=0;
        string ans=" ";
        while(i<m){
            ans+=s[i];
            i+=2;
        }
        return ans;
    }
};