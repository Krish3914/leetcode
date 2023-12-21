class Solution {
public:
  vector<int> original, shuffled;
  int n;

  Solution(vector<int> &nums) {
    original = nums;
    shuffled = nums;
    n = nums.size();
  }

  vector<int> reset() { return original; }

  vector<int> shuffle() {
    swap(shuffled[rand() % n], shuffled[rand() % n]);
    return shuffled;
  }
};