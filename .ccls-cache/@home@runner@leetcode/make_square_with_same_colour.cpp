class Solution {
public:
  bool canMakeSquare(vector<vector<char>> &g) {
    int i, j;
    int n = g.size();
    unordered_map<char, int> mp;
    for (i = 0; i < n - 1; i++) {
      for (j = 0; j < n - 1; j++) {
        mp.clear();
        mp[g[i][j]]++;
        mp[g[i][j + 1]]++;
        mp[g[i + 1][j]]++;
        mp[g[i + 1][j + 1]]++;
        if (mp['B'] != 2) {
          return true;
        }
      }
    }
    return false;
  }
};