
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  string findDifferentBinaryString(vector<string> &nums) {
    int i, j;
    int n = nums.size();
    string result;
    vector<string> o;
    sort(nums.begin(), nums.end());
    string s;
    vector<int> number;
    long num;
    int sum = 0;
    int r;
    for (i = 0; i < n; i++) {
      sum = 0;
      num = stol(nums[i]);
      cout << num << "\t";
      for (j = 0; j < n; j++) {
        sum = sum + (num % 10 * pow(2, j));
        num = num / 10;
      }
      cout << sum << endl;
      number.push_back(sum);
    }
    cout << "." << endl;
    for (i = 0; i < n; i++) {
      cout << number[i] << "\t";
    }
    cout << "." << endl;
    for (i = 0; i < n; i++) {
      if (i == 0) {
        if (number[i] == 0) {
          continue;
        } else {
          r = 0;
          break;
        }
      } else {
        if (number[i] == number[i - 1] + 1) {
          if (i == n - 1) {
            r = number[i] + 1;
          } else {
            continue;
          }
        } else {
          r = number[i - 1] + 1;
          break;
        }
      }
    }
    cout << r << endl;
    while (r != 0) {
      result = result + to_string((r % 2));
      r = r / 2;
    }
    while (result.size() != n) {
      result = result + to_string(0);
    }
    reverse(result.begin(), result.end());
    cout << ".." << endl;
    return result;
  }
};

// int i,j;
// int n = nums.size();
// int n1 = n;
// int num;
// string s;
// sort(nums.begin(), nums.end());
// vector<string> t;
// string result;
// // cout<<result.size()<<endl;

// for(i=0; i<(pow(2,n1)); i++){
//     s.clear();
//     num = i;
//     while(num != 0){
//         s = s + to_string(num%2);
//         num = num/2;
//     }
//     while(s.size() < n1){
//         s = s + to_string(0);
//     }
//     t.push_back(s);
// }
// // sort(t.begin(), t.end());
// for(i=0; i<t.size(); i++){
//     cout<<t[i]<<"\t";
//     for(j=0; j<=i; j++){
//         if(nums[j] != t[i]){
//             if(j== n-1){
//                 result = t[i];
//                 break;
//             }
//             else{
//                 continue;
//             }
//         }
//         else{
//             break;
//         }

//         // if(nums[j] == t[i]){
//         //     // cout<<".."<<endl;
//         //     break;
//         // }
//         // else{
//         //     if(j == n-1){
//         //         // cout<<"="<<endl;
//         //         result = t[i];
//         //         // cout<<result.size()<<endl;
//         //         break;
//         //     }
//         //     else{
//         //         // cout<<"."<<endl;
//         //         continue;
//         //     }
//         // }
//         // if(result.size() == 1){
//         // break;
//         // }
//     }
//     if(result.size() > 0){
//         break;
//     }
// }
// return result;