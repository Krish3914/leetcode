static const int __ = []() { std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL); return 0; }();

class Solution {
public:
    bool check(vector<int>& nums) {
        int n= nums.size(),i,count=0;
        if(n==1){
            return true;
        }
        else{
            for(i=1;i<=n-1;i++){
                if(nums[i-1]>nums[i]){
                    count++;
                }
            }
            if(nums[n-1]>nums[0]){
                count++;
            }
        }
        return count <= 1;

    }
};