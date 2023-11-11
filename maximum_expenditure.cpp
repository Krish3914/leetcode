
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  long long maxSpending(vector<vector<int>> &values) {
    int i, j;
    // cout<<values.length();
    int n = values.size();
    int m = values[i].size();
    long long result;
    int count = 0;
    // int result;
    int sum = 0;
    vector<int> arr;
    // vector<int> sums;
    int k, num;
    int skip;
    for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++) {
        arr.push_back(values[i][j]);
      }
    }
    sort(arr.begin(), arr.end());
    // for(i=0; i<arr.size(); i++){
    //     cout<<arr[i]<<endl;
    // }
    for (i = 0; i < arr.size(); i++) {
      count = arr[i];
      skip = 0;
      for (j = 0; j < n; j++) {
        for (k = 0; k < m; k++) {
          if (values[j][k] == count) {
            // cout<<values[j][k]<<endl;
            num = values[j][k] * (i + 1);
            sum = sum + num;
            // sums.push_back(num);
            skip = 1;
            break;
          } else {
            continue;
          }
        }
        if (skip == 1) {
          break;
        }
      }
    }
    // for(i=0; i<sums.size(); i++){
    //     // cout<<sums[i]<<endl;
    //     sum = sum + sums[i];
    // }
    result = sum;
    return result;
  }
};