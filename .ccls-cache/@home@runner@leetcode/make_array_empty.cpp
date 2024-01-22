static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  long long countOperationsToEmptyArray(vector<int> &nums) {
    long long n = nums.size();
    long long count = n;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++) {
      m[nums[i]] = i;
    }
    sort(nums.begin(), nums.end());
    for (int i = 1; i < n; i++) {
      if (m[nums[i]] < m[nums[i - 1]]) {
        count = count + n - i;
      }
    }
    return count;
  }
};
// class Solution {
// public:
//     long long countOperationsToEmptyArray(vector<int>& nums) {
//         long long count = 0;
//         while(nums.size()!=0){
//             if(nums[0]==*min_element(nums.begin(),nums.end())){
//                 nums.erase(nums.begin()+0);
//             }
//             else{
//                 int num = nums[0];
//                 nums.erase(nums.begin()+0);
//                 nums.push_back(num);
//             }
//             count++;
//         }
//         return count;
//     }
// };