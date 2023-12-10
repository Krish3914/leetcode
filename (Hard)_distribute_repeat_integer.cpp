
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  bool canDistribute_helper(vector<int> &count, vector<int> &quantity, int i) {
    if (i >= quantity.size()) {
      return true;
    }

    for (int j = 0; j < count.size(); j++) {
      if (count[j] >= quantity[i]) {
        count[j] -= quantity[i];
        if (canDistribute_helper(count, quantity, i + 1)) {
          return true;
        }
        count[j] += quantity[i];
      }
    }
    return false;
  }
  bool canDistribute(vector<int> &nums, vector<int> &quantity) {
    sort(nums.begin(), nums.end());
    sort(quantity.rbegin(), quantity.rend());
    unordered_map<int, int> counts;

    for (int i = 0; i < nums.size(); i++) {
      counts[nums[i]]++;
    }
    vector<int> count;
    for (auto i : counts) {
      count.push_back(i.second);
    }
    return canDistribute_helper(count, quantity, 0);
  }
};
// class Solution {
// public:
//     bool canDistribute(vector<int>& nums, vector<int>& quantity) {
//         int i,j;
//         int n = nums.size();
//         vector<int> arr = nums;
//         sort(arr.begin(),arr.end());
//         unordered_map<int,int> mp;
//         int m = n;
//         for(i=0; i<m; i++){
//             if(i==0){
//                 continue;
//             }
//             else{
//                 if(arr[i] == arr[i-1]){
//                     arr.erase(arr.begin() + i);
//                     i--;
//                     m--;
//                 }
//             }
//         }
//         for(i=0; i<arr.size(); i++){
//             mp[arr[i]] = 0;
//         }
//         for(i=0; i<n; i++){
//             mp[nums[i]]++;
//         }
//         for(i=0; i<arr.size(); i++){
//             cout<<mp[arr[i]]<<"\t";
//         }
//         cout<<mp.size()<<";"<<endl;
//         // sort(mp.begin(),mp.end());
//         int q = quantity.size();
//         sort(quantity.begin(),quantity.end());
//         int result = 0;
//         int num;
//         for(i=q-1; i>=0; i--){
//             result = 0;
//             num = quantity[i];
//             int count = 0;
//             unordered_map<int, int>:: iterator p;
//             for(p = mp.begin(); p != mp.end(); p++){
//                 // auto k : mp
//                 cout<<"|"<<p->first<<"|";
//                 count++;
//                 if(mp[p->first] >= num){
//                     cout<<num<<"\t";
//                     // k.second = k.second - num;
//                     mp[p->first] -= num;
//                     cout<<p->first<<"\t"<<mp[p->first]<<"/"<<"\t";
//                     break;
//                 }
//                 else{
//                     if(count == mp.size()){
//                         result = 1;
//                         break;
//                     }
//                     else{
//                         continue;
//                     }
//                 }
//             }
//             if(result == 1){
//                 break;
//             }
//                 // cout << i.first << " \t\t\t " << i.second << endl;
//         }
//         if(result == 1){
//             return false;
//         }
//         else{
//             return true;
//         }
//     }
// };