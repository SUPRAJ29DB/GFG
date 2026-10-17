class Solution {
  public:
    vector<int> remDuplicate(vector<int>& arr) {
        int m = arr.size();
        vector<int> ans;
        int i = 0;

        while (i < m) {
            int j = 0;
            bool duplicate = false;

            while (j < ans.size()) {
                if (arr[i] == ans[j]) {
                    duplicate = true;
                    break;
                }
                j++;
            }

            if (!duplicate) {
                ans.push_back(arr[i]);
            }

            i++;
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna