static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
  int mySqrt(int x) {
    // long i;
    // int result;
    // for(i=0; i<=x; i++){
    //     if(i*i == x){
    //         result = i;
    //         break;
    //     }
    //     else if((i*i) > x){
    //         result = i-1;
    //         break;
    //     }
    //     else{
    //         continue;
    //     }
    // }
    // return result;
    if (x == 0)
      return x;
    int first = 1, last = x;
    while (first <= last) {
      int mid = first + (last - first) / 2;
      if (mid == x / mid)
        return mid;
      else if (mid > x / mid) {
        last = mid - 1;
      } else {
        first = mid + 1;
      }
    }
    return last;
    // double a = sqrt(x);
    // a = (int)a;
    // return a;
  }
};