
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

#include <algorithm>
#include <unordered_map>
#include <vector>

class Solution {
public:
  int maxSubarrayLength(std::vector<int> &nums, int k) {
    int p = 0;
    int j = 0;
    int n = nums.size();
    std::unordered_map<int, int> ump;
    int ans = 0;

    while (j < n) {
      ump[nums[j]]++;

      while (p < j && ump[nums[j]] > k) {
        ump[nums[p]]--;
        if (ump[nums[p]] == 0) {
          ump.erase(nums[p]);
        }
        p++;
      }

      ans = std::max(ans, j - p + 1);
      j++;
    }

    return ans;
  }
};
// class Solution {
// public:
//     int maxSubarrayLength(vector<int>& nums, int k) {
//         int i,j;
//         int n = nums.size();
//         vector<int> size;
//         vector<vector<int>> arrf;
//         vector<int> arr;
//         int max = 0;
//         unordered_map<int,int> mp;
//         for(i=0; i<n; i++){
//             mp[nums[i]] = 0;
//         }
//         for(i=0; i<n; i++){
//             mp[nums[i]]++;
//         }
//         for(i=0; i<n; i++){
//             arr.clear();
//             mp.clear();
//             for(j=0; j<i; j++){
//                 mp[nums[i]]--;
//             }
//             for(j=i; j<n; j++){
//                 // mp[nums[j]]++;
//                 if(mp[nums[j]] <= k){
//                     arr.push_back(nums[j]);
//                 }
//                 else{
//                     break;
//                 }
//             }
//             arrf.push_back(arr);
//         }
//         for(i=0; i<arrf.size(); i++){
//             // cout<<arrf[i].size()<<"\t";
//             size.push_back(arrf[i].size());
//             // for(j=0; j<arrf[i].size(); j++){
//             //     cout<<arrf[i][j]<<"\t";
//             // }
//             // cout<<endl;
//         }
//         cout<<endl;
//         max = *max_element(size.begin(),size.end());
//         return max;
//     }
// };