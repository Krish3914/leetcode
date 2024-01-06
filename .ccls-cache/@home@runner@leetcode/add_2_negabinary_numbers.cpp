static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
vector<int> addNegabinary(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        int aSize = arr1.size();
        int bSize = arr2.size();

        //carry can be forwarded to max 2 positions.
        int len = max(aSize, bSize) + 2;  

        reverse(arr1.begin(),arr1.end());
        reverse(arr2.begin(),arr2.end());

        int sum, carry = 0, reminder = 0;
        int i = 0;

        while(i < len){

            int first_val = i < aSize ? arr1[i] : 0;
            int sec_val = i < bSize ? arr2[i] : 0;

            sum = first_val + sec_val + carry;
            reminder = sum % (-2);
            carry = sum / (-2);

            if(reminder < 0){
                reminder += abs(-2);
                carry += 1;
            }

            ans.push_back(reminder);
            i++;
        }

        int j = ans.size() - 1;

        while(ans[j--] == 0 && ans.size() != 1)
            // remove leading zeroes
            ans.pop_back();     


        reverse(ans.begin(),ans.end());

        return ans;
    }
};
// class Solution {
// public:
//     vector<int> addNegabinary(vector<int>& arr1, vector<int>& arr2) {
//         int M = 1000000007;
//         int i,j;
//         int n1 = arr1.size();
//         int n2 = arr2.size();
//         int i1 = n1-1;
//         int i2 = n2-1;
//         long long int sum1 = 0;
//         int sum2 = 0;
//         vector<int>ans;
//         for(i=0; i<n1; i++){
//             sum1 += int(arr1[i] * pow(-2,i1)) % M;
//             i1--;
//         }
//         for(i=0; i<n2; i++){
//             sum2 += arr2[i] * pow(-2,i2);
//             i2--;
//         }
//         long long f = sum1 + sum2;
//         cout<<sum1<<"\t"<<sum2<<"\t"<<f<<endl;
//         if(f==0){
//             ans.push_back(0);
//         }
//         float a = f/2;
//         int r;
//         int base = -2;
//         while(f!=0){
//             r = f % -2;
//             f = f / -2;
//             if(r<0){
//                 r += 2;
//                 f+=1;
//             }
//             ans.push_back(r);
//             // f = f/2;
//         }
//         // ans.push_back(a);
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };