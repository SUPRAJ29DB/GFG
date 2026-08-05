class Solution {
public:
    vector<int> frequencyCount(vector<int>& arr) {

        int n = arr.size();

        vector<int> dup(n + 1, 0);
        vector<int> ans;

        // Count frequency
        for (int x : arr)
        {
            dup[x]++;
        }

        // Store frequencies
        for (int i = 1; i <= n; i++)
        {
            ans.push_back(dup[i]);
        }

        return ans;
    }
};