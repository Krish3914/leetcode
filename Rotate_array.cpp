static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  vector<int> rotate(vector<int> &nums, int k) {
    int i, j;
    int count = 0;
    int temp;
    int n = nums.size();
    vector<int> newarr(n);
    vector<int> arr;
    // while(count < k){
    //     if(n>1){for(i=n-1; i>=0; i--){
    //         if(i == n-1){
    //             temp = nums[i];
    //             nums[i] = nums[i-1];
    //         }
    //         else if(i == 0){
    //             nums[i] = temp;
    //         }
    //         else{
    //             nums[i] = nums[i-1];
    //         }
    //         // for(j=0; j<n; j++){
    //         //     cout<<nums[j];
    //         // }
    //     }}
    //     // else{

    //     // }
    //     // cout<<endl;
    //     count++;
    // }
    if (n > 1) {
      for (i = 0; i < n; i++) {
        temp = nums[i];
        if ((i + k) <= n - 1) {
          newarr[i + k] = nums[i];
        } else {
          j = (i + k) - n;
          while (j > n - 1) {
            j = j - n;
          }
          newarr[j] = nums[i];
        }
      }
      for (i = 0; i < n; i++) {
        cout << newarr[i] << endl;
      }
      nums.clear();
      for (i = 0; i < n; i++) {
        nums.push_back(newarr[i]);
      }
    }
    return nums;
  }
};