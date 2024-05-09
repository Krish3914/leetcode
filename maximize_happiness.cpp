class Solution {
public:
  long long maximumHappinessSum(vector<int> &nums, int k) {
    int i, j;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    i = n - 1;
    long long sum = 0;
    j = 0;
    while (j != k) {
      if (nums[i] - j > 0) {
        sum += nums[i] - j;
      }
      i--;
      j++;
    }
    return sum;
  }
};