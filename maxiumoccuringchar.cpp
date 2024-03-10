#include<iostream>
using namespace std;
// ALL CHARCTERS ARE ALPHABETS IN LOWER CASE 
char getmaximum (string s){
int arr[26]={0};
for (int i =0;i<s.length();i++){
    int n =0;
     n= s[i]-'a'; 
     arr[n]++;
}
int maxi=-1;int ans =0;
for (int i =0;i<26;i++){
  if (maxi<arr[i]){
    ans=i;
    maxi =arr[i];
  }   
}
char finalanswer= 'a'+ans;
return finalanswer;
}


int main(){
     string s;
     cin>> s;    
     cout<<getmaximum(s)<<endl;
    return 0;
}