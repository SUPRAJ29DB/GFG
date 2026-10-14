long long int modify(long long int n) {
    // code here
    string ans=" ";
    string s=to_string(n);
    int i=0;
    while (i<s.size()){
        if(i==0 ||s[i]!=s[i-1]){
            ans+=s[i];
        }
        i++;
    }
     return stoll(ans);
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna