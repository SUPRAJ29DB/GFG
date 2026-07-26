class Solution {
public:
    void nearlySorted(vector<int>& arr, int k) {

        priority_queue<int, vector<int>, greater<int>> pq;

        int n = arr.size();

        // Push first k+1 elements
        for (int i = 0; i <= k && i < n; i++) {
            pq.push(arr[i]);
        }

        int index = 0;

        // Process remaining elements
        for (int i = k + 1; i < n; i++) {
            arr[index++] = pq.top();
            pq.pop();

            pq.push(arr[i]);
        }

        // Empty the heap
        while (!pq.empty()) {
            arr[index++] = pq.top();
            pq.pop();
        }
    }
};