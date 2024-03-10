#include<iostream>
using namespace std;
int fibonafci(int a ,int b ,int n  ){
int i =2;
if (i==n){
    cout<<b;
    return ;
}
a=b;
b=a+b;
i++;
fibonafci(a,b,n); 
return;
}

int main ()
{
int a=0,b=1;
int n;
cin >> n;
 cout<<fibonafci (a,b,n);

return 0;

}