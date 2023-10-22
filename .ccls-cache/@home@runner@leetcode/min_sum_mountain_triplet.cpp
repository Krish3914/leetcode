static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  int minimumSum(vector<int> &nums) {
    int i, j, k;
    int n = nums.size();
    int sum = 0;
    vector<int> tri;
    for (i = 0; i < n - 2; i++) {
      for (j = i + 1; j < n - 1; j++) {
        for (k = j + 1; k < n; k++) {
          if (i < j && j < k) {
            sum = 0;
            if (nums[i] < nums[j] && nums[k] < nums[j]) {
              sum = sum + nums[i] + nums[j] + nums[k];
              tri.push_back(sum);
            } else {
              continue;
            }
          } else {
            continue;
          }
        }
      }
    }
    if (tri.size() == 0) {
      tri.push_back(-1);
    }
    int result = *min_element(tri.begin(), tri.end());
    return result;
  }
};