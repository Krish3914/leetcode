static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
// class Solution {
// public:
//     int getWinner(vector<int>& arr, int k) {
//         unordered_map<int, int> count;
//         int i,j;
//         int n = arr.size();
//         // int result;
//         for(i=0; i<n; i++){
//             count[arr[i]] = 0;
//         }
//         // int count = 0;
//         int winner = arr[0];
//         // int valueToBeDeleted;
//         while(count[winner] != k){
//             if(winner != *max_element(arr.begin(), arr.end())){
//                 winner = *max_element(arr.begin(), arr.begin()+2);
//                 count[winner]++;

//                 // int index =
//                 // valueToBeDeleted = *min_element(arr.begin(),
//                 arr.begin()+2);
//                 // cout<<valueToBeDeleted<<endl;
//                 // arr.push_back(valueToBeDeleted);
//                 for(j=0; j<2; j++){
//                     if(arr[j] == *min_element(arr.begin(), arr.begin()+2)){
//                         i = j;
//                         break;
//                     }
//                 }
//                 arr.push_back(arr[i]);
//                 arr.erase(arr.begin() + i);
//                 // for(j=0; j<n; j++){
//                 //     cout<<arr[j];
//                 // }
//                 // cout<<endl;
//             }
//             else{
//                 break;
//             }
//         }
//         return winner;
//     }
// };

class Solution {
public:
  int getWinner(std::vector<int> &arr, int k) {
    if (k == 1) {
      return std::max(arr[0], arr[1]);
    }
    if (k >= arr.size()) {
      return *std::max_element(arr.begin(), arr.end());
    }

    int current_winner = arr[0];
    int consecutive_wins = 0;

    for (int i = 1; i < arr.size(); ++i) {
      if (current_winner > arr[i]) {
        consecutive_wins++;
      } else {
        current_winner = arr[i];
        consecutive_wins = 1;
      }

      if (consecutive_wins == k) {
        return current_winner;
      }
    }

    return current_winner;
  }
};