static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  int minSum(vector<int> &nums1, vector<int> &nums2) {
    int L1 = nums1.size();
    int L2 = nums2.size();

    int sum1 = 0;
    int sum2 = 0;

    int zero1 = 0;
    int zero2 = 0;

    for (int i = 0; i < L1; ++i) {
      sum1 += nums1[i];
      if (nums1[i] == 0) {
        zero1++;
        sum1 += 1;
      }
    }

    for (int i = 0; i < L2; ++i) {
      sum2 += nums2[i];
      if (nums2[i] == 0) {
        zero2++;
        sum2 += 1;
      }
    }

    if (sum1 == sum2) {
      return sum1;
    } else if (sum1 < sum2) {
      if (zero1 > 0) {
        return sum2;
      } else {
        return -1;
      }
    } else {
      if (zero2 > 0) {
        return sum1;
      } else {
        return -1;
      }
    }
  }
};
// class Solution {
// public:
//     long long minSum(vector<int>& nums1, vector<int>& nums2) {
//         int i,j;
//         long long result;
//         int n1 = nums1.size();
//         int n2 = nums2.size();
//         int sum1 = 0;
//         int sum2 = 0;
//         int count1 = 0;
//         int count2 = 0;
//         for(i=0; i<n1; i++){
//             if(nums1[i] == 0){
//                 count1++;
//             }
//             else{
//                 sum1 = sum1 + nums1[i];
//             }
//         }
//         for(i=0; i<n2; i++){
//             if(nums2[i] == 0){
//                 count2++;
//             }
//             else{
//                 sum2 = sum2 + nums2[i];
//             }
//         }

//         if(count1 < count2){
//             if(count1 == 0){
//                 if(sum1 < sum2 + count2){
//                     result = -1;
//                 }
//                 else if(sum1 >= sum2 + count2){
//                     result == sum1;
//                 }

//             }
//             else{
//                 if(sum1 + count1 >= sum2+count2){
//                     result = sum1 + count1;
//                 }
//                 else{
//                     result = sum2 + count2;
//                 }
//                      //result = sum2 + count2;
//             }
//         }
//         if(count2 < count1){
//             if(count2 == 0){
//                 if(sum2 < sum1 + count1){
//                     result = -1;
//                 }
//                 else if(sum2 >= sum1 + count1){
//                     result == sum2;
//                 }

//             }
//             else{
//                 if(sum2 + count2 >= sum1+count1){
//                     result = sum2 + count2;
//                 }
//                 else{
//                     result = sum1 + count1;
//                 }

//             }

//         }
//         return result;
//     }
// };