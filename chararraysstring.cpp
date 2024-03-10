#include<iostream>
using namespace std;
// uppercase ko lowercase me 
char tolowercase (char ch){
    if (ch>='a'&& ch<='z'){
        return ch;
    }
    else {
        char temp = ch-'A'+'a';
        return temp;
    }
}
// check if the string is panidrome  
bool checkpalindrome (char a[],int n){
    int s=0;
    int e =n-1;
    while (s<=e){
        if (tolowercase( a[s])!= tolowercase(a[e])){
    return 0;
        } 
        else {
            s++;
            e--;
        }
    }
    return 1;
}
// for reverse the string 
void reverse (char name[],int n){
    int s=0;
    int e=n-1;
    while (s<e){
        swap (name[s++],name [e--]);
    }
}
// for char array length 
int getlength (char name []){
    int count = 0;
    for(int i = 0;name[i] !=0;i++){
        count++;
    }
    return count;
}

int main(){
    char name[10];
    cout<<"enter your name "<<endl;
    cin>>name;
    // name [2]='\0';
    cout<<"your name is ";
    cout <<name <<endl;
  int len =getlength(name);
    cout << "length  "<<getlength(name)<<endl;
reverse(name,len);
cout << "your name is -  "<<name <<endl;
cout <<"palnidrome or not  - "<< checkpalindrome(name ,len)<<endl;
cout<<" character is "<< tolowercase('b')<<endl;
cout<<" character is "<< tolowercase('N')<<endl;

return 0;

} 