// class Solution {
// public:
//   vector<int> plusOne(vector<int> &digits) {
//     int i;
//     int sum = 0;
//     int number;
//     int n = digits.size();
//     if (digits.size() <= 100 && digits.size() >= 1) {
//       for (i = 0; i < n; i++) {
//         number = digits[i] * (pow(10, n - i - 1));
//         sum = sum + number;
//       }
//       sum = sum + 1;
//       digits.clear();
//       // digits.push_back(n);
//       digits.push_back(sum);
//       // // for(i= (n-1); i>=0; i--){
//       // //     digits[i] = sum % 10;
//       // //     sum = sum/10;
//       // // }
//       int count = 0;
//       int scount;
//       scount = sum;
//       while (scount != 0) {
//         scount = scount / 10;
//         count++;
//       }
//       n = count;
//       // n = ((log(sum)/log(10)) + 1);
//       digits.push_back(n);
//       n = count;
//       for (i = 0; i < n; i++) {
//         digits[i] = sum / (pow(10, n - i - 1));
//         digits.push_back(digits[i]);
//         // sum = sum % (pow(10, n-i-1));
//         sum = sum - (digits[i] * (pow(10, n - i - 1)));
//       }
//       digits.pop_back();
//       digits.pop_back();
//     }
//     return digits;
//   }
// };

class Solution {
public:
  vector<int> plusOne(vector<int> &digits) {
    int n = digits.size();
    int i;
    int carry = 0;
    for (i = (n - 1); i >= 0; i--) {
      if (i == n - 1) {
        digits[i]++;
      }
      if (digits[i] == 10) {
        digits[i] = 0;
        if (i != 0) {
          digits[i - 1]++;
        } else {
          carry = 1;
          reverse(digits.begin(), digits.end());
          digits.push_back(carry);
          reverse(digits.begin(), digits.end());
        }
      }
      // if(i == 0){
      //     if(digits[i] == 10){
      //         digits[i] = 0;
      //     }
      // }
      // digits.push_back(digits[i]);
    }
    return digits;
  }
};