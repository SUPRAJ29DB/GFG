class Solution {
  public:
    string removeChars(string &s) {
        // code here
        int i=0;
        int m=s.size();
        string ans=" ";
        while(i<m){
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')){
                ans+=s[i];
            }
            i++;
        }
        return ans;
    }
};