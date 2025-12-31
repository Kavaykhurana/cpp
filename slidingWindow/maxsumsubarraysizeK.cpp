// #include<iostream>
// #include<climits>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[9]={7,1,2,5,8,4,9,3,6};
//  int k=3;
//  int Max=INT_MIN;
//  int x=0;
//  for(int i=0;i<9-k+1;i++){
//     int p=0;
//     while(x<k && k<=9){
//      p+=arr[i];
//     x++;
//     }
//     Max=max(Max,p);
//     x=k-3;
//     k++;

//  }
//  cout<<Max;
// }

// #include<iostream>
// #include<climits>
// #include<algorithm>
// using namespace std;
// int main(){
// int arr[9]={7,1,2,5,8,4,9,3,6};
// int k=3;
// int Max=INT_MIN;
// for(int i=0;i<9-k;i++){
//     int sum=0;
//     for(int j=i;j<k+i;j++){
//         sum+=arr[j];
//     }
//     Max=max(Max,sum);
// }
// cout<<Max;
// }


// #include<iostream>
// #include<climits>
// #include<algorithm>
// using namespace std;
// int main(){
// int arr[9]={7,1,2,5,8,4,9,3,6};
// int k=3;
// int Max=INT_MIN;
// int sum=0;
// for(int i=0;i<k;i++){
//     sum+=arr[i];
//     Max=max(Max,sum);
// }
// int j=k;
//    for(int i=1;i<9-k;i++){
//     sum=sum-arr[i-1]+arr[j];
//      Max=max(Max,sum);
//      j++;
//    }
//    cout<<Max;
// }


#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
int arr[9]={7,1,2,5,8,4,9,3,6};
int k=3;
int Max=INT_MIN;
int j=k;
int i=0;
int sum=0;
for(int i=0;i<k;i++){
    sum+=arr[i];
}

Max=max(Max,sum);
i=1;
while(j<9){
  sum=sum-arr[i-1]+arr[j];
  Max=max(Max,sum);
  i++;
  j++;
}
cout<<Max;

}