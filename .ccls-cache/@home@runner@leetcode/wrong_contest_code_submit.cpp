class Solution {
public:
  int removeAlmostEqualCharacters(string word) {
    int i, j;
    int count = 0;
    int n = word.size();
    for (i = 0; i < n; i++) {
      if (word[i] == word[i + 1] || word[i] == (word[i + 1] + 1) ||
          word[i] == (word[i + 1] - 1)) {
        if (word[i + 2] == word[i + 1] || word[i + 2] == (word[i + 1] + 1) ||
            word[i + 2] == (word[i + 1] - 1)) {
          i++;
          word[i] = 'p';
          count++;
          // i++;
        } else {
          word[i] = 'p';
          count++;
          // i++;
        }
      }
    }
    // for(i=0; i<n; i++){
    //     if(i==0){
    //         if(word[i] == word[i+1] || word[i] == (word[i+1] + 1) || word[i]
    //         == (word[i+1] - 1)){
    //             word[i] = 'p';
    //             count++;
    //             i++;
    //         }
    //     }
    //     else if(i == n-1){
    //         if(word[i] == word[i-1] || word[i] == (word[i-1] + 1) || word[i]
    //         == (word[i-1] - 1)){
    //             word[i] = 'p';
    //             count++;
    //             i++;
    //         }
    //     }
    //     else{
    //         if(word[i] == word[i+1] || word[i] == (word[i+1] + 1) || word[i]
    //         == (word[i+1] - 1)){
    //             word[i] = 'p';
    //             count++;
    //             i++;
    //         }
    //     }
    // }
    return count;
  }
};