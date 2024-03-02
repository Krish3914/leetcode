class Solution {
public:

    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> pq; // Min heap
        for (int num : nums) {
            pq.push(num);
        }

        int cnt = 0;
        while (pq.top() < k) {
            long long first = pq.top();
            pq.pop();
            long long second = pq.top();
            pq.pop();
            cnt++;
            long long val = min(first, second) * 2 + max(first, second);
            pq.push(val);
        }
        return cnt;
    }
};
// class Solution {
// public:
//     int minOperations(vector<int>& nums, int k) {
//         int i,j;
//         int n = nums.size();
//         sort(nums.begin(),nums.end());
//         int count=0;
//         long long num;
//         long long n1,n2;
//         while(nums.size()>=2){
//             if(nums[0]<k){
//                 count++;
//                 n1 = nums[0];
//                 n2 = nums[1];
//                 num = n1*2 + n2;
//                 nums.erase(nums.begin()+0);
//                 nums.erase(nums.begin()+0);
//                 if(num<0){
//                     num = INT_MAX;
//                 }
//                 nums.push_back(num);
//                 sort(nums.begin(),nums.end());
//                 for(i=0; i<nums.size(); i++){
//                     cout<<nums[i]<<"\t";
//                 }
//                 cout<<endl;
//             }
//             else{
//                 break;
//             }
//         }
//         return count;
//     }
// };