
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  int thirdMax(vector<int> &nums) {
    int i;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<int> max;
    int result;
    if (nums.size() > 2) {
      for (i = n - 1; i >= 0; i--) {
        if (max.size() < 3) {
          if (i == n - 1) {
            max.push_back(nums[i]);
            continue;
          } else {
            if (nums[i] == nums[i + 1]) {
              continue;
            } else {
              max.push_back(nums[i]);
            }
          }
        } else {
          break;
        }
      }
    } else {
      max = nums;
      while (max.size() <= 3) {
        max.push_back(*max_element(nums.begin(), nums.end()));
      }
    }
    while (max.size() <= 3) {
      max.push_back(*max_element(nums.begin(), nums.end()));
    }
    result = max[2];
    return result;
  }
};