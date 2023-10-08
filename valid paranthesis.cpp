class Solution {
public:
  bool isValid(string s) {
    int result[s.size()];
    int r = 1;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '(') {
        for (int j = (i + 1); j < s.size(); j++) {
          if (j == i + 1 || j == (s.size() - i - 1)) {
            if (s[j] == ')') {
              result[i] = 1;
              s.erase(s.begin() + j);
              break;
            } else {
              result[i] = 0;
            }
          } else {
            continue;
          }
        }
        continue;
      } else if (s[i] == '[') {
        for (int j = (i + 1); j < s.size(); j++) {
          if (j == i + 1 || j == (s.size() - i - 1)) {
            if (s[j] == ']') {
              result[i] = 1;
              s.erase(s.begin() + j);
              break;
            } else {
              result[i] = 0;
            }
          } else {
            continue;
          }
        }
        continue;
      } else if (s[i] == '{') {
        for (int j = (i + 1); j < s.size(); j++) {
          if (j == i + 1 || j == (s.size() - i - 1)) {
            if (s[j] == '}') {
              result[i] = 1;
              s.erase(s.begin() + j);
              break;
            } else {
              result[i] = 0;
            }
          } else {
            continue;
          }
        }
        continue;
      } else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
        result[i] = 0;
        break;
      } else {
        result[i] = 0;
      }
    }
    for (int i = 0; i < s.size(); i++) {
      r = (r & result[i]);
    }

    if (r == 1) {
      return true;
    } else {
      return false;
    }
  }
};