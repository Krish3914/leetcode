static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  int maximizeSquareArea(int m, int n, vector<int> &hFences,
                         vector<int> &vFences) {
    int i, j;
    vector<int> arr1, arr2;
    int area = 1;
    sort(hFences.begin(), hFences.end());
    sort(vFences.begin(), vFences.end());
    arr1.push_back(1);
    for (i = 0; i < hFences.size(); i++) {
      arr1.push_back(hFences[i]);
    }
    arr1.push_back(m);
    arr2.push_back(1);
    for (i = 0; i < vFences.size(); i++) {
      arr2.push_back(vFences[i]);
    }
    arr2.push_back(n);
    for (i = 0; i < arr1.size(); i++) {
      cout << arr1[i] << "\t";
    }
    cout << endl;
    for (i = 0; i < arr2.size(); i++) {
      cout << arr2[i] << "\t";
    }
    cout << endl;
    vector<int> d1, d2;
    for (i = 0; i < arr1.size() - 1; i++) {
      for (j = i + 1; j < arr1.size(); j++) {
        d1.push_back(arr1[j] - arr1[i]);
      }
    }
    for (i = 0; i < arr2.size() - 1; i++) {
      for (j = i + 1; j < arr2.size(); j++) {
        d2.push_back(arr2[j] - arr2[i]);
      }
    }
    sort(d1.begin(), d1.end());
    sort(d2.begin(), d2.end());
    int r = 0;
    for (i = d1.size() - 1; i >= 0; i--) {
      for (j = d2.size() - 1; j >= 0; j--) {
        if (d1[i] == d2[j]) {
          r = 1;
          area = area * d1[i] * d2[j];
          break;
        }
      }
      if (r == 1) {
        break;
      }
    }
    if (r == 0) {
      area = -1;
    }
    // int r1 = 0;
    // int r2 = 0;
    // int num = min(m,n);
    // for(i=arr1.size()-1; i>=0; i--){
    //     if(num >= arr1[i]){
    //         r1 = arr1[i];
    //         break;
    //     }
    // }
    // num = min(m,n);
    // for(i=arr2.size()-1; i>=0; i--){
    //     if(num >= arr2[i]){
    //         r2 = arr2[i];
    //         break;
    //     }
    // }
    // area = area * pow(min(r1,r2)-1,2);
    // if(area == 1){
    //     area = -1;
    // }
    return area;
  }
};