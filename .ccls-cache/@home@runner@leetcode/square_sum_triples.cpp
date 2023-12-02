
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  int countTriples(int n) {
    int i, j, k;
    int count = 0;
    int sum = 0;
    int sq;
    for (i = 1; i <= n; i++) {
      for (j = 1; j <= n; j++) {
        sum = pow(i, 2) + pow(j, 2);
        sq = sqrt(sum);
        if (sqrt(sum) <= n && sq * sq == sum) {
          count++;
        }
      }
    }
    return count;
  }
};

// for(k=1; k<=n; k++){
//                     if(pow(k,2) == sum){
//                         count++;
//                     }
//                     else{
//                         continue;
//                     }