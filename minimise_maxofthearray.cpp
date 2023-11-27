
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  int minimizeArrayValue(vector<int> &nums) {
    int n = nums.size();
    long ans = 0, sum = 0;
    for (int i = 0; i < n; i++) {
      sum += nums[i];
      // ans = max((int)ceil((double)sum/(i+1)),ans);
      ans = max((sum + i) / (i + 1), ans);
      cout << ans << "\t";
    }
    return ans;
  }
};
// class Solution {
// public:
//     int minimizeArrayValue(vector<int>& nums) {
//         int i,j;
//         int n = nums.size();
//         int temp;
//         int key = 0;
//         for(i=1; i<n; i++){
//             if(nums[i]>nums[i-1] + 1){
//                 key = 1;
//                 break;
//             }
//             else{
//                 continue;
//             }
//         }
//         while(key != 0){
//             key = 0;
//             for(i=1; i<n; i++){
//                 if(nums[i]>nums[i-1] + 1){
//                     temp = (nums[i]+nums[i-1])/2 + (nums[i]+nums[i-1])%2;
//                     if((nums[i]+nums[i-1])%2 == 0){
//                         nums[i-1] = nums[i] = temp;
//                     }
//                     else{
//                         nums[i-1] = temp-1;
//                         nums[i] = temp;
//                     }
//                 }
//                 else{
//                     continue;
//                 }
//             }
//             for(i=1; i<n; i++){
//                 if(nums[i]>nums[i-1] + 1){
//                     key = 1;
//                     break;
//                 }
//                 else{
//                     continue;
//                 }
//             }
//             for(i=0; i<n; i++){
//                 cout<<nums[i]<<"\t";
//             }
//             cout<<endl;
//         }
//         int result = *max_element(nums.begin(),nums.end());
//         return result;
//     }
// };