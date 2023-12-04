static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  bool isValidSudoku(vector<vector<char>> &board) {
    unordered_map<char, int> eachBox;
    unordered_map<char, int> row;
    unordered_map<char, int> column;
    int j = 0;
    int i = 0;
    for (i = 0; i < 9; i++) {
      for (j = 0; j < 9; j++) {
        if (board[i][j] != '.') {
          row[board[i][j]]++;
        }
        if (board[j][i] != '.') {
          column[board[j][i]]++;
        }
        if (row[board[i][j]] > 1)
          return false;
        if (column[board[j][i]] > 1)
          return false;
      }
      row.clear();
      column.clear();
    }
    for (i = 0; i < 9; i += 3) {
      for (j = 0; j < 9; j += 3) {
        eachBox.clear();
        for (int x = i; x < i + 3; x++) {
          for (int y = j; y < j + 3; y++) {
            if (board[x][y] != '.') {
              eachBox[board[x][y]]++;
            }
            if (eachBox[board[x][y]] > 1)
              return false;
          }
        }
      }
    }
    return true;
  }
};
// class Solution {
// public:
//     bool isValidSudoku(vector<vector<char>>& board) {
//         int i,k,j;
//         int n = board.size();
//         vector<int> row;
//         vector<int>col;
//         vector<int> box;
//         int res = 0;
//         int num;
//         for(i=0; i<n; i++){
//             cout<<i<<endl;
//             col.clear();
//             for(j=0; j<n; j++){
//                 // cout<<board[i][j]<<"\t";
//                 // if(int(board[i][j]) == 46){
//                 //     continue;
//                 // }
//                 num = board[i][j] - 48;
//                 cout<<num<<".";
//                 if(num <= 0 || num>9){
//                     if(num == -2){
//                         continue;
//                     }
//                     res = 1;
//                     break;
//                 }
//                 else{
//                     col.push_back(num);
//                 }
//             }
//             cout<<":"<<res<<endl;
//             if(res == 1){
//                 break;
//             }
//             else{
//                 cout<<endl;
//                 for(k=0; k<col.size(); k++){
//                     cout<<col[k]<<"\t";
//                 }
//                 sort(col.begin(),col.end());
//                 for(k = col.size()-1; k>0; k--){
//                     if(col[k] == col[k-1]){
//                         res = 1;
//                         break;
//                     }
//                 }
//                 if(res == 1){
//                     break;
//                 }
//             }
//         }
//         if(res == 1){
//             return false;
//         }
//         else{
//             for(i=0; i<n; i++){
//                 cout<<i<<endl;
//                 row.clear();
//                 for(j=0; j<n; j++){
//                     // cout<<board[i][j]<<"\t";
//                     // if(int(board[i][j]) == 46){
//                     //     continue;
//                     // }
//                     num = board[j][i] - 48;
//                     cout<<num<<".";
//                     if(num <= 0 || num>9){
//                         if(num == -2){
//                             continue;
//                         }
//                         res = 1;
//                         break;
//                     }
//                     else{
//                         row.push_back(num);
//                     }
//                 }
//                 cout<<":"<<res<<endl;
//                 if(res == 1){
//                     break;
//                 }
//                 else{
//                     cout<<endl;
//                     for(k=0; k<row.size(); k++){
//                         cout<<row[k]<<"\t";
//                     }
//                     sort(row.begin(),row.end());
//                     for(k = row.size()-1; k>0; k--){
//                         if(row[k] == row[k-1]){
//                             res = 1;
//                             break;
//                         }
//                     }
//                     if(res == 1){
//                         break;
//                     }
//                 }
//             }
//         }
//         if(res == 1){
//             return false;
//         }
//         else{
//             int count = 0;
//             for(i=0;i<n; i++){
//                 for(j=0; j<n; j++){
//                     if(count<=9){
//                         if(int(board[i][j] - 48 < 0)){
//                             count++;
//                             continue;
//                         }
//                         else{
//                             box.push_back(board[i][j] - 48);
//                             count++;
//                         }
//                     }
//                     else{

//                     }
//                 }
//             }
//         }
//     }
// };