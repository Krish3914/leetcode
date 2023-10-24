static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  bool isPerfectSquare(int num) {
    double n = sqrt(num);
    if (n == (int)n) {
      return true;
    } else {
      return false;
    }
  }
};