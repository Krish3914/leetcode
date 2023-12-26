static const int __ = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
  std::cout.tie(NULL);
  return 0;
}();

// add 2 numbers in cpp

maxPairSum = Math.Max(maxPairSum, left + right);

cout << typeid(arr[i]).name() << "\t";

const unsigned int M = 1000000007;
return sum % M;

// int ny;
// ny = std::stoi(y);
// cout<<ny<<endl;

transform(upperGreeting.begin(), upperGreeting.end(), upperGreeting.begin(),
          ::toupper);

// shuffling of numbers in a vector.
vector<int> shuffle() {
  swap(shuffled[rand() % n], shuffled[rand() % n]);
  return shuffled;
}
}
;

// getline()

// For any integer n, the bitwise complement of n will be - (n + 1).

// Left shift operator (<<): It takes two numbers, the left shift operator
// shifts the bits of the first operand, the second operand decides the number
// of places to shift.

// Left shift means appending numbers of 0’s to the right.
// Right shift means remove numbers of 0’s from right 1 0 = 2

// cout << "Size of double : " << sizeof(double) << "\n";
// cout << "Size of a : " << sizeof(a) << "\n";

// int x, y;
//     y = 100;
//     x = (y + 10, 99 + y);
//     cout << "With brackets value of x :" << x << endl;
//     x = y + 10, 99 + y;
//     cout << "Without brackets value of x :" << x;
//     return 0;
// }
// Output:
// With brackets value of x :199
// Without brackets value of x :110

// Conditional Operator(?:) or ternary operators: It is of the form
// Expression1 ? Expression2 : Expression3
// Here, Expression1 is the condition to be evaluated. If the
// condition(Expression1) is True, then we will execute and return the result of
// Expression2; otherwise, if the condition(Expression1) is false, then we will
// execute and return the result of Expression3. Since it takes three operands
// to work, hence they are also called ternary operators.

// int a = 1, * b; //Here b is a pointer operator of int type
// b = & a;
// cout << "Address of variable a: " << b << endl;
// cout << "Address of variable b: " << & b;

// break
// continue
// goto:
int number;
cin >> number;
if (number % 2 == 0)
  goto printeven;
else
  goto printodd;

printeven : cout << "Even number";
return 0;

printodd : cout << "Odd number";
return 0;
// return

// int arr[]{40, 50, 60, 70, 80, 90, 100};
// for (auto element : arr)
//   cout << element << " ";

#include <algorithm>
#include <iostream>
using namespace std;
int print_even(int n) {
  if (n % 2 == 0)
    cout << n << ' ';
}
int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  cout << "The Array contains the following even numbers" << endl;
  for_each(arr, arr + 5, print_even);
  return 0;
}