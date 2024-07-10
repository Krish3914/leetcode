const int fast = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  int minOperations(vector<string> &logs) {
    int count = 0;
    for (int i = 0; i < logs.size(); i++) {
      if (logs[i] == "../") {
        if (count > 0) {
          count--;
        }
      } else if (logs[i] == "./") {
        continue;
      } else {
        count++;
      }
    }
    return count;
  }
};