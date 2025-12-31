#include<iostream>
using namespace std;
class vector{
public:
int size;
int capacity;
int* arr;

vector(){
    size=0;
    capacity=1;
    arr=new int[1]; 
}

void add(int ele){
    if(size==capacity){
        capacity*=2;
        int* arr2=new int[capacity];
        for(int i=0;i<size;i++){
            arr2[i]=arr[i];
        }
        arr=arr2;
    }
    arr[size++]=ele;
}

void print(){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int get(int idx){
    if(size==0){
        cout<<"array is empty";
    }
    if(idx>=size || idx<0){
        cout<<"invalid index";
        return -1;
    }
    return arr[idx];
}

void remove(){
    if(size==0){
        cout<<"array is empty"<<endl; 
    }
    size--;
}

};
int main(){
vector v;
cout<<v.size<<" "<<v.capacity<<endl;
v.add(10);
cout<<v.size<<" "<<v.capacity<<endl;
//v.print();
v.add(5);
cout<<v.size<<" "<<v.capacity<<endl;
//v.print();
v.add(0);
cout<<v.size<<" "<<v.capacity<<endl;
//v.print();

cout<<v.get(1)<<endl;

}