#include<iostream>
using namespace std;
int main ()
{
   int n=7,  arr[] = { 2, 5, 7, 8, 2, 6, 9 };
   int sum = 0;
   for(int i = 0; i<n ; i++){
      sum+=arr[i];
   }
   cout<<"The array sum is "<<sum;
   return 0;
}