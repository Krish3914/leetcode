static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  vector<string> buildArray(vector<int> &target, int n) {
    int i;
    vector<string> result;
    string a = "Push";
    string b = "Pop";
    // vector<int> num;
    int number = 1;
    if (target.size() != 0) {
      for (i = 0; i < target.size(); i++) {
        if (target[i] <= n) {
          result.push_back(a);
          if (target[i] != number) {
            result.push_back(b);
            i--;
          }
          number++;
        }
      }
    }

    return result;
  }
};