class Solution {
public:
    bool isSubset(vector<int> &a, vector<int> &b) {

        unordered_map<int, int> mp;

        // Store frequency of elements in a
        for (int x : a) {
            mp[x]++;
        }

        // Check every element of b
        for (int x : b) {

            if (mp[x] == 0)
                return false;

            mp[x]--;
        }

        return true;
    }
};