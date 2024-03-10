#include<iostream>
using namespace std;
void home(int n,int d){
    cout << "source  "<<n<<"    destination  "<<d<<endl;
    //base case 
    if (n==d){
        cout << "pauch gya "<<endl;
        return;
    }
    n++;
    // recursive call
    home(n+1,d);
  
}
int main ()
{
    int n=1;
    int d=10;
    cout<<endl;
    home(n,d);
    // cout << home(n,d);
    return 0;
}