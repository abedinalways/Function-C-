#include <iostream>
using namespace std;
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
int minOfTwo(int a, int b){
  if(a>b){
    return a;
  }
  else{
    return b;
  }
}
int main(){
  cout << "min number is: " << minOfTwo(33,66) << endl;
  return 0;
}
