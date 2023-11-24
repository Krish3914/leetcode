
static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

class Solution {
public:
  int maxCoins(vector<int> &piles) {
    int i;
    int n = piles.size();
    cout << n << endl;
    int sum = 0;
    sort(piles.begin(), piles.end());
    cout << endl;
    int num = n / 3;
    for (i = 0; i < num; i++) {
      sum = sum + piles[n - (2 * i) - 2];
    }
    cout << sum << endl;
    return sum;
  }
};

// vector<int> arr;
// arr.clear();
// for(i=0; i<3; i++){
//     if(i==0){
//         arr.push_back(piles[i]);
//         cout<<piles[i]<<"\t";
//     }
//     else{
//         arr.push_back(piles[n-i]);
//         cout<<piles[n-i]<<"\t";
//     }
// }
// cout<<endl;

// cout<<endl;
// cout<<"n = "<<n<<endl;
// sum = sum + arr[2];

// while(n>=3){
//     sum = sum + piles[n-2];
//     piles.erase(piles.begin());
//     // cout<<"start"<<endl;
//     piles.erase(piles.begin() + (piles.size()-1));
//     // cout<<"start"<<endl;
//     piles.erase(piles.begin() + (piles.size()-1));
//     // cout<<"start"<<endl;
//     n = piles.size();
// }