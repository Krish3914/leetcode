class Solution {
public:
  int numRescueBoats(vector<int> &p, int l) {
    int i, j;
    int n = p.size();
    sort(p.begin(), p.end());
    int count = 0;
    for (i = n - 1; i >= 0; i--) {
      if (p[i] >= l) {
        count++;
        p.erase(p.begin() + i);
      } else {
        break;
      }
    }
    cout << count << endl;
    for (i = 0; i < p.size(); i++) {
      cout << p[i] << " ";
    }
    cout << endl;
    i = 0;
    j = p.size() - 1;
    while (p.size() > 0) {
      i = 0;
      j = p.size() - 1;
      while (i <= j) {
        if (i == j && p[i] <= l) {
          p.erase(p.begin() + i);
          count++;
          break;
        }
        if (p[i] + p[j] <= l) {
          p.erase(p.begin() + i);
          j--;
          p.erase(p.begin() + j);
          count++;
          // i++;
          j--;
        } else {
          j--;
        }
      }
      cout << count << " ";
    }
    return count;
  }
};