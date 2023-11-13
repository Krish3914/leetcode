
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  string sortVowels(string s) {
    int i, j;
    string t;
    int n = s.size();
    cout << n << endl;
    unordered_map<int, char> mp;
    int k = 0;
    mp[65] = 'A';
    mp[69] = 'E';
    mp[73] = 'I';
    mp[79] = 'O';
    mp[85] = 'U';
    mp[97] = 'a';
    mp[101] = 'e';
    mp[105] = 'i';
    mp[111] = 'o';
    mp[117] = 'u';
    // cout<<int('O')<<endl;
    vector<int> arr, arr1;
    vector<int> asc;
    for (i = 0; i < n; i++) {
      if (s[i] == mp[int(s[i])]) {
        arr.push_back(int(s[i]));
      } else {
        continue;
      }
    }
    for (i = 0; i < n; i++) {
      asc.push_back(int(s[i]));
    }
    arr1 = arr;
    sort(arr1.begin(), arr1.end());
    for (i = 0; i < arr.size(); i++) {
      cout << arr[i];
      cout << "\t";
    }
    cout << endl;
    for (i = 0; i < arr1.size(); i++) {
      cout << arr1[i];
      cout << "\t";
    }
    cout << endl;
    for (i = 0; i < asc.size(); i++) {
      cout << asc[i];
      cout << "\t";
    }
    if (arr.size() > 0) {
      for (i = 0; i < n; i++) {
        for (j = 0; j < arr.size(); j++) {
          if (asc[i] == arr[j]) {
            t.push_back(mp[arr1[k]]);
            k++;
            break;
          } else if (j == arr.size() - 1) {
            t.push_back(s[i]);
          }
        }
      }
    } else {
      t = s;
    }
    return t;
  }
};