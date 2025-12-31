//Given an array of marks of students, if the 
// mark of any student is less than 35 print its roll 
// number. [roll number here refers to the index of the 
// array.

// #include<iostream>
// using namespace std;
//  int main(){
//     int marks[6];
//     for(int i=0;i<=5;i++){
//       cin>>marks[i];
//     }
// for(int i=0;i<=5;i++){
//    if(marks[i]<35) cout<<i<<" ";
// }
//  }


#include<iostream>
using namespace std;
 int main(){
   int n;
   cout<<"enter no of students:";
   cin>>n;
    int marks[n];       //i=0;i<=n-1;
    cout<<"enter the marks:";
    for(int i=0;i<=n-1;i++){
      cin>>marks[i];
    }
for(int i=0;i<=n-1;i++){
   if(marks[i]<35) cout<<i<<" ";
}
 }