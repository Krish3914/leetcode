class Solution {
public:
    int numberOfSpecialChars(string w) {
        int i;
        unordered_map<char,int>mp;
        for(i=0; i<w.size(); i++){
            mp[w[i]]++;
        }
        int count = 0;
        for(char k='a'; k<='z'; k++){
            if(mp[k]>0 && mp[char(int(k)-32)]>0){
                count++;
            }
        }
        return count;
    }
};