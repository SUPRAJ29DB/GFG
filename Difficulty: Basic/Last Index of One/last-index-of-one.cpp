class Solution {
  public:
    int lastIndex(string &s) {
        // code here
        int i=0;
        int m=s.size()-1;
        while(m>=0){
            if(s[m]=='1'){
                return m;
            }
            m--;
        }
        return -1;
    }
};