class Solution {
public:
  int maxOperations(vector<int> &nums) {
    if (nums.size() < 2) {
      return 0;
    }
    int i, j;
    int n = nums.size();
    int count = 0;
    int d = nums[1] + nums[0];
    cout << d << endl;
    while (nums.size() >= 2) {
      cout << nums[1] + nums[0] << "\t";
      if (nums[1] + nums[0] == d) {
        count++;
        nums.erase(nums.begin() + 0);
        nums.erase(nums.begin() + 0);
      } else {
        cout << endl;
        cout << nums[1] + nums[0];
        break;
      }
    }
    cout << ";" << endl;
    return count;
  }
};