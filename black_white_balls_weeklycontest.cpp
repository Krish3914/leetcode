class Solution {
public:
  long long minimumSteps(string s) {
    int i, j;
    int n = s.size();
    long long count;
    for (i = 0; i < n; i++) {
      cout << s[i] << "\t";
    }
    cout << endl;
    for (i = 0; i < n; i++) {
      if (i == 0) {
        cout << s[i] << endl;
        cout << s[i + 1] << endl;
        // if(s[i] = 1){
        //     cout<<"-"<<endl;
        // }
        // if(s[i+1] = 0){
        //     cout<<"+"<<endl;
        // }
        if ((s[i] == 1) && (s[i + 1] == 0)) {
          cout << "." << endl;
          swap(s[i], s[i + 1]);

        } else {
          cout << "k" << endl;
        }
        // cout<<"."<<endl;
      } else if (i == n - 1) {
        if (s[i] == 0 && s[i - 1] == 1) {
          swap(s[i - 1], s[i]);
        }
      } else {
        if (s[i] == 0 && s[i - 1] == 1) {
          swap(s[i - 1], s[i]);
        } else if (s[i] == 1 && s[i + 1] == 0) {
          swap(s[i], s[i + 1]);
        }
      }
      cout << s << endl;
    }
    for (i = 0; i < s.size(); i++) {
      cout << s[i] << "\t";
    }
    return count;
  }
};