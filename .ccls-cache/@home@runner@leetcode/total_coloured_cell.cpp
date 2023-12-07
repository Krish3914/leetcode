
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  long long coloredCells(int n) {
    long long total;
    total = (2 * pow(n, 2)) - (2 * n) + 1;
    return total;
  }
};

.......................-- -- -- -- -- -- -- --........................ template

    // recursive Solution

    class Solution {
public:
  long long solve(int n) {
    if (n == 1) {
      return 1;
    }
    return (n - 1) * 4 + solve(n - 1);
  }
  long long coloredCells(int n) { return solve(n); }
};