
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  int minPairSum(vector<int> &nums) {
    int i, j;
    int n = nums.size();
    int sum = 0;
    int result;
    sort(nums.begin(), nums.end());
    vector<int> s;
    i = 0;
    j = n - 1;
    while (i < j) {
      s.push_back(nums[i] + nums[j]);
      i++;
      j--;
    }
    // for(i=0; i<n/2; i++){
    //     cout<<s[i]<<"\t";
    // }
    result = *max_element(s.begin(), s.end());
    return result;
  }
};