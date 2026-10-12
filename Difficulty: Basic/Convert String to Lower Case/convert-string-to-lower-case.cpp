class Solution {
  public:
    string toLower(string& s) {
        // code here
        int i=0;
        int m=s.size();
        while(i<m){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]+=32;
            }
            i++;
        }
        return s;
    }
};