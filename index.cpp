// #include <iostream>
// using namespace std;
//  sum of two number
// //!SECTION: function defination
// int sum(int a, int b){
//   int s = a + b;
//   return s;
// }
// //!SECTION : function call
// int main(){
//   cout << sum(10, 12) << endl;
//   return 0;
// }
//  subtract of two number
// double sub(double g, double h){
//   double sub = g - h;
//   return sub;
// }
// int main(){
//   cout<<sub(49.88, 33.99)<<endl;
//   return 0;
// }
//min of two number
// int minOfTwo(int a, int b){
//   if(a>b){
//     return a;
//   }
//   else{
//     return b;
//   }
// }
// int main(){
//   cout << "min number is: " << minOfTwo(33,66) << endl;
//   return 0;
// }
// Calculate the sum numbers from 1 to N
// #include <iostream>
// using namespace std;
// int sumN(int n){
//   int sum = 0;
//   for (int i = 1; i <= n; i++){
//     sum += i;
//   }
//   return sum;
// }
// int main(){
//     cout<< sumN(10) << endl;
//   return 0;
//
// Calculate N factorial
// #include <iostream>
// using namespace std;
// int fac(int n){
//   int facN = 1;
//   for (int i = 1; i <= n; i++){
//     facN *= i;
//   }
//   return facN;
// }
// int main(){
//   cout << fac(7) << endl;
//   cout << fac(4) << endl;
//   return 0;
// }
// #include <iostream>
// using namespace std;
// void changeX(int x){
//   x = 2 * x;
//   cout << "x value: " << x << endl;
// }
// int main(){
//   int x = 5;
//   changeX(x);
//   cout << "x : " << x << endl;
//   return 0;
// }
// calculate sum of digit of a number
// #include <iostream>
// using namespace std;
// int sumOfDigits(int num){
//   int digitSum = 0;
//   while (num>0){
//     int lastDigit = num % 10;
//     num /= 10;
//     digitSum += lastDigit;
//   }
//   return digitSum;
  
// }
// int main(){
//   cout << sumOfDigits(3345) << endl;
//   return 0;
// }
// calculate nCr binomial coefficient  for n & r
// #include <iostream>
// using namespace std;
// int factorial(int n){
//   int fact = 1;
//   for (int i = 1; i <= n; i++){
//     fact *= i;
//   }
//   return fact;
// }
// int nCr(int n, int r){
//   int fact_n = factorial(n);
//   int fact_r = factorial(r);
//   int fact_nmr = factorial(n-r);
//   return fact_n / fact_r * fact_nmr;
// }
// int main(){
//   int n = 4, r = 2;
//   cout << nCr(n, r) << endl;
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int prime(int n){
//   int count = 1;
//   int sum = 0;
//   while(count<=n){
//     sum += count;
//     count++;
//   }
//   return sum;
// }
// int main(){
//   int n = 6;
//   cout << prime(n) << endl;
//   return 0;
// }
// is a number prime or not
#include <iostream>
using namespace std;

int main(){
  int num=251;
  int count = 0;
  for (int i = 2; i <= num - 1; i++){
    if(num%i==0){
      count++;
    }
  }
  if(count==1){
      cout << "prime number";
    }
    else{
      cout << "non-prime number";
    }
    cout << endl;
    return 0;
  }
