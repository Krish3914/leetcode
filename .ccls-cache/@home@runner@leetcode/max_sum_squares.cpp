static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  int maxSum(vector<int> &nums, int k) {
    int i, j;
    int n = nums.size();
    int sum = 0;
    vector<int> arr;
    sort(nums.begin(), nums.end());
    //         for(i=n-k-1; i>=n-(2*k); i--){
    //             for(j=i+k; j>=n-k; j--){
    //                 if(i == j){
    //                     continue;
    //                 }
    //                 else{
    //                     nums[i] = (nums[i] & nums[j]);
    //                     nums[j] = (nums[i] | nums[j]);

    //                     //break;
    //                 }
    //             }
    //         }
    for (i = 0; i < k; i++) {
      arr.push_back(nums[n - i - 1]);
    }
    int n1 = arr.size();
    for (i = 0; i < n1; i++) {
      sum = sum + (arr[i] * arr[i]);
    }
    return sum;
  }
};