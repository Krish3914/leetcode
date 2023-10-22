static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  vector<int> searchRange(vector<int> &nums, int target) {
    vector<int> arr;
    int i;
    int n = nums.size();
    int start = -1;
    int end = -1;
    // // int start = 0;
    // // int end = n-1;
    // if(n == 0){
    //     arr.push_back(-1);
    //     arr.push_back(-1);
    // }
    // else{
    //     for(i=0; i<n; i++){
    //         if(nums[i] == target){
    //             arr.push_back(i);
    //             break;
    //         }
    //         else if(i == n-1){
    //             arr.push_back(-1);
    //         }
    //         else{
    //             continue;
    //         }
    //     }
    //     for(i=n-1; i>=0; i--){
    //         if(nums[i] == target){
    //             arr.push_back(i);
    //             break;
    //         }
    //         else if(i == 0){
    //             arr.push_back(-1);
    //         }
    //         else{
    //             continue;
    //         }
    //     }
    //     sort(arr.begin(), arr.end());
    // }
    for (i = 0; i < n; i++) {
      if (nums[i] == target) {
        if (start == -1) {
          start = i;
        } else {
          end = i;
        }
      } else {
        continue;
      }
    }
    if (start != -1 && end == -1) {
      end = start;
    }
    arr.push_back(start);
    arr.push_back(end);
    return arr;
  }
};