static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  int findDuplicate(vector<int> &nums) {
    int i, number;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (i = 1; i < n; i++) {
      if (nums[i] == nums[i - 1]) {
        number = nums[i];
      }
    }
    return number;
  }
};mo