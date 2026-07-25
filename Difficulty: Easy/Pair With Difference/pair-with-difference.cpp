class Solution {
public:
    bool findPair(vector<int> &arr, int x) {

        sort(arr.begin(), arr.end());

        int n = arr.size();

        int left = 0;
        int right = 1;

        while (right < n) {

            int diff = arr[right] - arr[left];

            if (diff == x)
                return true;

            else if (diff < x)
                right++;

            else
                left++;

            // Ensure the two pointers are different
            if (left == right)
                right++;
        }

        return false;
    }
};
