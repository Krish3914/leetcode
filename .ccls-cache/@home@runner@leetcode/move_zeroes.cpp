static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    int i;
    int n = nums.size();
    vector<int> result;
    for (i = n - 1; i >= 0; i--) {
      if (nums[i] == 0) {
        result.erase(result.begin() + i);
        // i--;
        result.push_back(0);
      } else {
        continue;
      }
    }
    nums = result;
  }
};