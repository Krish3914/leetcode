static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  vector<vector<string>> mostPopularCreator(vector<string> &creators,
                                            vector<string> &ids,
                                            vector<int> &views) {
    int i, j;
    int nc = creators.size();
    int ni = nc;
    int nv = nc;
    long long int sum = 0;
    vector<vector<string>> ans;
    vector<string> str;
    unordered_map<string, long long int> mp;
    unordered_map<string, string> mp1;
    for (i = 0; i < nc; i++) {
      mp[creators[i]] = 0;
    }
    for (i = 0; i < nc; i++) {
      mp[creators[i]] += views[i];
    }
    long long int mav = 0;
    for (auto k : mp) {
      mav = max(mav, k.second);
      // cout<<k.first<<"\t"<<k.second<<endl;
    }
    // cout<<mav<<endl;
    unordered_map<string, int> mi;
    // int mai = 0;
    for (auto k : mp) {
      mp1[k.first] = "zzzzzzzzzz";
      mi[k.first] = 0;
    }
    // for(i=0; i<nc; i++){
    //     mi[creators[i]] = 0;
    // }
    for (i = 0; i < nc; i++) {
      if (views[i] > mi[creators[i]]) {
        mp1[creators[i]] = ids[i];
        mi[creators[i]] = views[i];
      } else if (views[i] == mi[creators[i]]) {
        mp1[creators[i]] = min(mp1[creators[i]], ids[i]);
        // mi[creators[i]] = views[i];
      }
    }
    // for(auto k:mp1){
    //     cout<<k.first<<"\t"<<k.second<<endl;
    // }
    for (auto k : mp) {
      str.clear();
      if (k.second == mav) {
        str.push_back(k.first);
        str.push_back(mp1[k.first]);
      }
      if (str.size() > 0) {
        ans.push_back(str);
      }
    }
    return ans;
  }
};