
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  vector<vector<int>> generate(int numRows) {
    int i, j;
    int n = numRows;
    vector<int> arr, arr1;
    int k;
    vector<vector<int>> result;
    // for(i=0; i<n; i++){
    // k=0;
    for (j = 1; j <= n; j++) {
      arr.clear();
      k = 0;
      while (k < j) {
        if (k == 0 || k == j - 1) {
          arr.push_back(1);
        } else {
          arr.push_back(arr1[k - 1] + arr1[k]);
        }
        // arr.push_back(1)
        k++;
      }
      arr1 = arr;
      result.push_back(arr);
    }
    // result.push_back
    // }
    return result;
  }
};