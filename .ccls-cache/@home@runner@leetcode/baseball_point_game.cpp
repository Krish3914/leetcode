class Solution {
public:
  int calPoints(vector<string> &o) {
    int i, j;
    int n = o.size();
    vector<int> arr;
    int num;
    for (i = 0; i < n; i++) {
      if (o[i] == "+") {
        num = arr[arr.size() - 1] + arr[arr.size() - 2];
        arr.push_back(num);
      } else if (o[i] == "D") {
        num = 2 * arr[arr.size() - 1];
        arr.push_back(num);
      } else if (o[i] == "C") {
        int m = arr.size();
        arr.erase(arr.begin() + (m - 1));
        m--;
      } else {
        arr.push_back(stoi(o[i]));
      }
    }
    int sum = 0;
    for (i = 0; i < arr.size(); i++) {
      sum += arr[i];
    }
    return sum;
  }
};