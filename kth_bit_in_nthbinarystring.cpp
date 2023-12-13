static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  string invert(string s) {
    int start = 0;
    int m = s.size();
    int end = m - 1;
    if (m % 2 == 0) {
      while (start < end) {
        if (s[start] == '0') {
          s[start] = '1';
        } else {
          s[start] = '0';
        }
        if (s[end] == '0') {
          s[end] = '1';
        } else {
          s[end] = '0';
        }
        start++;
        end--;
      }
    } else {
      while (start < end) {
        if (s[start] == '0') {
          s[start] = '1';
        } else {
          s[start] = '0';
        }
        if (s[end] == '0') {
          s[end] = '1';
        } else {
          s[end] = '0';
        }
        start++;
        end--;
      }
      if (s[m / 2] == '0') {
        cout << ";" << endl;
        s[m / 2] = '1';
      } else {
        s[m / 2] = '0';
      }
    }
    return s;
  }
  string rev(string s) {
    s = invert(s);
    reverse(s.begin(), s.end());
    // invert(s);
    return s;
  }
  char findKthBit(int n, int k) {
    int i, j;
    string s;
    vector<string> str;
    for (i = 0; i < n; i++) {
      if (i == 0) {
        str.push_back("0");
      } else {
        s = str[i - 1] + "1" + rev(str[i - 1]);
        str.push_back(s);
      }
    }
    // for(i=0; i<str.size(); i++){
    //     cout<<str[i]<<"\t";
    // }
    // cout<<endl;
    string t = str[n - 1];
    char ans = t[k - 1];
    return ans;
  }
};