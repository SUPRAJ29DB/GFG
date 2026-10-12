class Solution {
  public:
    string longest(vector<string>& arr) {
        string ans = arr[0];
        int i = 1;

        while (i < arr.size()) {
            if (arr[i].size() > ans.size()) {
                ans = arr[i];
            }
            i++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna