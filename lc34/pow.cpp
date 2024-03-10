//  imp ques 
// find a^b using recursion
#include<iostream>
using namespace std;
int  pow( int a,int b){
    if (b==0){
        return 1;
    }
    if (b==1){
        return a;
    }
    int ans = pow(a,b/2);
    if (b&1){
     ans = a*ans *ans ;
        return ans;
    }
    else{
         ans = ans *ans ;
        return ans;
}}

int main (){
    int a, b;
    cin >>a>> b;
    cout<<pow(a,b);
}