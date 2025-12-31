//Print all the even numbers from 1 to 100

//for loop

// #include<iostream>
// using namespace std;
// int main(){
//     int i,n;
//     for(i=1;i<=100;i++){
//         if (i%2==0) cout<<i<<endl;
//         else cout<<"";
//     }
    
// }


//while loop

#include<iostream>
using namespace std;
int main(){
    int i,n;
    i=1;
    while(i<=100){
        if(i%2==0) cout<<i<<endl;
        else cout<<"";
        i++;
    }
}