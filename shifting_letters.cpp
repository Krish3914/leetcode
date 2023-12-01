
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  // #define 'a' = 'z'+1;
  string shiftingLetters(string s, vector<int> &shifts) {
    int i, j;
    int n = s.size();
    int n1 = n;
    string t;
    char c;
    long long sum = 0;
    for (i = 0; i < n; i++) {
      sum = sum + shifts[i];
    }
    // char a = 'z' + 1;/
    cout << sum << ";" << endl;
    for (i = 0; i < n; i++) {
      c = s[i];
      s[i] = char(((int(c) - 97 + sum) % 26) + 97);
      sum = sum - shifts[i];
      // for(j=i; j<n;)
      // for(j=0; j<=i; j++){
      //     c = s[j];
      //     // cout<<int(c)-97<<"\t";
      //     // s[j] = char(((int(c)-97 + shifts[i])%26)+97);
      // }
      // cout<<s<<endl;
    }
    return s;
  }
};