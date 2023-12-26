// O(m+n)
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    int i, j;
    int n = matrix.size();
    int m = matrix[0].size();
    int r = 0;
    int s = 0;
    int e = m - 1;
    while (s < n && e >= 0) {
      if (matrix[s][e] == target) {
        r = 1;
        break;
      } else {
        if (matrix[s][e] > target) {
          e--;
          continue;
        } else {
          s++;
          continue;
        }
      }
    }
    if (r == 1) {
      return true;
    } else {
      return false;
    }
  }
};