class Solution {
public:
  vector<string> shortestSubstrings(vector<string> &arr) {
    int i, j, k;
    int n = arr.size();
    map<string, int> mp, mp1;
    string t, str;
    int m;
    int res = 0;
    for (i = 0; i < n; i++) {
      str = arr[i];
      m = str.size();
      mp1.clear();
      for (j = 0; j < m; j++) {
        for (k = j; k < m; k++) {
          t = str.substr(j, (k - j + 1));
          // res=1;
          mp1[t]++;
        }
      }
      for (auto l : mp1) {
        mp[l.first]++;
      }
      // if(res==1){
      //     mp[t]++;
      // }
    }
    for (auto z : mp) {
      string y = z.first;
      cout << z.first << " " << y.length() << " " << z.second << ";"
           << " ";
    }
    cout << endl;
    // string h = "good";
    // string hi = h.substr(0,1);
    // cout<<hi<<" ";
    // hi.clear();
    // cout<<";"<<hi<<";"<<endl;
    vector<string> ans;
    vector<string> s;
    string a;
    for (i = 0; i < n; i++) {
      str = arr[i];
      m = str.size();
      a.clear();
      // s.clear();
      for (j = 0; j < m; j++) {
        for (k = j; k < m; k++) {
          t = str.substr(j, (k - j + 1));
          if (mp[t] == 1) {
            // s.push_back(t);
            if (t.length() <= a.length() || a.length() == 0) {
              if (a.length() != 0) {
                if (a.length() == t.length()) {
                  a = min(a, t);
                } else {
                  a = t;
                }
              } else {
                a = t;
              }
            }
          }
        }
      }
      ans.push_back(a);
      // sort(s.begin(),s.end());
      // ans.push_back(s[0]);
    }
    return ans;
  }
};