#include<iostream>
#include<vector>
using namespace std;
int main (){
    // creation of 2d vector 
    vector<vector<int>>number;
    number={{1,2,3},{23,265,154,558,898,84},{48,454,46468,484,587487,89878}};
    // for row size we use number.sizeo()
    // for colum size we use number[i].size()
    for(int i=0;i<number.size();i++){
        for(int j=0;j<number[i].size();j++){
            cout<<number[i][j]<<endl;
        }
    }
}