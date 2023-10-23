static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  int strStr(string haystack, string needle) {
    int i, i1, j;
    int n1 = haystack.length();
    int n2 = needle.length();
    int result;
    if (n2 > n1) {
      return -1;
    } else {
      for (i = 0; i < n1; i++) {
        j = 0;
        if (haystack[i] == needle[j]) {
          result = i;
          i1 = i + 1;
          j++;
          while (haystack[i1] && needle[j]) {
            if (haystack[i1] != needle[j]) {
              break;
            }
            i1++;
            j++;
          }
          if (j == n2) {
            return result;
          }
        }
      }
    }
    return -1;
  }
};