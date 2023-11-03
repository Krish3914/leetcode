static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  bool judgeSquareSum(int c) {
    unsigned int a, b;
    int result = 0;
    // a=0;
    // b= sqrt(c);
    // while(a< sqrt(c) && b>=0){
    //     if(a*a + b*b == c){
    //         result++;
    //         break;
    //     }
    //     else{
    //         a--;
    //        // b++;
    //     }
    // }
    // if(result == 0){
    //     while(a< sqrt(c) && b>=0){
    //         if(a*a + b*b == c){
    //             result++;
    //             break;
    //         }
    //         else{
    //             a--;
    //         // b++;
    //         }
    //     }
    // }
    // for(a=sqrt(c); a>=0; a--){
    //     for(b=0; b<=sqrt(c); b++){
    //         if(a*a + b*b == c){
    //             result++;
    //             break;
    //         }
    //         else{
    //             continue;
    //         }
    //     }
    //     if(result > 0){
    //         break;
    //     }
    // }
    for (a = 0; a <= sqrt(c); a++) {
      double x = sqrt(c - (a * a));
      if (x == (int)x) {
        result++;
        break;
      } else {
        continue;
      }
    }
    if (result > 0) {
      return true;
    } else {
      return false;
    }
  }
};