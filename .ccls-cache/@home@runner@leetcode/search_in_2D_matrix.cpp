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
    int s = 0;
    int e = m - 1;
    int r = 0;
    for (i = 0; i < n; i++) {
      if (matrix[i][0] == target) {
        r = 1;
        break;
      } else {
        if (matrix[i][0] < target) {
          if (i == n - 1) {
            s = i;
            break;
          }
          continue;
        } else {
          if (i == 0) {
            break;
          }
          s = i - 1;
          break;
        }
      }
    }
    cout << r << "\t" << s << "\t" << e << endl;
    if (r == 0) {
      int start = 0;
      int end = e;
      while (start <= end) {
        if (matrix[s][start] == target) {
          r = 1;
          break;
        }
        if (matrix[s][end] == target) {
          r = 1;
          break;
        }
        start++;
        end--;
      }
      // for(i=0; i<m; i++){
      //     if(matrix[s][i] == target)
      // }
    }
    cout << r << endl;
    if (r == 1) {
      return true;
    } else {
      return false;
    }
  }
};