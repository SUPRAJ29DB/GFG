class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {

        vector<int> ans;
        vector<int> dup(arr.size() + 1, 0);

        // Count frequencies
        for (int x : arr)
        {
            dup[x]++;
        }

        // Find duplicates
        for (int i = 1; i <= arr.size(); i++)
        {
            if (dup[i] == 2)
            {
                ans.push_back(i);
            }
        }

        return ans;
    }
};