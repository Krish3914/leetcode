
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  int findPeakElement(vector<int> &nums) {
    int i, j;
    int n = nums.size();
    int result = -1;
    if (n > 1) {
      for (i = 0; i < n; i++) {
        if (i == 0) {
          if (nums[i] > nums[i + 1]) {
            result = i;
            break;
          }
        } else if (i == (n - 1)) {
          if (nums[i] > nums[i - 1]) {
            result = i;
            break;
          }
        } else {
          if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1]) {
            result = i;
            break;
          }
        }
      }
    } else {
      result = 0;
    }
    return result;
  }
};