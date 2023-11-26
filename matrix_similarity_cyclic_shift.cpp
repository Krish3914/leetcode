
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  bool areSimilar(vector<vector<int>> &mat, int k) {
    int i, j, m;
    int n = mat.size();
    int nr = mat[0].size();
    cout << n << endl;
    cout << nr << endl;
    vector<vector<int>> ans;
    unordered_map<int, int> cnt;
    int tempo, tempn;
    for (i = 0; i < n; i++) {
      cnt[i] = 0;
    }
    vector<int> arr, arr1;
    for (i = 0; i < n; i++) {
      arr.clear();
      for (j = 0; j < nr; j++) {
        arr.push_back(mat[i][j]);
      }
      while (cnt[i] < k) {
        if (i % 2 == 1) {
          tempn = arr[nr - 1];
          for (m = 0; m < arr.size(); m++) {
            if (m == 0) {
              tempo = arr[m];
              arr[m] = tempn;
            } else {
              tempo = arr[m];
              arr[m] = tempn;
              // arr[i] = temp;
            }
            tempn = tempo;
          }
        } else {
          tempn = arr[0];
          for (m = nr - 1; m >= 0; m--) {
            if (m == nr - 1) {
              tempo = arr[m];
              arr[m] = tempn;
            } else {
              tempo = arr[m];
              arr[m] = tempn;
              // arr[i] = temp;
            }
            tempn = tempo;
          }
        }
        for (m = 0; m < nr; m++) {
          cout << arr[m] << "\t";
        }
        cout << endl;
        cnt[i]++;
      }
      ans.push_back(arr);
    }
    // for(i=0; i<n; i++){
    //     for(j=0; j<nr; j++){
    //         cout<<ans[i][j]<<"\t";
    //     }
    //     cout<<endl;
    // }
    if (ans == mat) {
      return true;
    } else {
      return false;
    }
  }
};