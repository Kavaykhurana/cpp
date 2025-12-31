#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter rows of first matrix:";
    cin>>m;
     int n;
    cout<<"enter columns of first matrix:";
    cin>>n;

     int p;
    cout<<"enter rows of 2nd matrix:";
    cin>>p;
     int q;
    cout<<"enter columns of 2nd matrix:";
    cin>>q;
   
   if(n==p){
    int a[m][n];
    
    cout<<"enter the elements of 1st matrix:";
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
  }
   
    int b[p][q];
  cout<<"enter the elements of 2nd matrix:";
  for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
        cin>>b[i][j];
    }
  }
//resultant matrix
int res[m][q];
for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        res[i][j]=0;
                //multiply
        //res[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+
        for(int k=0;k<p;k++){
        res[i][j]+=a[i][k]*b[k][j];
    }
    }
}
for(int i=0;i<m;i++){
    for(int j=0;j<q;j++){
        cout<<res[i][j]<<" ";
    }
}
   }
   else {// n!=p
    cout<<"multiplication not possible";
   }
}

// #include<iostream>
// using namespace std;
// int main(){
//   int m=3,n=2,p=2,q=3;
//   int arr[m][n]={1,2,3,4,5,6};
//   int brr[p][q]={1,2,3,4,5,6};
//   if(n==p){
//     int res[m][q];
//     for(int i=0;i<m;i++){
//       for(int j=0;j<q;j++){
//     res[i][j]=0;
//     for(int k=0;k<p;k++){
//       res[i][j]=arr[i][k]*brr[k][j];
//     }
//       }
//     }
//     for(int i=0;i<m;i++){
//   for(int j=0;j<p;j++){
//     cout<<res[i][j]<<" ";

//   }
//   cout<<endl;
//   }
  

// }
// else cout<<"multiplication not possible";
// }