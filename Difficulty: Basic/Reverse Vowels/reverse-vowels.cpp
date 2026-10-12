class Solution {
  public:
    string modify(string& s) {
        // code here
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(s[i]!='a'&& s[i]!='e'&&s[i]!='i'&&s[i]!='o'&& s[i]!='u'){
                i++;
            }
           else if(s[j]!='a'&& s[j]!='e'&&s[j]!='i'&&s[j]!='o'&& s[j]!='u'){
              j--; 
           } 
        else{
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                i++;
                j--;
            }
        }
        return s;
    }
};
