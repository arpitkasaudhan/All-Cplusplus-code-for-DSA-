#include <iostream>
using namespace std;
// int factorial(int num1){
//     int fact =1;
//     for(int i =1;i<=num1;i++){
//         fact=fact*i;
//     }return fact;
// } 
// int main(){
//     int n , r; 
//     cin>>n>>r ;
//     int nem;
//     nem=factorial(n);
//     int deno = factorial(r)*factorial(n-r);
//     cout << nem/deno;
//     return 0;
// }
int  update( int a ){
    int ans =a*a;
    return ans ;
}
int main (){
    int a=14;
     a=update(a);
    cout <<a<< endl; 
}