class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        int i=0;
        int j=0;
        int m=s.size();
        while (i<m){
            if(s[i]!=' '){
                s[j]=s[i];
                j++;
            }
            i++;
        }
        s.resize(j);
        return s;
    }
};