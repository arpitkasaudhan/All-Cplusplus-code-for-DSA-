#include<iostream>
#include<string>
using namespace std;
void reversestring(string &str ,int i ,int j){
    cout << "call value of str  "<<str<<endl;
    if (i>j){
        return ;
    }
    swap(str[i],str[j]);
    i++;
    j--;
    reversestring(str,i,j);
}

int main (){
    string name ;
    cin >> name ;
    reversestring(name ,0,name.length()-1);
    cout <<name <<endl;
}