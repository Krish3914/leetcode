class Solution {
public:
  long long appealSum(string s) {
    vector<int> last(26);
    long res = 0, n = s.size();
    for (int i = 0; i < n; ++i) {
      last[s[i] - 'a'] = i + 1;
      for (int j : last)
        res += j;
    }
    return res;
  }
};
// class Solution {
// public:
//     long long appealSum(string s) {
//         int i,j;
//         int n = s.size();
//         unordered_map<char,int>mp;
//         int sum=0;
//         vector<string>str;
//         for(i=1; i<=n; i++){
//             for(j=0; j<=(n-i); j++){
//                 string t = s.substr(j,i);
//                 str.push_back(t);
//             }
//         }
//         for(i=0; i<str.size(); i++){
//             mp.clear();
//             for(int k=0; k<str[i].size(); k++){
//                 mp[str[i][k]]++;
//             }
//             sum += mp.size();
//         }
//         return sum;
//     }
// };