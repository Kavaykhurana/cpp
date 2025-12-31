#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>&q){
      int n=q.size();
      for(int i=1;i<=n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
      }
}
int main(){
    queue<int>v;
    //push pop front back size empty
    v.push(10);
    v.push(20);
    v.push(30);
    v.push(40);
    v.push(50);
    v.pop();
    display(v);

}