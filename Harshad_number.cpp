static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  int sumOfTheDigitsOfHarshadNumber(int x) {
    int y = x;
    int sum = 0;
    while (x > 0) {
      sum += x % 10;
      x /= 10;
    }
    if (y % sum == 0) {
      return sum;
    }
    return -1;
  }
};