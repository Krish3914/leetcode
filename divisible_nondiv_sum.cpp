static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  int differenceOfSums(int n, int m) {
    int i, j;
    int num1 = 0;
    int num2 = 0;
    int diff;
    for (i = 1; i <= n; i++) {
      if (i % m == 0) {
        num2 = num2 + i;
      } else {
        num1 = num1 + i;
      }
    }
    diff = num1 - num2;
    return diff;
  }
};