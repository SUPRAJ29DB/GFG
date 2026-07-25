class Solution {
public:
    bool checkEqual(vector<int>& a, vector<int>& b) {

        if (a.size() != b.size())
            return false;

        unordered_map<int, int> mp;

        // Count frequencies in a
        for (int x : a)
            mp[x]++;

        // Remove frequencies using b
        for (int x : b) {

            if (mp[x] == 0)
                return false;

            mp[x]--;
        }

        return true;
    }
};