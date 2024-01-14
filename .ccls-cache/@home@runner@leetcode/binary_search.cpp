static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
    // void binarysearch(int &low, int &high, vector<int>& nums, int &target){
    //     int mid = low + (high-low)/2;
    //     if(target==nums[mid]){
    //         return;
    //     }
    //     else if(target<nums[mid]){
    //         high = mid;
    //         binarysearch(low,high,nums,target);
    //     }
    //     else{
    //         low = mid;
    //         binarysearch(low,high,nums,target);
    //     }
    // }
    int search(vector<int>& nums, int target) {
        int n =nums.size();
        int low = 0;
        int high = n-1;
        int mid;
        while(low<=high){
            mid = low + (high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(target<nums[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        // int index;
        // binarysearch(low,high,nums,target);
        // index = low + (high-low)/2;
        return -1;
    }
};