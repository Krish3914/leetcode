// // #include <bits/stdc++.h> 
// // int fibonacciNumber(int n){
// //     // Write your code here.
// //     // int t;
// //     // cin>>t;
// //     // while(t>0){
// //     if(n==1 || n==2){
// //         return 1;
// //     }
// //     vector<int>arr;
// //     // arr.clear();
// //     arr.push_back(1);
// //     arr.push_back(1);
// //     // int count = 2;
// //     int i;
// //     for(i=2; i<n; i++){
// //         arr.push_back((arr[i-1]%1000000007 + arr[i-2]%1000000007)%1000000007);
// //     }
// //     // cout<<arr[n-1]<<endl;
// //     // t--;}
// //     return arr[n-1];
// //     // return 0;
// // }
// /*
//     Time Complexity: O(2^N).
//     Space Complexity: O(N).

//     Where 'N' is the given integer.
// */

// int fibonacciNumber(int n){
//     const int mod = 1e9 + 7;

// 	// Base Case.
// 	if (n <= 1){
// 		return n;
// 	}

// 	// Recursive call.
// 	return (fibonacciNumber(n - 1) + fibonacciNumber(n - 2)) % mod;    
// }
/*
    Time Complexity: O(log(N)).
    Space Complexity: O(log(N)).

    Where 'N' is the given integer.
*/

// Function to multiply two matrices.
vector<vector<int>> multiply(vector<vector<int>> a,vector<vector<int>> b){

    const int mod = 1e9 + 7;

    // To store the resultant matrix.
    vector<vector<int>> c(2,vector<int>(2,0));

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                c[i][k] = (c[i][k] + (long long)((long long)a[i][j] * (long long)b[j][k])) % mod;
            }
        }
    }

    return c;
}

// Function to calclate n'th power of a matrix.
vector<vector<int>> matrix_power(vector<vector<int>> coef ,int n){

    // To store the resultant matrix.
    vector<vector<int>> res = {{1,0},{0,1}};

    // While loop till n > 0.
    while(n){
        // If n is odd, multiply res with coef.
        if(n % 2) res = multiply(res,coef);

        // Multiply coef with coef and update n to n/2.
        coef = multiply(coef,coef);
        n /= 2;
    }

    return res;

}


int fibonacciNumber(int n){

    // Declaring the coef matrix.
    vector<vector<int>> coef={{0,1},{1,1}};

    // Calculating the (n-1)th power of the coef matrix.
    vector<vector<int>> res = matrix_power(coef,n-1);

    // Return the bottom right element of the resultant matrix.
    return res[1][1];
}