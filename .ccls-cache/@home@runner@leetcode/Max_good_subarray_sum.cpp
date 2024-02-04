// class Solution {
// public:
//     long long maximumSubarraySum(vector<int>& nums, int k) {
//         int i,j;
//         int n = nums.size();
//         long long sum=0;
//         int s = 0;
//         int e = n-1;
//         int i1=-1,i2=-1;
//         vector<long long>arr;
//         while(e>0){
//             s=0;
//             while(s<=e){
//                 if(abs(nums[s]-nums[e])==k){
//                     sum=0;
//                     i1=s;
//                     i2=e;
//                     for(i=i1; i<=i2; i++){
//                         sum+=nums[i];
//                     }
//                     arr.push_back(sum);
//                     // break;
//                 }
//                 s++;
//             }
//             e--;
//         }
//         // for(i=i1; i<=i2; i++){
//         //     sum+=nums[i];
//         // }
//         long long ans=0;
//         if(arr.size()>0){ans = *max_element(arr.begin(),arr.end());}
//         return ans;
//     }
// };
class Solution {
public:
  long long maximumSubarraySum(vector<int> &nums, int k) {
    map<int, vector<int>> mp;
    vector<long long> ps(nums.size());
    ps[0] = nums[0];
    for (int i = 1; i < nums.size(); i++) {
      ps[i] = ps[i - 1] + nums[i];
    }
    long long maxsum = LONG_MIN;
    bool present = false;
    long long ans;

    for (int i = 0; i < nums.size(); i++) {
      if (mp.find(nums[i] - k) != mp.end()) {
        present = true;
        for (auto x : mp[nums[i] - k]) {
          if (x == 0)
            ans = ps[i];
          else
            ans = ps[i] - ps[x - 1];
          maxsum = max(maxsum, ans);
        }
      }
      if (mp.find(nums[i] + k) != mp.end()) {
        present = true;
        for (auto x : mp[nums[i] + k]) {
          if (x == 0)
            ans = ps[i];
          else
            ans = ps[i] - ps[x - 1];
          maxsum = max(maxsum, ans);
        }
      }
      mp[nums[i]].push_back(i);
    }
    return present ? maxsum : 0;
  }
};