class Solution {
public:
  int maximumEnergy(vector<int> &e, int k) {
    int i, j;
    int n = e.size();
    int ma = INT_MIN;
    unordered_map<int, int> dp;
    int sum;
    for (i = n - k; i < n; i++) {
      dp[i] = e[i];
      ma = max(ma, dp[i]);
    }
    for (i = n - k - 1; i >= 0; i--) {
      dp[i] = dp[i + k] + e[i];
      ma = max(ma, dp[i]);
    }
    // for(i=n-1; i>=0; i--){
    //     sum = 0;
    //     for(j=i; j<n; j+=k){
    //         sum+=e[j];
    //     }
    //     ma = max(ma,sum);
    // }
    return ma;
  }
};