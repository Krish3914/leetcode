/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
  int guessNumber(int n) {
    int i, j;
    int mid = n / 2;
    int l, h;
    if (guess(mid) == 0) {
      return mid;
    } else if (guess(mid) == -1) {
      l = 0;
      h = mid;
    } else {
      l = mid;
      h = n;
    }
    int r = 0;
    for (i = l; i <= h; i++) {
      if (guess(i) == 0) {
        r = i;
        break;
      }
    }
    return r;
  }
};