class Solution {
  public:
    int countSquares(int n) {
        int count = sqrt(n);
        if (count * count == n) {
            return count - 1;
        }
        return count;
    }
};