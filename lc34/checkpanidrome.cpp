#include<iostream>
using namespace std ;
bool checkpanidrome (string &str,int i ,int j ){
    if (i>j){
        return 1;
    }
    if (str [i]==str[j]){
        i++;
        j--;
        checkpanidrome(str ,i,j);
        
    }else {
        return 0;
    }
}
int main (){
    string name ;
    cin >> name;
int ans = checkpanidrome(name,0,name.length()-1);
if (ans){
    cout << "yes "<<endl;
} else {
    cout <<"no"<<endl;
}

}