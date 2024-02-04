class Solution {
public:
  string triangleType(vector<int> &nums) {
    int i, j;
    int n = nums.size();
    string s1 = "scalene";
    string s2 = "isosceles";
    string s3 = "equilateral";
    string s4 = "none";
    if (n != 3) {
      return s4;
    }
    sort(nums.begin(), nums.end());
    if (nums[0] + nums[1] > nums[2]) {
      if (nums[0] == nums[1] && nums[0] == nums[2]) {
        return s3;
      }
      if (nums[0] == nums[1] || nums[0] == nums[2] || nums[1] == nums[2]) {
        return s2;
      }
      return s1;
    } else {
      return s4;
    }
  }
};