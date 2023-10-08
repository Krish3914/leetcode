static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

// class Solution {
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         int i, j, k;
//         int n = nums.size();
//         int number = 2^n;
//         vector<int> arr(2^n);
//         vector<int> a(n);
//         for(i=0; i<=n; i++){
//             if(i == 0){
//                 arr[i]= nums[i];
//             }
//             else{
//                 for(j=0;j<nCi; j++){
//                     for(k=0;k<i; k++){
//                         a[k] = nums[j];
//                     }

//                 }
//             }
//         }
//         return arr[];
//     }
// };

class Solution {
public:
  vector<vector<int>> subsets(vector<int> &nums) {
    int i, j, k;
    int n = nums.size();
    //    int number = 2^n;
    vector<vector<int>> arr;
    vector<int> a;
    for (i = 0; i < (1 << n); i++) {
      a.clear();
      for (j = 0; j < n; j++) {
        if (i & (1 << j)) {
          a.push_back(nums[j]);
        }
      }
      arr.push_back(a);
    }
    return arr;
  }
};