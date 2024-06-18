//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
  int lenOfLongSubarr(int A[], int n, int target) {
    int i, j;
    int len = 0;
    int presum = 0;
    map<int, int> mp;
    for (i = 0; i < n; i++) {
      presum = presum + A[i];
      if (mp[presum] > 0) {
        mp[presum] = min(mp[presum], i + 1);
      } else {
        mp[presum] = i + 1;
      }
      // cout<<presum<<endl;
      if (presum == target) {
        len = max(len, i + 1);
      }
      if (mp[presum - target] > 0) {
        len = max(len, i - mp[presum - target] + 1);
      }
      // cout<<i<<" "<<presum<<" "<<presum-target<<" "<<mp[presum-target]<<"
      // "<<len<<";"<<" ";
    }
    // cout<<endl;
    // for(auto k:mp){
    //     cout<<k.first<<" "<<k.second<<";"<<" ";
    // }
    return len;
    // // Complete the
    // int count = 0;
    // for(int i=0; i<n; i++){
    //     int sum = 0;
    //     for(int j=i; j<n; j++){
    //         sum+=A[j];
    //         if(sum==target){
    //             if(j-i+1>count){
    //                 count = max(count,j-i+1);
    //             }
    //         }
    //     }
    // }
    // return count;
  }
};

//{ Driver Code Starts.

int main() {
  // code

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int a[n];

    for (int i = 0; i < n; i++)
      cin >> a[i];
    Solution ob;
    cout << ob.lenOfLongSubarr(a, n, k) << endl;
  }

  return 0;
}
// } Driver Code Ends