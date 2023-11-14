
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  int triangularSum(vector<int> &nums) {
    int i, j;
    int n = nums.size();
    int result;
    int sum;
    vector<int> arr, arr1;
    for (i = 0; i < n; i++) {
      arr.push_back(nums[i]);
      // cout<<arr[i];
      // cout<<"\t";
    }
    // cout<<endl;
    while (arr.size() > 1) {
      arr1.clear();
      for (i = 1; i <= arr.size() - 1; i++) {
        sum = arr[i - 1] + arr[i];
        arr1.push_back(sum % 10);
      }
      // for(i=0; i<arr1.size(); i++){
      //     cout<<arr1[i];
      //     cout<<"\t";
      // }
      // cout<<endl;
      arr = arr1;
    }
    // for(i=0; i<arr.size(); i++){
    //     cout<<arr[i];
    //     cout<<"\t";
    // }
    result = arr[0];
    return result;
  }
};