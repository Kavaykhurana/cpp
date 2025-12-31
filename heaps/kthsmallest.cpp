#include<iostream>
#include<queue>
using namespace std;
int main(){
int arr[15] = {42, 7, 89, 23, 56, 14, 67, 31, 98, 10, 75, 3, 60, 28, 51};
int k=3;
priority_queue<int>pq;
for(int i=0;i<15;i++){
    pq.push(arr[i]);
    if(pq.size()>k) pq.pop();
}
cout<<pq.top();  
}