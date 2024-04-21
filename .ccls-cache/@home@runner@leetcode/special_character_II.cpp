class Solution {
public:
  int numberOfSpecialChars(string w) {
    int i;
    unordered_map<char, int> mp, mp1;
    for (i = 0; i < w.size(); i++) {
      mp[w[i]]++;
    }
    for (i = 0; i < w.size(); i++) {
      if (w[i] >= 'a' && w[i] <= 'z') {
        mp1[w[i]] = INT_MIN;
      } else {
        mp1[w[i]] = INT_MAX;
      }
    }
    for (i = 0; i < w.size(); i++) {
      if (w[i] >= 'a' && w[i] <= 'z') {
        mp1[w[i]] = max(mp1[w[i]], i);
      } else {
        mp1[w[i]] = min(mp1[w[i]], i);
      }
    }
    int count = 0;
    for (char k = 'a'; k <= 'z'; k++) {
      if (mp[k] > 0 && mp[char(int(k) - 32)] > 0 &&
          mp1[k] < mp1[char(int(k) - 32)]) {
        count++;
      }
    }
    return count;
  }
};