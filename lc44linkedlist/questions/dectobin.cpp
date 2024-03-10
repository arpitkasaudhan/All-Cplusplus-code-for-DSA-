
// using namespace std;
// int main()
// {  
//     int n;
//     cin>>n; 
//     int ans =0;
//      int i=0;

//     while (n!=0)
//     {   int digit  =n % 10;
//     if  (digit ==1){
//         ans=(digit * pow(2,i))+ans ;
//     }
//         n=n/10;
//         i++;
//     }
//      cout <<"the answer is " <<ans <<endl;
//      return 0;    
// }  

  #include <iostream>
  #include<math.h>
using namespace std;
int main()
{  
     int n ;
     cin>>n ;
     int ans=0;
         int digit=n%10;
    while(n!=0){
        if ((ans >INT32_MAX/10)||(ans <INT32_MIN/10) ){
            cout<<0;
        }
    ans =(ans *10)+digit  ;
    n=n/10;
        
    }
cout << ans ;
      return 0;    
}  