class Solution {
  public:
    string toUpper(string& s) {
        // code here
        int i=0;
        int m=s.size();
        while(i<=m){
            if(s[i]>='a' && s[i]<='z'){
                s[i]-=32;
            }
            i++;
        }
        return s;
    }
};