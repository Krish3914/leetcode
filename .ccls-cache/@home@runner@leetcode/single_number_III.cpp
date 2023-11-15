class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int i,j;
        int n = nums.size();
        vector<int> result;
        sort(nums.begin(),nums.end());
        unordered_map<int,int> count;
        for(i=0; i<n; i++){
            if(i==0){
                count[nums[i]] = 1;
            }
            else{
                if(nums[i] == nums[i-1]){
                    count[nums[i]]++;
                }
                else{
                    count[nums[i]] = 1;
                }
            }
        }
        for(i=0; i<n; i++){
            if(count[nums[i]] == 1){
                result.push_back(nums[i]);
            }
            else{
                continue;
            }
        }
        return result;
    }
};