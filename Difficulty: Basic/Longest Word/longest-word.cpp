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