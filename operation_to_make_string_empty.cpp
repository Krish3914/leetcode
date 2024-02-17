// class Solution {
// public:
//     string lastNonEmptyString(string s) {
//         int i,j;
//         int n = s.size();
//         string t=s;
//         unordered_map<char,int>mp,mp1;
//         for(i=0; i<n; i++){
//             mp[s[i]]++;
//         }
//         int m = mp.size();
//         vector<int>arr;
//         int r=1;
//         while(r==1){
//             mp1.clear();
//             arr.clear();
//             for(i=0; i<s.size(); i++){
//                 if(mp1[s[i]]==0){
//                     arr.push_back(i);
//                     mp1[s[i]]++;
//                 }
//                 else{
//                     mp1[s[i]]++;
//                 }
//             }
//             for(auto k:mp1){
//                 mp1[k.first]--;
//             }
//             // cout<<arr.size()<<"\t"<<mp1.size()<<endl;
//             for(i=0; i<arr.size(); i++){
//                 s.erase(s.begin()+(arr[i]-i));
//             }
//             for(auto k:mp1){
//                 if(k.second>=1){
//                     r=1;
//                     break;
//                 }
//                 else{
//                     r=0;
//                 }
//             }
//             if(r==0){
//                 // cout<<"{}"<<endl;
//                 // for(i=0; i<arr.size(); i++){
//                 //     s.erase(s.begin()+(arr[i]-i));
//                 // }
//                 return t;
//             }
//             t=s;
//             // cout<<s<<"\t"<<r<<";"<<"\t"<<endl;
//         }
//         return s;
//     }
// };
class Solution {
public:
  string lastNonEmptyString(string s) {
    map<char, int> mp, mp2;
    for (auto ch : s)
      mp[ch]++;
    int mx = 0;
    for (auto [x, y] : mp) {
      if (y > mx)
        mx = y;
    }
    cout << mx << endl;
    string ans = "";
    int n = s.size();
    for (auto x : mp) {
      if (x.second == mx)
        ans += x.first;
    }
    int cnt = ans.size();

    string res = "";
    for (auto x : ans)
      mp2[x]++;
    for (int i = n - 1; i >= 0; i--) {
      if (ans.find(s[i]) != std::string::npos and cnt > 0 and mp2[s[i]] > 0) {
        res += s[i];
        cnt--;
        mp2[s[i]]--;
      }
    }
    reverse(res.begin(), res.end());
    return res;
  }
};