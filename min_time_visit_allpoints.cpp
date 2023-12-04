static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  int minTimeToVisitAllPoints(vector<vector<int>> &points) {
    int i, j;
    int n = points.size();
    int count = 0;
    vector<int> start, end;
    int x, y;
    int diffx, diffy, diff, max1, min1;
    // int a = 9;
    // int b = 3;
    // min1 = min(a,b);
    // cout<<min1<<endl;
    for (i = 1; i < n; i++) {
      start = points[i - 1];
      end = points[i];
      x = start[0];
      y = start[1];
      if (x != end[0] && y != end[1]) {
        diffx = abs(end[0] - x);
        diffy = abs(end[1] - y);
        min1 = min(diffx, diffy);
        diff = max(diffx, diffy) - min1;
        count = count + min1 + diff;
      } else if (x == end[0] && y != end[1]) {
        if (end[1] > y) {
          count = count + abs(end[1] - y);
        } else {
          count = count + abs(y - end[1]);
        }
      } else if (x != end[0] && y == end[1]) {
        if (end[0] > x) {
          count = count + abs(end[0] - x);
        } else {
          count = count + abs(x - end[0]);
        }
      } else {
        continue;
      }
    }
    return count;
  }
};