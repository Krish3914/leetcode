class Solution {
public:
  string minRemoveToMakeValid(string s) {
    int i;
    stack<char> st;
    int index = 0;
    for (i = 0; i < s.size(); i++) {
      if (s[i] == ')' && st.size() == 0) {
        s.erase(s.begin() + i);
        i--;
      } else if (s[i] == ')' && st.size() != 0) {
        st.pop();
      } else if (s[i] == '(') {
        st.push(s[i]);
      }
      if (i == s.size() - 1) {
        index = st.size();
      }
    }
    cout << index << endl;
    if (index != 0) {
      for (i = s.size() - 1; i >= 0; i--) {
        if (s[i] == '(') {
          s.erase(s.begin() + i);
          index--;
        }
        if (index == 0) {
          break;
        }
      }
    }
    return s;
  }
};