static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i,j;
        int number1 , number;
        int n = nums.size();
        for(i=0; i<n; i++){
            int count = 0;
            number1 = nums[i];
            count++;
            for(j=0; j<n; j++){
                if(i == j){
                    continue;
                }
                if(nums[j] == number1){
                    count++;
                    //nums.erase(nums.begin() + j);
                }
                else{
                    continue;
                }
            }
            if(count == 2){
                continue;
            }
            else{
                number = number1;
                break;
            }
        }
        return number;
        
    }
};