class Solution {
  public:
    vector<int> count(string &s) {
        // code here.
        int uppercase=0;
        int lowercase=0;
        int numericvalues=0;
        int specialcharacters=0;
        int i=0;
        int m=s.size();
        while(i<m){
            if(s[i]>='A'&&s[i]<='Z'){
                uppercase++;
            }
           else if(s[i]>='a'&&s[i]<='z'){
                lowercase++;
            }
          else  if(s[i]>='0' &&s[i]<='9'){
                numericvalues++;
            }
            else{
                specialcharacters++;
            }
             i++;
        }
        return {uppercase,lowercase,numericvalues,specialcharacters};
    }
};