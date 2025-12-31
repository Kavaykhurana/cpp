#include<iostream>
#include<climits>
using namespace std;
int main(){
  int arr[9]={1,2,3,4,5,6,7,8,9};
  int max=INT_MIN;
  for(int i=0;i<9;i++){
    if(arr[i]>max) {
        max=arr[i];
    }
  }
  int factorial=1;
  for(int i=2;i<=max;i++){
   factorial*=i;
  }
  cout<<"factorial of max element in the given array is:"<<factorial;
}