class Solution {
public:
  vector<string> reorderLogFiles(vector<string> &logs) {
    int i, j;
    vector<string> lt, dg;
    for (i = 0; i < logs.size(); i++) {
      if (logs[i][(logs[i].size()) - 1] >= '0' &&
          logs[i][(logs[i].size()) - 1] <= '9') {
        dg.push_back(logs[i]);
      } else {
        lt.push_back(logs[i]);
      }
    }
    vector<string> ltf;
    unordered_map<string, vector<string>> mpstr;
    for (i = 0; i < lt.size(); i++) {
      string t = lt[i];
      int j = 0;
      while (t[j] != ' ') {
        j++;
      }
      string str = t.substr(j + 1, (t.size() - (j + 1)));
      ltf.push_back(str);
      mpstr[str].push_back(t);
    }
    sort(ltf.begin(), ltf.end());
    logs.clear();
    for (i = 0; i < ltf.size(); i++) {
      if (i == 0) {
        continue;
      }
      if (ltf[i] == ltf[i - 1]) {
        ltf.erase(ltf.begin() + i);
        i--;
      }
    }
    for (i = 0; i < ltf.size(); i++) {
      // logs.push_back(mpstr[ltf[i]]);
      // cout<<mpstr[ltf[i]]<<";"<<" ";
      vector<string> tt = mpstr[ltf[i]];
      sort(tt.begin(), tt.end());
      for (int j = 0; j < tt.size(); j++) {
        logs.push_back(tt[j]);
        cout << tt[j] << ";"
             << " ";
      }
    }
    cout << endl;
    for (i = 0; i < dg.size(); i++) {
      logs.push_back(dg[i]);
      cout << dg[i] << ";"
           << " ";
    }
    return logs;
  }
};