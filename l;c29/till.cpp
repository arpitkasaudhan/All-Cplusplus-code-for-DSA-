#include <iostream>
using namespace std;
int main(){
	// your code goes here
	//int T;
	//cin>>T;
	//for(int i=1;i<=T;i++){
      int n,k;
      cin>>n>>k;
      int r=n-k;
      int a=(1-r);
      int b=(1-(2*r));
      int ans=1;
      while(n>=1){
        ans =ans*((n+a)/(n+b));
         n--;
           }
            int ns=1;
           while(r>=1){
          ns=r*ns;
          r--;
        }
      cout<<(ans/ns)<<endl;
//}
	return 0;
}
