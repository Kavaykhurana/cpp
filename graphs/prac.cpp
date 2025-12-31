#include<iostream>
#include<map>
#include<list>
using namespace std;
class graph{
    public:
   map<int,list<int>>adj;

   void addEdge(int u,int v,bool direction){
    adj[u].push_back(v);
    if(direction==0){
        adj[v].push_back(u);
    }
   }

   void display(){
    for(auto x:adj){
        cout<<x.first<<"->";
        for(auto y:x.second){
            cout<<y<<",";
        }
        cout<<endl;
    }
    cout<<endl;
   }
};
int main(){
 graph g;
 cout<<"no of vertices:";
 int v;
 cin>>v;
 
 cout<<"no of edges:";
 int e;
 cin>>e;

 for(int i=0;i<e;i++){
    int u,v;
    cin>>u>>v;
    g.addEdge(u,v,0);
 }

 g.display();
}