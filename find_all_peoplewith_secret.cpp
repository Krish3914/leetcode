static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  vector<int> findAllPeople(int n, vector<vector<int>> &meetings,
                            int firstPerson) {
    vector<bool> visited(n, false);
    vector<int> res;
    visited[0] = visited[firstPerson] = true;
    sort(meetings.begin(), meetings.end(),
         [](const auto &a, const auto &b) { return a[2] < b[2]; });

    for (int i = 0; i < meetings.size();) {
      int endidx = i;
      while (endidx + 1 < meetings.size() &&
             meetings[endidx + 1][2] == meetings[i][2]) {
        endidx++;
      }
      unordered_map<int, vector<int>> g;
      for (int j = i; j <= endidx; j++) {
        int peopleA = meetings[j][0], peopleB = meetings[j][1];
        g[peopleA].push_back(peopleB);
        g[peopleB].push_back(peopleA);
      }
      queue<int> q;
      for (auto [key, peoples] : g) {
        if (visited[key])
          q.push(key);
      }
      while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (auto nei : g[node]) {
          if (!visited[nei]) {
            visited[nei] = true;
            q.push(nei);
          }
        }
      }
      i = endidx + 1;
    }
    for (int i = 0; i < n; i++) {
      if (visited[i])
        res.push_back(i);
    }
    return res;
  }
};
// class Solution {
// public:
//     vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int fp) {
//         int i,j;
//         int m = meetings.size();
//         int s = 3;
//         vector<vector<int>>arr;
//         vector<int>ans;
//         unordered_map<int,int>mp;
//         for(i=0; i<=n; i++){
//             if(i==0){
//                 mp[i]=1;
//             }
//             else{
//                 mp[i]=0;
//             }
//         }
//         mp[fp]=1;
//         vector<int>time;
//         for(i=0; i<m; i++){
//             time.push_back(meetings[i][2]);
//         }
//         int t1 = *min_element(time.begin(),time.end());
//         int t = *max_element(time.begin(),time.end());
//         for(i=t1; i<=t; i++){
//             for(j=0; j<m; j++){
//                 if(meetings[j][2]==i){
//                     arr.push_back(meetings[j]);
//                 }
//             }
//         }
//         m = arr.size();
//         vector<vector<int>>ar;
//         vector<int>ar1;
//         for(i=0; i<m; i++){
//             int ct = arr[i][2];
//             ar1.clear();
//             while(arr[i][2]==ct){
//                 ar1.push_back(arr[i][0]);
//                 ar1.push_back(arr[i][1]);
//                 i++;
//                 if(i>=m){
//                     break;
//                 }
//             }
//             ar.push_back(ar1);
//             i--;
//             // int index=i;
//             // while(arr[i][2]==ct){
//             //     if((mp[arr[i][0]]==1 && mp[arr[i][1]]==0) ||
//             (mp[arr[i][0]]==0 && mp[arr[i][1]]==1)){
//             //         mp[arr[i][0]]=1;
//             //         mp[arr[i][1]]=1;
//             //         // i=index-1;
//             //         i=index;
//             //         continue;
//             //     }
//             //     i++;
//             //     if(i>=m){
//             //         break;
//             //     }
//             // }
//             // if(i==m){
//             //     break;
//             // }
//             // i--;
//         }
//         for(i=0;i<ar.size(); i++){
//             ar1 = ar[i];
//             int r=0;
//             for(j=0; j<ar1.size(); j++){
//                 if(mp[ar1[j]]==1){
//                     r=1;
//                     break;
//                 }
//             }
//             if(r==1){
//                 for(j=0; j<ar1.size(); j++){
//                     mp[ar1[j]]=1;
//                 }
//             }
//         }
//         // // for(i=0; i<m; i++){
//         // //     cout<<arr[i][0]<<";"<<arr[i][1]<<";"<<arr[i][2]<<"\t";
//         // // }
//         // for(i=0; i<m; i++){
//         //     int ct = arr[i][2];
//         //     int index=i;
//         //     while(arr[i][2]==ct){
//         //         if((mp[arr[i][0]]==1 && mp[arr[i][1]]==0) ||
//         (mp[arr[i][0]]==0 && mp[arr[i][1]]==1)){
//         //             mp[arr[i][0]]=1;
//         //             mp[arr[i][1]]=1;
//         //             // i=index-1;
//         //             i=index;
//         //             continue;
//         //         }
//         //         i++;
//         //         if(i>=m){
//         //             break;
//         //         }
//         //     }
//         //     if(i==m){
//         //         break;
//         //     }
//         //     i--;
//         // }
//         // // for(i=0; i<m; i++){
//         // //     if(mp[arr[i][0]]==1 || mp[arr[i][1]]==1){
//         // //         mp[arr[i][0]]=1;
//         // //         mp[arr[i][1]]=1;
//         // //     }
//         // // }
//         for(auto k:mp){
//             if(k.second==1){
//                 ans.push_back(k.first);
//             }
//         }
//         return ans;
//     }
// };