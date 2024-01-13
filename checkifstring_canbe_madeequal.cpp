static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  bool checkStrings(string s1, string s2) {
    int i, j;
    int n1 = s1.size();
    int n2 = s2.size();
    unordered_map<char, int> mpo1, mpo2, mpe1, mpe2;
    for (i = 0; i < n1; i++) {
      if (i % 2 == 0) {
        mpe1[s1[i]]++;
      } else {
        mpo1[s1[i]]++;
      }
    }
    for (i = 0; i < n2; i++) {
      if (i % 2 == 0) {
        mpe2[s2[i]]++;
      } else {
        mpo2[s2[i]]++;
      }
    }
    for (auto k : mpo1) {
      cout << k.first << k.second << ";"
           << "\t";
    }
    cout << endl;
    for (auto k : mpo2) {
      cout << k.first << k.second << ";"
           << "\t";
    }
    cout << endl;
    for (auto k : mpe1) {
      cout << k.first << k.second << ";"
           << "\t";
    }
    cout << endl;
    for (auto k : mpe2) {
      cout << k.first << k.second << ";"
           << "\t";
    }
    cout << endl;
    if (mpo1 == mpo2 && mpe1 == mpe2) {
      return true;
    }
    return false;
  }
};