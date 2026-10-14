class Solution {
  public:
    int countCamelCase(string &s) {
        // code here.
        int i=0;
        int m=s.size();
        int count=0;
        while(i<m){
            if(s[i]>='A'&&s[i]<='Z'){
                count++;
            }
            i++;
        }
        return count;
    }
};