class Solution {
public:
  long long minOperationsToMakeMedianK(vector<int> &nums, int k) {
    int i, j;
    long long ans = 0;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    if (n % 2 == 1) {
      if (nums[n / 2] == k) {
        return ans;
      } else if (nums[n / 2] < k) {
        for (i = n / 2; i < n; i++) {
          if (nums[i] < k) {
            ans += (k - nums[i]);
          } else {
            break;
          }
        }
      } else {
        for (i = n / 2; i >= 0; i--) {
          if (nums[i] > k) {
            ans += (nums[i] - k);
          } else {
            break;
          }
        }
      }
    } else {
      if (max(nums[(n / 2) - 1], nums[n / 2]) == k) {
        return ans;
      } else if (nums[n / 2] < k) {
        for (i = n / 2; i < n; i++) {
          if (nums[i] < k) {
            ans += (k - nums[i]);
          } else {
            break;
          }
        }
      } else {
        for (i = n / 2; i >= 0; i--) {
          if (nums[i] > k) {
            ans += (nums[i] - k);
          } else {
            break;
          }
        }
      }
    }
    return ans;
  }
};