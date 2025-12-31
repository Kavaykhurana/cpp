// #include<iostream>
// using namespace std;
// void fun(int x,int y){
//     cout<<x<<" "<<y;
// }
// int main(){
// int x=4;  // cout cannot be used for void function
// int y=5;
// fun(x,y);
// }

// #include<iostream>
// using namespace std;
// void fun(int x,int y){
//     cout<<x<<" "<<y;
// }
// int main(){
// fun(2,5);
// }

// #include<iostream>
// using namespace std;
// void fun(int x=5,int y=8){
//     cout<<x<<" "<<y;
// }
// int main(){
// fun();
// }

// #include<iostream>
// using namespace std;
// void fun(int x=5,int y=8){
//     cout<<x<<" "<<y;
// }
// int main(){
// fun(2);
// }

// #include<iostream>
// using namespace std;
// void fun(int x=5,int y){
//     cout<<x<<" "<<y;//default value ya toh sabko do ya kisi ko mat do
// }
// int main(){
// fun(2,6);
// }


// #include<iostream>
// using namespace std;
// void fun(int x,float y){
//     cout<<x<<" "<<y;
// }
// int main(){
// fun(2,2.3);
// }

#include<iostream>
using namespace std;
void fun(int x=5, bool y=true){
    cout<<x<<" "<<y;
}
int main(){
fun(false);
}