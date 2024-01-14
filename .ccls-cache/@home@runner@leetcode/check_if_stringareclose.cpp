static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()){
            return false;
        }
        int i,j;
        int n1 = word1.size();
        int n2 = word2.size();
        unordered_map<char,int>mp1,mp2;
        for(i=0; i<n1; i++){
            mp1[word1[i]]++;
        }
        for(i=0; i<n2; i++){
            mp2[word2[i]]++;
        }
        vector<int>ar1,ar2,arr1,arr2;
        for(auto k:mp1){
            arr1.push_back(k.first);
            ar1.push_back(k.second);
        }
        for(auto k:mp2){
            arr2.push_back(k.first);
            ar2.push_back(k.second);
        }
        sort(ar1.begin(),ar1.end());
        sort(ar2.begin(),ar2.end());
        sort(arr2.begin(),arr2.end());
        sort(arr1.begin(),arr1.end());
        return (ar1==ar2 && arr1==arr2);
    }
};