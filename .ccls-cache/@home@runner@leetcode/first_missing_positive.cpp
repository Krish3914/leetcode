static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

// class Solution {
// public:
//   int firstMissingPositive(vector<int> &nums) {
//     int i, j;
//     int n = nums.size();
//     int number;
//     sort(nums.begin(), nums.end());
//     for (i = 0; i < n; i++) {
//       if (i == 0) {
//         continue;
//       } else if (nums[i] == nums[i - 1]) {
//         nums.erase(nums.begin() + i);
//         i--;
//         n--;
//       }
//       // n = nums.size();
//     }
//     n = nums.size();
//     for (i = 0; i < n; i++) {
//       if (i == 0) {
//         if (nums[i] > 1) {
//           number = 1;
//           break;
//         } else {
//           if (nums[i] < 0) {
//             // continue;
//           }
//           nums[i] = nums[i] + 1;
//         }
//         // continue;
//       }
//       if (i == n - 1) {
//         if (i == 0) {
//           nums[i] = nums[i] - 1;
//         }
//         if (nums[i] <= 0) {
//           number = 1;
//           break;
//         } else if (nums[i] == 1) {
//           number = 2;
//           break;
//         } else if (nums[i] > 1) {
//           if (nums[i] == nums[i - 1]) {
//             number = nums[i] + 1;
//             break;
//           } else {
//             if (nums[i - 1] <= 0) {
//               number = 1;
//               break;
//             } else {
//               number = nums[i - 1];
//               break;
//             }
//           }
//         }
//       }
//       if (i > 0 && i < n - 1) {
//         if (nums[i] <= 0) {
//           continue;
//         } else if (nums[i] == 1) {
//           nums[i] = nums[i] + 1;
//           continue;

//         } else if (nums[i] == nums[i - 1]) {
//           nums[i] = nums[i] + 1;
//           continue;
//         } else {
//           if (nums[i - 1] <= 0) {
//             number = 1;
//             break;
//           } else {
//             number = nums[i - 1];
//             break;
//           }
//         }
//       }
//     }
//     return number;
//   }
// };
class Solution {
public:
  int firstMissingPositive(vector<int> &nums) {
    int j = 1;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    // for(int i=0; i<n; i++){
    //     if(i == 0){
    //         continue;
    //     }
    //     else if(nums[i] == nums[i-1]){
    //         nums.erase(nums.begin() + i);
    //         i--;
    //         n--;
    //     }
    //     // n = nums.size();
    // }
    // n = nums.size();
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] < 0 || nums[i] == 0) {
        continue;
      }
      if (nums[i] != j) {
        break;
      } else {
        j++;
      }
    }
    return j;
  }
};