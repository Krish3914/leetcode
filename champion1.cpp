static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  int findChampion(vector<vector<int>> &grid) {
    int i, j;
    int n = grid.size();
    unordered_map<int, int> mp;
    // vector<int> count;
    for (i = 0; i < n; i++) {
      mp[i] = 0;
    }
    // mp[0] = 0;
    // mp[1] = 0;
    // mp[2] = 0;
    // int count[3];
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        if (i != j) {
          if (grid[i][j] == 1) {
            mp[i]++;
          }
        }
      }
    }
    int max = 0;
    int index;
    for (i = 0; i < n; i++) {
      if (mp[i] > max) {
        max = mp[i];
        index = i;
      }
    }
    // return mp[1];
    int result = index;
    return result;
  }
};