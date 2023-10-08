// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int,int> m;
//         vector<int> arr(2,0);
//         int i,n = nums.size();
//         for(i=0;i<n;i++){
//             if (m.count(nums[]) == 1){
//                 arr[0] = m[nums[i]];
//                 arr[1] = i;
//                 return arr;
//                 }
//             else{
//                 m[target-nums[i]] = i;
//             }
//         }
//         return arr;
//     }
// };

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int i,n= nums.size(),y,j,add1,add2;
//         for(i=0;i<n;i++){
//             if(nums[i]< target){
//                 y = (target - nums[i]);
//                 for(j = i+1; j < n; j++){
//                     if(nums[j] == y){
//                         add1 = i;
//                         add2 = j;
//                     }
//                 }

//             }
//         }
//         cout << add1;
//         cout << add2<< endl;
//     }
// };

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,n= nums.size(),y,j;
        vector<int> arr(2);
        for(i=0;i<n;i++){
            if(nums[i]<= target){
                y = (target - nums[i]);
                for(j = i+1; j < n; j++){
                    if(nums[j] == y){
                        arr[0] = i;
                        arr[1] = j;
                        break;
                    }
                }
                continue;
            }
        }
        return arr;
    }
};