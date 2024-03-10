#include <iostream>
using namespace std;
int main()
{   
    //  int n ,a=0, b=1;
    //  cin>>n;
    //  cout << a <<","<<b <<",";
    //  for (int i = 1; i <=n -2; i++)
    //  {
    //     int sum =a+b;
    //     cout<< sum<< ",";
    //     a=b;
    //     b=sum;
    //  }
     
    //  int n ;
    //  cin>>n;
    //  bool isprime=true;
    //  for (int i=2; i<n ; i++){
    //     if(n%i==0){
    //         isprime=false;
    //         break;
    //     }
    //   } 
    //  if (isprime==false){
    //     cout<< "not a prime no.";
    
    //  }
    //  else {
    //     cout << "it is a prime no.";
    //  }
  
//   for (int i = 0; i <=15; i+=2)
//   {
//     cout << i << " ";
//     if (i&1){
//         continue;
//     }
//     i++;
//   }
// for (int i=0; i<5;i++){
//     for (int j=1; j<=5; j++){
//       if (i+j==10){
//         break;
//       }
//         cout <<i<<" "<<j<<endl;
//     }
// }
int n;
cin>>n;
 int prod=1,sum=0;
for ( n;n!=0;n=n/10)
{
    int digit =n%10;
    prod= prod *digit ;
    sum =sum + digit ;
}
int ans =prod-sum;
  cout<<ans<<endl;
    return 0;
}