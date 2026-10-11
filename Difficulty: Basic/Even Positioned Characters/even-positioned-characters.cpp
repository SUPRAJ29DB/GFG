void utility(string s) {
    // length of string is given by s.length()
    // character at any index i is given by s[i]

    // Write your code here
    int m=s.size();
    int i=0;
    while(i<m){
        cout<<s[i];
        i+=2;
    }
    return ;
    
}