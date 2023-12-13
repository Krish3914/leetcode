static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  vector<int> lexicographicallySmallestArray(vector<int> &nums, int limit) {
    vector<pair<int, int>> v;
    int n = nums.size();
    for (int i = 0; i < nums.size(); i++) {
      v.push_back({nums[i], i});
    }
    sort(v.begin(), v.end());
    map<int, vector<pair<int, int>>> m;
    int g = -1;
    for (int i = 0; i < v.size(); i++) {
      if (i == 0 || v[i].first - v[i - 1].first > limit) {
        g++;
      }
      m[g].push_back(v[i]);
    }
    vector<int> ans(n);
    for (auto x : m) {
      vector<int> ele, idx;
      for (auto y : x.second) {
        ele.push_back(y.first);
        idx.push_back(y.second);
      }
      sort(idx.begin(), idx.end());
      for (int i = 0; i < idx.size(); i++) {
        ans[idx[i]] = ele[i];
      }
    }
    return ans;
  }
};
// class Solution {
// public:
//     vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit)
//     {
//         int i,j;
//         int n = nums.size();
//         int temp;
//         for(i=0; i<n; i++){
//             for(j=i+1; j<n; j++){
//                 if(nums[j] < nums[i]){
//                     if(nums[i] - nums[j] <= limit){
//                         temp = nums[i];
//                         nums[i] = nums[j];
//                         nums[j] = temp;
//                         i--;
//                         break;
//                     }
//                 }
//             }
//         }
//         return nums;
//     }
// };