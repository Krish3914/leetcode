static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

// optimised approach
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    int i, j;
    unordered_map<int, int> mp;
    for (i = 0; i < nums.size(); i++) {
      mp[nums[i]]++;
    }
    vector<int> arr;
    for (i = 0; i < nums.size(); i++) {
      if (nums[i] != target - nums[i]) {
        if (mp[nums[i]] > 0 && (mp[target - nums[i]]) > 0) {
          for (j = 0; j < nums.size(); j++) {
            if (nums[j] == nums[i]) {
              arr.push_back(j);
              break;
            }
          }
          for (j = 0; j < nums.size(); j++) {
            if (nums[j] == target - nums[i]) {
              arr.push_back(j);
              break;
            }
          }
          return arr;
        } else {
          continue;
        }
      } else {
        if (mp[nums[i]] < 2) {
          continue;
        } else {
          for (j = 0; j < nums.size(); j++) {
            if (nums[i] == nums[j]) {
              arr.push_back(j);
            }
            if (arr.size() == 2) {
              return arr;
            }
          }
        }
      }
    }
    return arr;
  }
};

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int,int> m;
//         vector<int> arr(2,0);
//         int i,n = nums.size();
//         for(i=0;i<n;i++){
//             if (m.count(nums[]) == 1){
//                 arr[0] = m[nums[i]];
//                 arr[1] = i;
//                 return arr;
//                 }
//             else{
//                 m[target-nums[i]] = i;
//             }
//         }
//         return arr;
//     }
// };

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int i,n= nums.size(),y,j,add1,add2;
//         for(i=0;i<n;i++){
//             if(nums[i]< target){
//                 y = (target - nums[i]);
//                 for(j = i+1; j < n; j++){
//                     if(nums[j] == y){
//                         add1 = i;
//                         add2 = j;
//                     }
//                 }

//             }
//         }
//         cout << add1;
//         cout << add2<< endl;
//     }
// };

// class Solution {
// public:
//   vector<int> twoSum(vector<int> &nums, int target) {
//     int i, n = nums.size(), y, j;
//     vector<int> arr(2);
//     for (i = 0; i < n; i++) {
//       y = (target - nums[i]);
//       for (j = i + 1; j < n; j++) {
//         if (nums[j] == y) {
//           arr[0] = i;
//           arr[1] = j;
//           break;
//         }
//       }
//       if (arr[0] != arr[1]) {
//         break;
//       }
//     }
//     return arr;
//   }
// };
