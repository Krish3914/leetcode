class Solution {
public:
  vector<int> relocateMarbles(vector<int> &nums, vector<int> &mf,
                              vector<int> &mt) {
    int i, j;
    int n = nums.size();
    int m = mf.size();
    sort(nums.begin(), nums.end());
    unordered_map<int, int> mp;
    for (auto k : nums) {
      mp[k]++;
    }
    for (i = 0; i < m; i++) {
      int num = mp[mf[i]];
      mp[mf[i]] = 0;
      mp[mt[i]] += num;
    }
    nums.clear();
    for (auto k : mp) {
      if (k.second > 0) {
        nums.push_back(k.first);
      }
    }
    // for(i=0; i<m; i++){
    //     for(j=0; j<n; j++){
    //         if(nums[j]==mf[i]){
    //             nums[j]=mt[i];
    //         }
    //     }
    sort(nums.begin(), nums.end());
    // }
    // n = nums.size();
    // for(i=1; i<n; i++){
    //     if(nums[i]==nums[i-1]){
    //         nums.erase(nums.begin()+i);
    //         i--;
    //         n--;
    //     }
    // }
    return nums;
  }
};