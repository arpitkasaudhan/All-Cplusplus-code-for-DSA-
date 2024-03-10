//important for the concept of array 
#include <iostream>
using namespace std;
int getmax (int arr[],int n){
    int maxi = INT32_MIN;
    for (int i=0;i<n;i++){
   maxi=max(maxi,arr[i]);
        // if (arr[i]>max){
        //     max=arr[i];
        // }
    } return maxi;
}

int getmin (int arr[],int n){
    int mini = INT32_MAX;
    for (int i=0;i<n;i++){
        mini=min(mini,arr[i]);
        // if (arr[i]<min){
        //     min=arr[i];
        // }
    } return mini;
}
int main (){
    int size ;
    cin>>size; 
    int arr[100];
    for(int i= 0;i<size; i++){
        cin>>arr[i];
    }
    cout <<"maximum value of "<< getmax(arr,size)<<endl;
    cout<< "the minimum value "<<getmin(arr ,size )<<endl;
    cout<<INT32_MIN<<endl;
}