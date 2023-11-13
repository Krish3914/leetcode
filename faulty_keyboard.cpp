class Solution {
public:
    string finalString(string s) {
        int i,j;
        string t;
        int n = s.size();
        for(i=0; i<n;i++){
            if(s[i] == 'i'){
                for(j=0; j<t.size()/2;j++){
                    swap(t[j],t[t.size() - j -1]);
                }
            }
            else{
                // t[i] = s[i];
                t.push_back(s[i]);
            }
        }
        return t;
    }
};