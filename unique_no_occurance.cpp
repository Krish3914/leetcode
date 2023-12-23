static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  bool uniqueOccurrences(vector<int> &arr) {
    int i, j;
    int n = arr.size();
    unordered_map<int, int> count;
    for (i = 0; i < n; i++) {
      count[arr[i]] = 0;
    }
    for (i = 0; i < n; i++) {
      count[arr[i]]++;
    }
    unordered_map<int, int> mp;
    for (auto k : count) {
      mp[k.second] = 0;
    }
    for (auto k : count) {
      mp[k.second]++;
    }
    int r = 0;
    for (auto p : mp) {
      if (p.second > 1) {
        r = 1;
        break;
      }
    }
    if (r == 1) {
      return false;
    } else {
      return true;
    }
  }
};