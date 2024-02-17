// class Solution {
// public:
//     int maxOperations(vector<int>& nums) {
//         if(nums.size()<2){
//             return 0;
//         }
//         int i,j;
//         vector<int> arr1=nums,arr2=nums,arr3=nums;
//         int n1 = arr1.size();
//         int n2=n1;
//         int n3=n1;
//         int count1=0;
//         int count2=0;
//         int count3=0;
//         int d1 = nums[1]+nums[0];
//         int d2 = nums[nums.size()-1]+nums[0];
//         int d3 = nums[nums.size()-1]+nums[nums.size()-2];
//         // cout<<d<<endl;
//         while(arr1.size()>=2){
//             cout<<arr1[1]+arr1[0]<<"\t";
//             if(arr1[1]+arr1[0] ==d1){
//                 count1++;
//                 arr1.erase(arr1.begin()+0);
//                 arr1.erase(arr1.begin()+0);
//             }
//             else{
//                 cout<<endl;
//                 cout<<arr1[1]+arr1[0];
//                 break;
//             }
//         }
//         while(arr2.size()>=2){
//             cout<<arr2[arr2.size()-1]+arr2[0]<<"\t";
//             if(arr2[arr2.size()-1]+arr2[0] ==d2){
//                 count2++;
//                 arr2.erase(arr2.begin()+0);
//                 arr2.erase(arr2.begin()+(arr2.size()-1));
//             }
//             else{
//                 cout<<endl;
//                 cout<<arr2[arr2.size()-1]+arr2[0];
//                 break;
//             }
//         }
//         while(arr3.size()>=2){
//             cout<<arr3[arr3.size()-1]+arr3[arr3.size()-2]<<"\t";
//             if(arr3[arr3.size()-1]+arr3[arr3.size()-2] ==d3){
//                 count3++;
//                 arr3.erase(arr3.begin()+0);
//                 arr3.erase(arr3.begin()+0);
//             }
//             else{
//                 cout<<endl;
//                 cout<<arr3[arr3.size()-1]+arr3[arr3.size()-1];
//                 break;
//             }
//         }
//         cout<<";"<<endl;
//         vector<int>maa;
//         maa.push_back(count1);
//         maa.push_back(count2);
//         maa.push_back(count3);
//         int ma = *max_element(maa.begin(),maa.end());
//         return ma;
//     }
// };
class Solution {
public:
  int solve(int i, int j, int sum, vector<int> &a, vector<vector<int>> &dp) {

    if (i >= j)
      return 0;

    if (dp[i][j] != -1)
      return dp[i][j];

    int p1 = 0;
    int p2 = 0;
    int p3 = 0;

    if (i + 1 <= j && a[i] + a[i + 1] == sum) {
      p1 = 1 + solve(i + 2, j, sum, a, dp);
    }

    if (j - 1 >= i && a[j] + a[j - 1] == sum) {
      p2 = 1 + solve(i, j - 2, sum, a, dp);
    }

    if (a[i] + a[j] == sum) {
      p3 = 1 + solve(i + 1, j - 1, sum, a, dp);
    }

    return dp[i][j] = max(p1, max(p2, p3));
  }
  int maxOperations(vector<int> &a) {

    int n = a.size();

    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    vector<vector<int>> dp1(n, vector<int>(n, -1));
    vector<vector<int>> dp2(n, vector<int>(n, -1));
    vector<vector<int>> dp3(n, vector<int>(n, -1));

    for (int i = 0; i < n - 2; i++)
      v2.push_back(a[i]);
    for (int i = 1; i < n - 1; i++)
      v3.push_back(a[i]);
    for (int i = 2; i < n; i++)
      v1.push_back(a[i]);

    int p1 = solve(2, n - 1, (a[0] + a[1]), a, dp1);
    int p2 = solve(0, n - 3, (a[n - 1] + a[n - 2]), a, dp2);
    int p3 = solve(1, n - 2, (a[0] + a[n - 1]), a, dp3);

    return 1 + max(p1, max(p2, p3));
  }
};