#include <iostream>
using namespace std;
void selectionsort (int arr[],int n){
   
    for (int  i = 0; i <n-1 ; i++)
    { int minindex=i;
        for (int  j= i+1; j <n; i++)
        {
            if (arr[minindex]>arr[j]){
                minindex=j;
            
            }
            swap (arr[minindex],arr[i]);
        }
     
    }
      return ;
}
int main(){
   
    return 0;
} 