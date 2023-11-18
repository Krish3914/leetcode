
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  int maxScore(vector<int> &cardPoints, int k) {
    int n = cardPoints.size();
    int curScore = 0;
    for (int i = 0; i < k; i++)
      curScore += cardPoints[i];
    int finalScore = curScore;
    for (int i = k - 1; i >= 0; i--) {
      curScore -= cardPoints[i];
      curScore += cardPoints[n - k + i];
      finalScore = max(finalScore, curScore);
    }
    return finalScore;
  }
};
// class Solution {
// public:
//     int maxScore(vector<int>& cardPoints, int k) {
//         int i,j;
//         int n = cardPoints.size();
//         // int start = 0;
//         // int end = n-1;
//         int sum1 = 0;
//         int sum2 = 0;
//         int result;
//         vector<int> arr1,arr2;
//         for(i=0; i<n; i++){
//             if(i==0){
//                 continue;
//             }
//             else{
//                 arr1.push_back(cardPoints[i]);
//             }
//         }
//         for(i=0; i<n; i++){
//             if(i==n-1){
//                 continue;
//             }
//             else{
//                 arr2.push_back(cardPoints[i]);
//             }
//         }
//         // arr1 = cardPoints;
//         // arr2 = cardPoints;
//         if(cardPoints[0] >= cardPoints[n-1]){
//             sum1 = sum1 + cardPoints[0];
//             sort(arr1.begin(),arr1.end());
//             for(i=0; i<k-1; i++){
//                 sum1 = sum1 + arr1[n-i-1];
//                 // if(i==0){
//                 //     sum1 = sum1 + arr1[i];
//                 // }
//                 // else{
//                 //     sum1 = sum1 + arr1[n-i];
//                 // }
//                 // sum1 = sum1 + cardPoints[i];
//             }
//         }
//         if(cardPoints[0] < cardPoints[n-1]){
//             sum2 = sum2 + cardPoints[n-1];
//             sort(arr2.begin(),arr2.end());
//             for(i=n-1; i>n-k; i--){
//                 sum2 = sum2 + arr2[i];
//                 // if(i==n-1){
//                 //     sum2 = sum2 + arr2[i];
//                 // }
//                 // else{
//                 //     sum2 = sum2 + arr1[i];
//                 // }
//                 // sum1 = sum1 + cardPoints[i];
//             }
//         }

//         // for(j=n-1; j>=n-k; j--){
//         //     sum2 = sum2 + cardPoints[j];
//         // }
//         if(sum1 >= sum2){
//             result = sum1;
//         }
//         else{
//             result = sum2;
//         }
//         return result;
//     }
// };