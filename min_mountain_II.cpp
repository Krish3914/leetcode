class Solution {
public:
  int minimumSum(vector<int> &nums) {
    int len = nums.size();
    vector<int> prefix(len);
    vector<int> suffix(len);
    int min_val = nums[0];

    for (int i = 0; i < len; i++) {
      int val = nums[i];
      if (val < min_val) {
        min_val = val;
      }
      prefix[i] = min_val;
    }

    int min_val2 = nums[len - 1];

    for (int i = len - 1; i >= 0; i--) {
      int val = nums[i];
      if (val < min_val2) {
        min_val2 = val;
      }
      suffix[i] = min_val2;
    }

    int answer = -1;

    for (int i = 1; i < len - 1; i++) {
      if (nums[i] > prefix[i - 1] && nums[i] > suffix[i + 1]) {
        int summation = nums[i] + prefix[i - 1] + suffix[i + 1];
        if (answer == -1) {
          answer = summation;
        } else {
          if (summation < answer) {
            answer = summation;
          }
        }
      }
    }

    return answer;
  }
};