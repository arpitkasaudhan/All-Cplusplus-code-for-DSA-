#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num=2;
    while(n>num){
        if(n%num==0){
        num=-1;
        break;
        }
        else{
        num++;}
    }
    if(num==-1||n==1)
    cout<<"no"<<endl;
    else
    cout<<"yes"<<endl;
    return 0;
}