class Solution {
public:
  int countKeyChanges(string s) {
    int i, j;
    int n = s.size();
    int count = 0;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    for (i = 1; i < n; i++) {
      if (s[i] != s[i - 1]) {
        count++;
      }
    }
    return count;
  }
};