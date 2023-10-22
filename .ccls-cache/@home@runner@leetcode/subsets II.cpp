// subsets II
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

// class Solution {
// public:
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//         int i,j,k;
//         int n = nums.size();
//         vector<vector<int>> arr;
//         vector<int> a;
//         for(i=0; i< (1<<n); i++){
//             a.clear();
//             int count = 0;
//             for(j=0; j<n; j++){
//                 if(i & (1<<j)){
//                     a.push_back(nums[j]);
//                 }
//             }
//             for(k=0; k < (i) ; k++){
//                 if(arr[k] == a){
//                     count++;
//                 }
//             }
//             if(count == 0){
//                 arr.push_back(a);
//             }
//         }
//         return arr;
//     }
// };

class Solution {
public:
  vector<vector<int>> subsetsWithDup(vector<int> &nums) {
    int i, j, k;
    int n = nums.size();
    vector<vector<int>> arr;
    vector<int> a;
    sort(nums.begin(), nums.end());
    for (i = 0; i < (1 << n); i++) {
      a.clear();
      int count = 0;
      for (j = 0; j < n; j++) {
        if (i & (1 << j)) {
          a.push_back(nums[j]);
        }
      }
      // for(k=0; k < (i) ; k++){
      //     if(arr[k] == a){
      //         count++;
      //     }
      // }
      // if(count == 0){
      //     arr.push_back(a);
      // }
      arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    for (j = 0; j < arr.size(); j++) {
      if (j == 0) {
        continue;
      } else {
        if (arr[j] == arr[j - 1]) {
          arr.erase(arr.begin() + j);
          j--;
        }
      }
    }
    return arr;
  }
};