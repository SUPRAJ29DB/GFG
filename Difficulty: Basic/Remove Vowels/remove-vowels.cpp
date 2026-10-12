class Solution {
  public:
    string removeVowels(string& s) {
        // code here
        int i=0;
        int m=s.size();
        string ans =" ";
        while(i<m){
            if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
                ans+=s[i];
            }
            i++;
        }
        return ans;
    }
};