
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  int minMaxGame(vector<int> &nums) {
    int i, j;
    int n = nums.size();
    int sum;
    vector<int> nums1;
    while (nums.size() > 1) {
      nums1.clear();
      cout << nums.size();
      cout << "\t";
      // sum = log(nums.size())/log(2);
      sum = nums.size() / 2;
      cout << sum << endl;
      for (i = 0; i < sum; i++) {
        if (i % 2 == 0) {
          nums1.push_back(
              *min_element(nums.begin() + 2 * i, nums.begin() + (2 * i) + 2));
          // cout<<sum;
        } else {
          nums1.push_back(
              *max_element(nums.begin() + 2 * i, nums.begin() + (2 * i) + 2));
        }
        // nums1.push_back(*min_element(nums.begin(),nums.end()));
        // nums1.push_back(*max_element(nums.begin(),nums.end()));
      }
      for (j = 0; j < nums1.size(); j++) {
        cout << nums1[j];
        cout << "\t";
      }
      cout << endl;
      nums = nums1;
    }
    int result = nums[0];
    return result;
  }
};