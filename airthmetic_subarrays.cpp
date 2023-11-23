
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l,
                                        vector<int> &r) {
    int i, j;
    int n = nums.size();
    int ln = l.size();
    int rn = r.size();
    vector<bool> ans;
    vector<int> arr;
    int start;
    int end;
    int diff;
    int result = 1;
    for (i = 0; i < ln; i++) {
      result = 1;
      arr.clear();
      start = l[i];
      end = r[i];
      for (j = start; j <= end; j++) {
        arr.push_back(nums[j]);
      }
      sort(arr.begin(), arr.end());
      // for(j=0; j<arr.size(); j++){
      //     cout<<arr[j]<<"\t";
      // }
      // cout<<endl;
      diff = arr[1] - arr[0];
      // cout<<diff<<":"<<endl;
      for (j = 0; j < arr.size(); j++) {
        if (j == 0) {
          continue;
        } else {
          if (arr[j] - arr[j - 1] == diff) {
            cout << "done"
                 << "\t";
            continue;
          } else {
            result = 5;
            break;
          }
        }
        // if(result == 5){
        //     break;
        // }
      }
      if (result == 5) {
        cout << result << "false" << endl;
        ans.push_back(false);
      } else {
        cout << result << "true" << endl;
        ans.push_back(true);
      }
    }
    return ans;
  }
};