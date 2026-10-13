class Solution {
  public:
    void merge(string &s, int left, int mid, int right) {
        string temp = "";
        int i = left;
        int j = mid + 1;

        while (i <= mid && j <= right) {
            if (s[i] <= s[j]) {
                temp += s[i++];
            } else {
                temp += s[j++];
            }
        }

        while (i <= mid) {
            temp += s[i++];
        }

        while (j <= right) {
            temp += s[j++];
        }

        for (int k = 0; k < temp.size(); k++) {
            s[left + k] = temp[k];
        }
    }

    void mergeSort(string &s, int left, int right) {
        if (left >= right) return;

        int mid = left + (right - left) / 2;

        mergeSort(s, left, mid);
        mergeSort(s, mid + 1, right);
        merge(s, left, mid, right);
    }

    string sortString(string &s) {
        mergeSort(s, 0, s.size() - 1);
        return s;
    }
};