static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  bool isMonotonic(vector<int> &nums) {
    int i, j;
    int n = nums.size();
    int countinc = 0;
    int countdec = 0;
    for (i = 1; i < n; i++) {
      // for(j=i+1; j<n; j++){
      //     if(i<=j){
      //         if(nums[i] < nums[j]){
      //             countinc++;
      //         }
      //         else if(nums[i] > nums[j]){
      //             countdec++;
      //         }
      //         if(nums[i] == nums[j]){
      //             countinc++;
      //             countdec++;
      //         }
      //     }
      // }
      if (nums[i] < nums[i - 1]) {
        countinc++;
      } else if (nums[i] > nums[i - 1]) {
        countdec++;
      } else {
        countinc++;
        countdec++;
      }
    }
    if (countinc == n - 1 || countdec == n - 1) {
      return true;
    } else {
      return false;
    }
  }
};