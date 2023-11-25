
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  vector<int> getSumAbsoluteDifferences(vector<int> &nums) {
    int n = nums.size();
    vector<int> prefix = {nums[0]};
    for (int i = 1; i < n; i++) {
      prefix.push_back(prefix[i - 1] + nums[i]);
    }

    vector<int> ans;
    for (int i = 0; i < n; i++) {
      int leftSum = prefix[i] - nums[i];
      int rightSum = prefix[n - 1] - prefix[i];

      int leftCount = i;
      int rightCount = n - 1 - i;

      int leftTotal = leftCount * nums[i] - leftSum;
      int rightTotal = rightSum - rightCount * nums[i];

      ans.push_back(leftTotal + rightTotal);
    }

    return ans;
  }
};
// class Solution {
// public:
//     vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
//         int i,j;
//         int n = nums.size();
//         vector<int> result;
//         int sum;
//         int total = 0;
//         for(i=0; i<n; i++){
//             total = total + nums[i];
//         }
//         cout<<total<<endl;
//         for(i=0; i<n; i++){
//             sum = 0;
//             int s1 = 0;
//             int s2 = 0;
//             // sum = abs(total - n*nums[i]);
//             for(j=0; j<i; j++){
//                 s1 = s1 + nums[j];
//             }
//             sum = sum + ((i * nums[i]) - s1);
//             for(j=i+1; j<n; j++){
//                 s2 = s2 + nums[j];
//             }
//             sum = sum + (s2 - (n-1-i)*nums[i]);
//             result.push_back(sum);
//         }
//         return result;
//     }
// };

// sum = 0;
//             int s = 0;
//             int e =n-1;
//             if(n%2 == 1){
//                 while(s<e){
//                     sum = sum + abs(nums[s] - nums[i]);
//                     s++;
//                     sum = sum + abs(nums[e] - nums[i]);
//                     e--;
//                 }
//                 sum = sum + abs(nums[i] - nums[n/2]);
//             }
//             else{
//                 while(s<e){
//                     sum = sum + abs(nums[s] - nums[i]);
//                     s++;
//                     sum = sum + abs(nums[e] - nums[i]);
//                     e--;
//                 }
//             }
//             // for(j=0; j<n; j++){
//             //     if(i!=j){
//             //         sum = sum + abs(nums[j]-nums[i]);
//             //     }
//             // }