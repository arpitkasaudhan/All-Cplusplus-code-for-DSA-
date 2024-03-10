#include<iostream>
#include<unordered_map>
#include<list>
using namespace std ;
class graph{
    public:
    unordered_map<int,list<int>>adj;
    //
    void addedge(int u,int v,bool direction){
        adj[u].push_back(v);
        if(direction==0){
         adj[v].push_back(u);   
        }
    }
    void printedges(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
};
int main(){
    int n,m;
    cin>>n>>m;
    graph g;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addedge(u,v,0);
    }
    g.printedges();
    return 0;
}