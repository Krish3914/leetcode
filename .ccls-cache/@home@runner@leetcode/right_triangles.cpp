class Solution {
public:
  long long numberOfRightTriangles(vector<vector<int>> &g) {
    int i, j, k;
    int n = g.size();
    int m = g[0].size();
    if (n < 2 || m < 2) {
      return 0;
    }
    unordered_map<int, int> mp, mp1;
    for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
        if (g[i][j] == 1) {
          mp[i]++;
          mp1[j]++;
        }
      }
    }
    long long count = 0;
    for (i = 0; i <= n - 1; i++) {
      for (j = 0; j <= m - 1; j++) {
        if (g[i][j] == 1) {
          count += ((mp[i] - 1) * (mp1[j] - 1));
        }
      }
    }
    return count;
  }
};