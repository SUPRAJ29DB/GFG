class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        int temp = b * b - 4 * a * c;

        if (temp < 0) {
            return {-1};
        }

        double sqrt_val = sqrt(temp);
        int root1 = floor((-b + sqrt_val) / (2.0 * a));
        int root2 = floor((-b - sqrt_val) / (2.0 * a));

        return {max(root1, root2), min(root1, root2)};
    }
};