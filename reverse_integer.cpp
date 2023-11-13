class Solution {
public:
    int reverse(int x) {
        int i,j;
        int result;
        vector<int>num1;
        vector<int> num;
        while(x != 0){
            num.push_back(x%10);
            x = x/10;
        }
        cout<<x<<endl;
        for(i=0; i<num.size(); i++){
            cout<<num[i];
            cout<<"\t";
        }
        long long sum = 0;
        cout<<endl;
        for(i=0; i<num.size(); i++){
            sum = sum + (num[i] * pow(10,num.size()-i-1));
        }
        cout<<sum<<endl;
        result  = sum;
        if(sum > pow(2,31) -1 || sum < -pow(2,31)){
            result = 0;
        }
        return result;
    }
};