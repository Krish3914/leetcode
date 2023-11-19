
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  int reductionOperations(vector<int> &nums) {
    int n = nums.size();
    int ans = 0;
    sort(nums.begin(), nums.end());
    int count = 0, largest = nums[n - 1];
    int ptr = n - 1;
    while (ptr >= 0) {
      if (nums[ptr] == largest) {
        count++;
        ptr--;
      } else {
        largest = nums[ptr];
        ans += count;
      }
    }
    return ans;
  }
};
// class Solution {
// public:
//     int reductionOperations(vector<int>& nums) {
//         int i,j;
//         int n = nums.size();
//         // int result;
//         sort(nums.begin(), nums.end());
//         long long count = 0;
//         int sl = nums[n-1];
//         int max;
//         int index = n-1;
//         int temp;
//         while(nums[0] != nums[n-1]){
//             max = sl;
//             temp = 0;
//             for(i=index; i>=0; i--){
//                 if(nums[i] < max){
//                     sl = nums[i];
//                     index = i;
//                     break;
//                 }
//                 else{
//                     temp++;
//                 }
//             }
//             // cout<<count<<endl;
//             count = count + count + temp;

//             // for(j=index+1; j<n; j++){
//             //     nums[j] = sl;
//             //     count++;
//             // }
//             nums[n-1] = sl;
//         }
//         return count;
//     }
// };

// else{
//     sl = nums[i];
//     index = i;
//     break;
//     // if(nums[i] < max){
//     //     sl = nums[i];
//     //     index = i;
//     //     break;
//     // }
// }

// if(nums[i] == max){
//     nums[i] = sl;
//     count++;
// }

// sort(nums.begin(),nums.end());
// for(i=0; i<nums.size(); i++){
//     cout<<nums[i]<<"\t";
// }
// cout<<endl;

// cout<<"ans : "<<"\t";
// for(i=0; i<nums.size(); i++){
//     cout<<nums[i]<<"\t";
// }
// result = count;