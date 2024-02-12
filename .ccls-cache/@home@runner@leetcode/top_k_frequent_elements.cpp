class Solution {
public:
  vector<int> topKFrequent(vector<int> &nums, int k) {
    priority_queue<pair<int, int>> pq;
    unordered_map<int, int> mpp;
    for (auto i : nums) {
      mpp[i]++;
    }
    for (auto i : mpp) {
      pq.push({i.second, i.first});
    }
    vector<int> ans;
    while (k-- && !pq.empty()) {
      ans.push_back(pq.top().second);
      pq.pop();
    }
    return ans;
  }
};
// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         if(k==1 && nums.size()==1){
//             return nums;
//         }
//         int i;
//         int n = nums.size();
//         unordered_map<int,int>mp;
//         for(i=0; i<n; i++){
//             mp[nums[i]]++;
//         }
//         vector<int>arr;
//         for(auto r:mp){
//             arr.push_back(r.second);
//         }
//         sort(arr.begin(),arr.end());
//         int index = arr.size()-1;
//         int ma = arr[index];
//         vector<int>ans;
//         int count=0;
//         while(count<=k){
//             for(auto r:mp){
//                 if(r.second==ma){
//                     ans.push_back(r.first);
//                     mp[r.first]=0;
//                     if(index-1>=0){ma = arr[index-1];}
//                     count++;
//                     break;
//                 }
//             }
//         }
//         return ans;
//         // vector<int>arr = nums;
//         // sort(arr.begin(),arr.end());
//         // int m = arr.size();
//         // for(i=0; i<m; i++){
//         //     if(i==0){
//         //         continue;
//         //     }
//         //     else{
//         //         if(arr[i] == arr[i-1]){
//         //             arr.erase(arr.begin() + i);
//         //             i--;
//         //             m--;
//         //         }
//         //     }
//         // }
//         // unordered_map<int,int> mp;
//         // for(i=0; i<arr.size(); i++){
//         //     mp[arr[i]] = 0;
//         // }
//         // for(i=0; i<n; i++){
//         //     mp[nums[i]]++;
//         // }
//         // for(i=0; i<arr.size(); i++){
//         //     cout<<mp[arr[i]]<<"\t";
//         // }
//         // cout<<endl;
//         // vector<int>ans;
//         // int count = 0;
//         // // for(auto r : mp){
//         // //     if(count < k){
//         // //         ans.push_back(r.first);
//         // //         count++;
//         // //     }
//         // // }/
//         // sort
//         // return ans;
//     }
// };