class Solution {
  public:
    string maxZero(vector<string> &arr) {

        int maxZero = 0;
        string ans = "-1";

        for(int i = 0; i < arr.size(); i++) {

            int count = 0;

            // Count zeros in arr[i]
            for(int j = 0; j < arr[i].size(); j++) {
                if(arr[i][j] == '0') {
                    count++;
                }
            }

            // More zeros
            if(count > maxZero) {
                maxZero = count;
                ans = arr[i];
            }

            // Same zeros → choose larger number
            else if(count == maxZero && count > 0) {

                if(arr[i].size() > ans.size()) {
                    ans = arr[i];
                }
                else if(arr[i].size() == ans.size() && arr[i] > ans) {
                    ans = arr[i];
                }
            }
        }

        return ans;
    }
};