class Solution {
public:
  int minimumPushes(string word) {
    int n = word.size();
    int d = n / 8;
    int r = n % 8;
    int sum = 0;
    for (int i = 1; i <= d; i++) {
      sum += (i * 8);
    }
    return sum + (d + 1) * r;
    // return (8*(n/8) + n%8);
  }
};