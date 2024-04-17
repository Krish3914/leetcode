class Solution {
public:
  bool sub(string s, string t, int a, int b) {
    int j = 0;
    int i;
    for (i = 0; i < a && j < b; i++) {
      if (s[i] == t[j]) {
        j++;
      }
    }
    return j == b;
  }
  int numMatchingSubseq(string s, vector<string> &w) {
    int i, j;
    int count = 0;
    map<string, bool> mp;
    for (i = 0; i < w.size(); i++) {
      if (mp.find(w[i]) != mp.end()) {
        if (mp[w[i]] == true) {
          count++;
        }
        continue;
      }
      mp[w[i]] = sub(s, w[i], s.size(), w[i].size());
      if (mp[w[i]] == true) {
        count++;
      }
    }
    return count;
  }
};

// map<char,int>mp1,mp2;
// for(i=0; i<s.size(); i++){
//     mp1[s[i]]++;
// }
// int count = 0;
// for(i=0; i<w.size(); i++){
//     string t = w[i];
//     mp2.clear();
//     for(j=0; j<t.size(); j++){
//         mp2[t[j]]++;
//     }
//     for(auto k:mp2){
//         if(mp1[k.first]>=k.second){
//             continue;
//         }
//         else{
//             count--;
//             break;
//         }
//     }
//     count++;
// }