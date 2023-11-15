
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  int maximumElementAfterDecrementingAndRearranging(vector<int> &arr) {
    int i, j;
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for (i = 0; i < n; i++) {
      if (i == 0) {
        arr[i] = 1;
      } else {
        if (arr[i] - arr[i - 1] <= 1) {
          continue;
        } else {
          arr[i] = arr[i - 1] + 1;
        }
      }
    }
    int result;
    result = arr[arr.size() - 1];
    return result;
  }
};