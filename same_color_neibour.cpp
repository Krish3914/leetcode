static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  bool winnerOfGame(string colors) {
    int i;
    int n = colors.length();
    int a = 0;
    int b = 0;
    // char result;
    //  for(i=0; i<n; i++){
    //      if(i == 0){
    //          continue;
    //      }
    //      else if(i == (n-1)){
    //          result = 'a';
    //          break;
    //      }
    //      else{
    //          if(colors[i] == colors[i-1] && colors[i] == colors[i+1] &&
    //          colors[i] == 'A'){
    //              colors.erase(colors.begin() + i);
    //              n--;
    //              i= 0;
    //              for(j=0; j<n; j++){
    //                  if(j == 0){
    //                      continue;
    //                  }
    //                  else if(j == n-1){
    //                      result = 'b';
    //                      break;
    //                  }
    //                  else{
    //                      if(colors[j] == colors[j-1] && colors[j] ==
    //                      colors[j+1] && colors[j] == 'B'){
    //                          colors.erase(colors.begin() + j);
    //                          n--;
    //                          j=0;
    //                          break;
    //                      }
    //                      else{
    //                          if(j == n-2){
    //                              result = 'b';
    //                              break;
    //                          }
    //                          else{
    //                              continue;
    //                          }
    //                      }
    //                      //break;
    //                  }
    //                  //break;
    //              }
    //              if(result == 'b'){
    //                  break;
    //              }
    //              //else{continue;}
    //              //break;
    //          }
    //          else{
    //              if(j == n-2){
    //                  result = 'a';
    //                  break;
    //              }
    //              else{
    //                  continue;
    //              }
    //          }
    //          if(result == 'a' || result == 'b'){
    //              break;
    //          }
    //      }
    //      if(result == 'a' || result == 'b'){
    //          break;
    //      }
    //  }
    for (i = 1; i < n; i++) {
      if (colors[i] == colors[i - 1] && colors[i] == colors[i + 1]) {
        if (colors[i] == 'A') {
          a++;
        } else {
          b++;
        }
      }
    }
    if (a > b) {
      return true;
    } else {
      return false;
    }
  }
};