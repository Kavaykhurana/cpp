// #include<iostream>
// using namespace std;
// int power(int a,int b){
//     if(b==0) return 1;
//     return  a*power(a,b-1);
// }
// int main(){
// cout<<power(3,4);
// }

// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==0) return 1;
//     return n*fact(n-1);
// }
// int main(){
// cout<<fact(6);
// }

// #include<iostream>
// using namespace std;
// int fibo(int n){
// if(n==1 || n==2) return 1;
// return fibo(n-1)+fibo(n-2);
// }
// int main(){
// cout<<fibo(6);
// }

// #include<iostream>
// using namespace std;
// void fun(int n){
//     if(n==0) return ;
//     cout<<"good morning\n";
//     fun(n-1);
// }
// int main(){
//    fun(3);


// #include<iostream>
// using namespace std;
// int  sum(int n){
//     if(n==0) return 0;
//     int sm=0;
//     sm+=n+sum(n-1);
//     return sm;
// }
// int main(){
// cout<<sum(4);


// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[2][2]={1,2,3,4};
//      int brr[2][2]={1,2,3,4};
//      int crr[2][2];
//      for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//           crr[i][j]=0;

//           for(int k=0;k<2;k++){
//             crr[i][j]+=arr[i][k]*brr[k][j];
//           }
//         }
//      }
//      for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cout<<crr[i][j]<<" ";
//         }
//         cout<<endl;
//      }

//     }

// #include<iostream>
// using namespace std;
// int main(){
//    int arr[]={1,2,3,4};
//    int x=3;
//    bool flag =false;
//    int n=sizeof(arr)/sizeof(arr[0]);
//    for(int i=0;i<n;i++){
//     if(arr[i]==x) flag=true;

//    }
//    if(flag=true) cout<<"element is present";
//    else cout<<"element not present";

// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int  main(){
//     vector<int>v(12,3);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(2);
//     v.push_back(3);
//     //cout<<v[5];
//     for(int i=0;i<12;i++){
//         cout<<v[i]<<" ";
//     }
//     }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<int>v;
// v.push_back(0);
// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// v.push_back(4);
// v.push_back(5);
// v.push_back(6);
// v.push_back(7);
// v.push_back(8);
// v.push_back(9);

// int x=3;
// int count=0;
// for(int i=0;i<v.size();i++){
//     if(v[i]>x){
//         count++;
//     }
// }
// cout<<count;

// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     v.push_back(6);
//     v.push_back(7);
//     v.push_back(8);
//     v.push_back(9);
//     v.push_back(10);

//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     reverse(v.begin(),v.end());
     
//        for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
 
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void display(vector<int>&a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
// }

// void reversepart(int i,int j,vector<int>&v){
//     while(i<=j){
//         int temp=v[i];
//         v[i]=v[j];
//         v[j]=temp; 
//         i++;
//         j--;
//     }  

// }
// int main(){
//    vector<int>v;

//    v.push_back(1);
//    v.push_back(2);
//    v.push_back(3);
//    v.push_back(4);
//    v.push_back(5);
//    v.push_back(6);
//    v.push_back(7);
//    v.push_back(8);

//    display(v);

// cout<<endl;

//    int k;

//    int n=v.size();
  
//    cout<<"after rotating by k=";
//    cin>>k;
//     k=k%n;

//    reversepart(0,n-k-1,v);
//    reversepart(n-k,n-1,v);
//    reverse(v.begin(),v.end());

//    display(v);

// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<int>v;
// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// v.push_back(4);
// v.push_back(5);
// v.push_back(6);
// v.push_back(7);
// v.push_back(8);

// int x;
// cout<<"target=";
// cin>>x;
// int n=v.size();
// for(int i=0;i<n-1;i++){
//     for(int j=i+1;j<n;j++){
//         if(v[i]+v[j]==x){
//             cout<<"("<<i<<","<<j<<")"<<endl;
//         }
//     }
// }



// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){

// vector<int>v1;

// v1.push_back(1);
// v1.push_back(2);
// v1.push_back(3);

// vector<int>v2;
// v2.push_back(4);
// v2.push_back(5);
// v2.push_back(6);
// v2.push_back(7);

// vector<int>v3;
// v3.push_back(8);
// v3.push_back(9);

// vector<vector<int>>v;
// v.push_back(v1);
// v.push_back(v2);
// v.push_back(v3);

// cout<<v[1][2];


// }

// #include<iostream>
// using namespace std;
// int fact(int x){
//     int fac=1;
//     for(int i=1;i<=x;i++){
//         fac*=i;
//     }
//     return fac;

// }

// int combination(int n,int r){
//     return fact(n)/(fact(r)*fact(n-r));
   

// } 
// int main(){
// int x;
// cout<<"x=";
// cin>>x;

// cout<<endl;

// for(int i=0;i<x;i++){
//     for(int j=0;j<=i;j++){
//         cout<<combination(i,j)<<" ";
//     }
//     cout<<endl;
// }
// }


// #include<iostream>
// using namespace std;
// int main(){


// }
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j <= i; j++){
//             int result = 1;
//             for(int k = 1; k <= j; k++){
//                 result = result * (i - k + 1) / k;
//             }
//         }}}

// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==0) return 1;
//     return n*fact(n-1);
// }
// int main(){
//     cout<<fact(6);
    
// }

//different neighbours

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str="AIEEE";
//     int n=str.size();
//     int count=0;
//     for(int i=0;i<n;i++){
//    if(n==1){
//     count=0 ;
//     break;
//    }

//    if(n==2){
//     count=1;
//     break;
//    }

//    if(i==0 && str[i]!=str[i+1]){
//     count++;
//    }

//    if(i==n-1 && str[i]!=str[i-1]){
//    count++;
//    }

//    if(str[i]!=str[i-1] && str[i]!=str[i+1]){
//     count++;
//    }
//     }

//     cout<<count;
// }
 
// #include<iostream>
// #include<vector>
// #include<climits>
// #include<algorithm>
// using namespace std;
// int main(){

// vector<int>v(26,0);
// string str="kavay khurana";
// int n=str.size();
// int count=0;
// for(int i=0;i<n;i++){
//     if(str[i]>=65 && str[i]<=90){
//         v[str[i]-65]++;
//     }
//     else if(str[i]>=97 && str[i]<=122){
//         v[str[i]-97]++;
//     }
    
// }
// for(int i=0;i<v.size();i++){
//     cout<<char(i+65)<<"/"<<char(i+97)<<"->"<<v[i]<<endl;

// }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     string str="kavay khurana";
//     bool flag=false;
//     for(int i=0;i<str.size();i++){
//         if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ){
//           flag=true;
//         }
//     }
//     if(flag==true){
//         cout<<"vowel is present";
//         }
//     else cout<<"vowel not present";
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// string str="kavay khurana";
// vector<int>v(26,0);
// int n=str.size();
// for(int i=0;i<n;i++){
//     if(str[i]>=65 && str[i]<=90){
//         v[str[i]-65]++;
//     }
//     else if(str[i]>=97 && str[i]<=122){
//         v[str[i]-97]++;
//     }
// }
// int max=v[0];
// for(int i=0;i<v.size();i++){
//     if(max<v[i]){
//         max=v[i];
//     }
    
    
// }
// cout<<max;



// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str="kavay khurana";
//     sort(str.begin(),str.end());
//     cout<<str;
// }


// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
// string s="kavay";
// string t="yavak";
// sort(s.begin(),s.end());
// sort(t.begin(),t.end());
// if(s==t){
//     cout<<"yes";
// }
// else cout<<"no";
// }

// #include<iostream>
// using namespace std;
// void removechar(string a,string b,int idx){
//     if(idx==b.size()){
//         cout<<a;
//     }
//     char ch=b[idx];
//     if(ch=='a') removechar(a,b,idx+1);
//     else removechar(a+ch,b,idx+1);
// }
// int main(){
//     string str="kavay khurana";
//       removechar("",str,0);
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,1,5,2,0};
//    int target=7;
//    int n=5;
//    for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         for(int k=j+1;k<n;k++){
//             if(arr[i]+arr[j]+arr[k]==target){
//                 cout<<i<<","<<j<<","<<k<<endl;
//             }
//         }
//     }
//    }
// }

// #include<iostream>
// using namespace std;
// void subset(string ans,string original,int idx){
//     if(idx==original.size()){
//         cout<<ans<<endl;
//     }
//     int ch=original[idx];
//      subset(ans+ch,original,idx+1);

// subset(ans,original,idx+1);
// }
// int main(){
//     string str="kavay khurana";
//     subset("",str,0);
// }



// #include <iostream>
// using namespace std;

// void subset(string ans, string original, int idx) {
//     // Base case: when the index reaches the end of the string
//     if (idx == original.size()) {
//         cout << ans << endl; // Print the subset with a newline
//         return; // Stop further recursion
//     }

//     // Include the current character in the subset
//     subset(ans + original[idx], original, idx + 1);

//     // Exclude the current character from the subset
//     subset(ans, original, idx + 1);
// }

// int main() {
//     string str = "abc";
//     subset("", str, 0); // Start with an empty subset
//     return 0;
// }


// #include<iostream>
// using namespace std;
// void subset(string ans,string original,int idx){
//     if(idx==original.size()){
//         cout<<ans<<endl;
//         return;
//     }
//     int ch=original[idx];
//      subset(ans+original[idx],original,idx+1);

// subset(ans,original,idx+1);
// }
// int main(){
//     string str="kavay";
//     subset("",str,0);
// }


// #include<iostream>
// using namespace std;
// void subset(string ans,string org,int idx){
//     if(idx==org.size()){
//       cout<<ans<<endl;
//       return ;
//     }
//     subset(ans+org[idx],org,idx+1);
//     subset(ans,org,idx+1);
// }
// int main(){
//  string str="kavay khurana";
//  subset("",str,0);
// }

// #include<iostream>
// using namespace std;
// void skip(string ans,string org,int idx){
//     if(idx==org.size()){
//     cout<<ans<<endl;
//     return ;
//    }
//    if(org[idx]=='a')  skip(ans,org,idx+1);
//    else skip(ans+org[idx],org,idx+1);

// }
// int main(){
//   string str="kavay khurana";
//   skip("",str,0);
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// void subset(string ans,string org,int idx){
//   if(idx==org.size()){
//     cout<<ans<<endl;
//     return ;
//   }
//   subset(ans+org[idx],org,idx+1);
//   subset(ans,org,idx+1);
// }

// int main(){
//     string str="baba";
//     cout<<str<<endl;
//     sort(str.begin(),str.end());
//     cout<<str<<endl; 
//     subset("",str,0);
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"x=";
//     cin>>x;

//     bool flag=false;
//     for(int i=2;i<x;i++){
//     if(x%i==0){
//      flag=true;
//         break;
// }
//         }
//     if(flag==true) cout<<"composite";
//     else cout<<"prime";
// }



// #include<iostream>
// using namespace std;
// int main(){
// int arr[7]={1,2,3,4,3,1,7};
// int n=sizeof(arr)/sizeof(arr[0]);
// int i=0;
// bool flag=false;
// int j=n-1;
// while(i<=j){
//     if(arr[i]==3 || arr[j]==3){
//         flag=true;
//     }
//     i++;
//     j--;
// }
// if(flag==true) cout<<"element present";
// else cout<<"element not present";
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[9]={1,2,4,5,9,15,18,21,24};
//     int lo=0;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int hi=n-1;
//     int mid;
//     int target =50;
//     bool flag=false;
//     for(int i=0;i<n;i++){

//      mid=(lo+hi)/2;

//      if(mid==target){
//         flag=true;
//      } 

//      if(mid>target){
//     hi=lo-1;
//      }

//      if(mid<target){
//         lo=mid+1;
//      }
//     }
//     if(flag==true){
//         cout<<"target present";
//     }
//     else if(flag!=true) cout<<"not present";
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={72, 23, 57, 92, 78, 53, 89, 69, 97, 47, 50, 35, 51, 71, 88, 75, 74, 80, 57, 99, 67, 24, 93, 72, 7, 4, 17, 32, 67, 46, 6, 28, 65, 93, 16, 25, 81, 79, 80, 16, 26, 76, 16, 35, 54, 34, 12, 16, 19, 49};
//    int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    
//     int lo=0;
//     int hi=n-1;
//     int mid;
//     int target =50;
//     bool flag=false;

//     for(int i=0;i<n;i++){

//      mid=(lo+hi)/2;

//      if(arr[mid]==target){
//         flag=true;
//      } 

//      if(arr[mid]>target){
//     hi=mid-1;
//      }

//      if(arr[mid]<target){
//         lo=mid+1;
//      }
//     }
//     if(flag==true){
//         cout<<"target present";
//     }
//     else if(flag==false) cout<<"not present";
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"x=";
//     cin>>x;

//     for(int i=2;i<x;i++){
//       if(x%i==0){
//      cout<<"composite";
//      break ;
//       }
//      else if(x%i!=0){
        
//       }
//     }
// }

// #include<iostream>
// #include<cmath>  // For sqrt function
// using namespace std;
// int main() {
//     int x;
//     cout << "x = ";
//     cin >> x;

//     if (x <= 1) {
//         cout << "Neither prime nor composite" << endl;
//         return 0;  // Numbers less than or equal to 1 are neither prime nor composite
//     }

//     for (int i = 2; i <= sqrt(x); i++) {
//         if (x % i == 0) {
//             cout << "Composite" << endl;
//             return 0;  // Exit after finding that the number is composite
//         }
//     }

//     cout << "Prime" << endl;

//     return 0;
// }


// #include<iostream>
// #include<cmath>  // For sqrt function

// using namespace std;

// int main() {
//     int x;
//     cout << "x = ";
//     cin >> x;

//     if (x <= 1) {
//         cout << "Neither prime nor composite" << endl;
//         return 0 ;  // Numbers less than or equal to 1 are neither prime nor composite
//     }

//     for (int i = 2; i <= sqrt(x); i++) {
//         if (x % i == 0) {
//             cout << "Composite" << endl;
//             break;  // Exit after finding that the number is composite
//         }
//     }

//     cout << "Prime" << endl;  // This will only execute if the number is prime

    
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// int arr[]={0,1,2,3,4,5,6,7,9};
// int n=sizeof(arr)/sizeof(arr[0]);
// for(int i=0;i<n;i++){
//  if(arr[i]!=arr[i+1]-1){
//     cout<<arr[i+1]-1;
//     break;
//  }
// }

// }

// #include<iostream>
// using namespace std;
// int main(){
//    string str="0105102110";
//    string s;
//    string t;
//    for(int i=0;i<str.size();i++){
//     if(str[i]=='0'){
//         s+=str[i];
//     }
//     else t+=str[i];
//    }
//    string k=t+s;
//    int x=stoi(k);
//    cout<<x<<" ";
//    cout<<k;

// }

// #include<iostream>
// #include<algorithm>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[]={5,3,1,4,2};
//    int n=5;
//    for(int i=0;i<n-1;i++){ 
//     int min=INT_MAX;
//     int mindx=-1;

//      for(int j=i;j<n;j++){
//         if(arr[j]<min){
//             min=arr[j];
//             mindx=j; 
//         }
//      }   

//    }

// }

// #include<iostream>
// using namespace std;
// void display(int arr[],int n){
//     for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//     }
// }

// void change(int arr[],int n){
    
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//          swap(arr[i],arr[j]);
//             }
//         }
//     }
// }

// int main(){
//     int arr[]={73,94,5,30,82,95,65,37,82,15};
    
//      int n=sizeof(arr)/sizeof(arr[0]);
//      int brr[n];
//     for(int i=0;i<n;i++){
//         brr[i]=arr[i];
//     }
 
//    display(arr,n);
//    cout<<endl;
//   change(arr,n);
//   display(arr,n);
//   for(int i=0;i<n;i++){
//       arr[i]=i;
//   }
//   cout<<endl;
//   display(arr,n);
   
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// void print(int arr[],int i,int n){
// if(i==n) return ;
// cout<<arr[i]<<" ";
// return print(arr,i+1,n);
// }
// int main(){
// int arr[]={1,2,3,5,6,7,8,9};
// int n=sizeof(arr)/sizeof(arr[0]);
//    print(arr,0,n);
// }


// #include<iostream>
// using namespace std;
// void remove(string ans,string org,int idx){
// if(idx==org.size()) {cout<<ans; 
// return ;}
// if(org[idx]!='a') ans+=org[idx];
// remove(ans,org,idx+1);

// }
// int main(){
// string str="kavay khurana";
// remove("",str,0);
// }


// #include<iostream>
// using namespace std;
// void skip(string ans,string org,int idx){
//     if(idx==org.size()){
//         cout<<ans;
//         return;
//     }
//     if(org[idx]!='a'){
//         ans+=org[idx];
//     }
//     skip(ans,org,idx+1);
// }
// int main(){
// string str="kavay khurana";
// skip("",str,0);
// }

// #include<iostream>
// using namespace std;
// void subset(string ans,string org,int idx){
//     if(idx==org.size()) {
//         cout<<ans<<endl;
//      return ;
//      }
//     subset(ans+org[idx],org,idx+1);
//     subset(ans,org,idx+1);
//     //cout<<ans<<endl;
// }
// int main(){
//     string str="abcd";
// subset("",str,0);
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str="abcdef ";
//     int n=str.size();
//     int i=0;
//     int j=n-1;
//     while(i<=j){
//         swap(str[i],str[j]);
//         i++;
//         j--;
//     }
//     cout<<str;
// }

// #include<iostream>
// using namespace std;
// void subset(string ans,string org,int idx){
//     if(idx==org.size())  {cout<<ans<<endl;
//    return;}
//    subset(ans,org,idx+1);
//    subset(ans+org[idx],org,idx+1);
// }
// int main(){
//   string str="kavay";
//   subset("",str,0);
// }


// Input a string of size n and update all the odd positions in the string to character ‘#’. Consider 0-based 
//indexing.

// #include<iostream>
// using namespace std;
// int main(){
//     string str="Pbwcshkuiglhlds";
//     for(int i=0;i<str.size();i++){
//         if(i%2!=0){
//             str[i]='#';
//         }
//     }
//     cout<<str;
// }

//palindrome

// #include<iostream>
// using namespace std;
// int main(){
//     string str="kava";

//     bool flag=true;
//     int i=0;
//     int j=str.size()-1;
//     while(i<=j){
//           if(str[i]!=str[j]){ flag=false;
//          break; 
//          }
//              i++;
//              j--;
//     }
  
//     if(flag==true) cout<<"yes";
//     else cout<<"no";
// }


// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str="abcdef";
//     int n=str.size();
//     reverse(str.begin()+n/2,str.end());
//     cout<<str;

// }

 //Input a string of length less than 10 and convert it into integer without using builtin function.

//  #include<iostream>
//  using namespace std;
//  int main(){
//     string str="12345678";
//     int n=str.size();
//     // int x=stoi(str);
//     // cout<<x;
//     int x;
    
//     for(int i=0;i<n;i++){
//      // x=str[i];
//       str[i]=10*str[i];
//       x+=str[i];

//           }
//           cout<<x;
//  }



// #include<iostream>
// using namespace std;
// int main(){
//      int arr[]={1,2,3,4,5};
//      int srr[5];
//      int n=sizeof(arr)/sizeof(arr[0]);
//      srr[0]=arr[0];
//      for(int i=1;i<n;i++){
//         srr[i]=arr[i]+srr[i-1];
//      }

//      for(int i=0;i<n;i++){
//         cout<<srr[i]<<" ";
//      }
     
// }

// #include<iostream>
// using namespace std;
// int main(){
//      int arr[]={1,2,2,1};
//      int srr[4];
//      int n=sizeof(arr)/sizeof(arr[0]);
//      srr[0]=arr[0];
//      for(int i=1;i<n;i++){
//         srr[i]=arr[i]+srr[i-1];
//      }

//      for(int i=0;i<n;i++){
//         cout<<srr[i]<<" ";
//      }

//      cout<<endl<<endl;

//     for(int i=1;i<n;i++){
//         if(srr[i]==srr[n-1]/2){
//             cout<<"index is:"<<i<<endl<<endl<<"sum is:"<<srr[i];
//         }
//      }
     
     
// }

// #include<iostream>
// using namespace std;
// int main(){
// int arr[4]={1,2,3,0};
// int n=sizeof(arr)/sizeof(arr[0]);
// for(int i=1;i<n;i++){
//    arr[i]=arr[i]+arr[i-1];
// }

// for(int i=0;i<n;i++){
//    cout<<arr[i]<<" ";
// }

// cout<<endl;

// for(int i=0;i<n;i++){
// if(arr[i]==arr[n-1]/2){
//    cout<<i<<" "<<arr[i];
// }
// }
// }

// #include<iostream>
// using namespace  std;
// int main(){
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//     }
// }


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//  vector<int>v;
//  v.push_back(5);
//  v.push_back(1);
//  v.push_back(7);
//  v.push_back(3);
//  v.push_back(9);
//  v.push_back(5);
//  v.push_back(1);
//  v.push_back(5);
//  v.push_back(50);
//  v.push_back(7);
//  v.push_back(2);

//  sort(v.begin(),v.end());
//  for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
//  }

// }


//Input a string and concatenate with its reverse string and print it.
// #include<iostream>
// using namespace std;
// int main(){
// string str="thapar";
// string str1;

// for(int i=str.size();i>=0;i--){
//     str1+=str[i];
// }

// cout<<str+str1;


// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string str="1348323884994944688449";
//     sort(str.begin(),str.end());
//   for(int i=str.size();i>=0;i--){
//     if(str[i]>str[i-1]){
//         cout<<str[i-1];
//         break;
//     }
//     }
// }

 //Given an array of strings. Check whether they are anagram or not.
// #include<iostream>
// #include<algorithm>

// using namespace std;
// int main(){
//     string arr="car";
//     bool flag=false;
//     string arr1="brc";
//     sort(arr.begin(),arr.end());
//      sort(arr1.begin(),arr1.end());
//      if(arr==arr1){
//         flag =true;
//      }
//     if(flag==true) cout<<true;
//     else cout<<false;
// }

// #include<iostream>
// using namespace std;
// int main(){
//   string atr="kjbvvhivb";
//   for(int i=0;i<atr.size();i++){
//     if(i%2!=0){
//         atr[i]='#';
//     }
//   }
//   cout<<atr;

  
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string str="kavay";
//     int noc=0;
//     for(int i=0;i<str.size();i++){
//         if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
//            noc++;
//         }
//     }
//     cout<<(str.size()-noc);
// }


// #include<iostream>
// using namespace std;
// int main(){
//     string str="abcba";
    
//     string str1="";
//     for(int i=str.size()-1;i>=0;i--){
//         str1+=str[i];
//     }

//     if(str1==str) cout<<"yes";
//     else cout<<"no";
    
// }


//input even length of string and reverse 2nd half of the string

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//   string str="abcdef";
//   int n=str.size();
//   reverse(str.begin()+n/2,str.end());
//    cout<<str;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string str="116362";
// int x=0;
// int n=str.size();
// for(int i=0;i<n;i++){
//   x=x*10+str[i]-'0';
// }
// cout<<x;

// }

// #include<iostream>
// using namespace std;
// void matrix(int sr,int er,int sc,int ec,int n,int arr[3][3]){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//          if(sr>sc) cout<<arr[i][j];
//          else if()
//         }
//     }
// }
// int main(){
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     int n=sizeof(arr)/sizeof(arr[0][0]);
    
// }

// #include<iostream>
// using namespace std;
// int fibo(int n){
//     if(n==1 || n==2) return 1;
//     if(n==0) return 0;
//     return (fibo(n-2)+fibo(n-1));
// }
// int main(){
// cout<<fibo(7);
// }

// #include<iostream>
// using namespace std;
// int power(int a,int b){
//     if(a==0 && b==0){
//         cout<<"not defined";
//         return -1;
//     }
//     if(b==0) return 1;
//     return a*power(a,b-1);


// }
// int main(){
// cout<<power(2,3);
// }

// #include<iostream>
// using namespace std;
// int fact(int a){
//     if(a==1) return 1;
//     return a*fact(a-1);
// }
// int main(){
// cout<<fact(7);
// }

// #include<iostream>
// using namespace std;
// int fibo(int a){
//     if(a==1 || a==2){
//         return 1;
//     }
//     return fibo(a-1)+fibo(a-2);
// }
// int main(){
// cout<<fibo(7);
// }

// #include<iostream>
// using namespace std;
// void fun(int n){
//     if(n==0) return ;
//     cout<<"good morning"<<endl;
//     fun(n-1);
// }
// int main(){
// fun(3);
// }

// #include<iostream>
// using namespace std;
// void print(int n,int x){
//     if(x>n) return;
//     cout<<x<<" ";
//     print(n,x+1);
// }
// int main(){
// print(9,1);
// }

// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0) return ;
//     print(n-1);
//     cout<<n<<" ";
// }
// int main(){
// print(9);
// }

// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0) return ;
//     cout<<n<<" ";
//     print(n-1);
    
// }
// int main(){
// print(9);
// }

// #include<iostream>
// using namespace std;
// int stair(int a){
//     if(a==1) return 1;
//     if(a==2) return 2;
//     return stair(a-2)+stair(a-1);
// }
// int main(){
// cout<<stair(3);
// }

// #include<iostream>
// using namespace std;
// int gcd(int a,int b){
//     if(a==0 ) return b;
//     else if(b==0) return a;
//     else return gcd(b%a,a);
// }
// int main(){
//     cout<<gcd(100,10);
// }

// #include<iostream>
// using namespace std;
// int odd(int a,int b){
//     if(a>b) return 0;
//     if(a%2==0) return odd(a+1,b);
//     return a+odd(a+2,b);
// }
// int main(){
// cout<<odd(1,5);
// }

// #include<iostream>
// using namespace std;
// int stairs(int n){
//     if(n==1) return 1;
//     if(n==2) return 2;
//     if(n==3) return 3;
//     return stairs(n-1)+stairs(n-2)+stairs(n-3);
// }
// int main(){
// cout<<stairs(5);
// }

// #include<iostream>
// using namespace std;
// int fun(float a){
//     if(a==1) return 1;
//     if(a==0) return -100;
//      return fun(a/2.0);
//      }
// int main(){
//     cout<<fun(256);

// }


// total factors

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
// int n=60;
// for(int i=1;i<sqrt(n);i++){
//     if(n%i==0) cout<<i<<" "<<n/i<<" ";
// }
// }


// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
// int n=60;
// int fact=0;
// for(int i=1;i<sqrt(n);i++){
//     if(n%i==0) fact+=1;;
// }
// cout<<2*fact;
// }


// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
// int n;
// cout<<"n=";
// cin>>n;
// int p=2*n;
// int sum=0;
// for(int i=1;i<=sqrt(n);i++){
//   if(n%i==0){
//     if(i==n/i){
//         sum+=i;
//     }
//     else
//     sum=sum+i+n/i;
//   }
// }
// if(sum==p) cout<<"perfect number";
// else if(sum!=p) cout<<"not a perfect number";
// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// bool prime(int n){
//     if(n==0) return false;
//     //if(n<2) return false;
//     for(int i=2;i<sqrt(n);i++){
        
//         if(n%i!=0) return true;
//     }

// }
// int main(){
// int n=10;
// int sum=1;
// for(int i=2;i<n;i++){
//     if(prime(i)){
//         sum+=1;
//     }
// }
// cout<<sum;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     bool flag=false;
//     for(int i=2;i<n;i++){
        
//     }
// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// bool isprime(int n){
//     if(n<2) return false;
//     for(int i=2;i<=sqrt(n);i++){
//     if(n%i==0) return false; 
//     }
//     return true;
// }
// int main(){
// cout<<isprime(7);
// }


// #include<iostream>
// #include<cmath>
// using namespace std;
// bool isprime(int n){
//     if(n<2) return false;
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0) return false;
//     }
//     return true;
// }
// int main(){
// int n=20;
// int count=0;
// for(int i=2;i<n;i++){
//     if(isprime(i)){
//         count++;
//         cout<<i<<" ";
//     }
// }
// cout<<endl;
// cout<<count;
// }

//sort an array
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
// int arr[10]={1,5,7,9,3,4,6,80,454,4};
// int n=sizeof(arr)/sizeof(arr[0]);
// vector<int>v(n);
// for(int i=0;i<n;i++){
//     v[i]=arr[i];
// }
// sort(v.begin(),v.end());
// for(int i=0;i<n;i++){
//     cout<<v[i]<<" ";
// }

// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
// int arr[10]={1,5,7,9,3,4,6,8,0,4};
// int n=sizeof(arr)/sizeof(arr[0]);
// vector<int>v(n);
// for(int i=0;i<n;i++){
//     v[i]=arr[i];
// }
// reverse(v.begin(),v.end());
// for(int i=0;i<n;i++){
//   arr[i]=v[i];
// }

// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }

// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
// int arr[10]={1,5,7,9,3,4,6,8,0,4};
// int n=sizeof(arr)/sizeof(arr[0]);
// int i=0;
// int j=n-1;
// while(i<=j){
//     swap(arr[i],arr[j]);
//     i++;
//     j--;
// }

// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }

// }

//bubble sort
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={3,5,5,6,16,6,34,8,4,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//             swap(arr[i],arr[j]);
//             }
//         }
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// void prime(int n){
//     if(n<2) { cout<<"composite";
//     return;}
//     for(int i=2;i<=sqrt(n);i++){
//         if(n%i==0) {cout<<"composite";
//          return ;
//         }
//     }
//     cout<<"prime";
//    // return ;
// }
// int main(){
//     int n=7;
//    prime(n);
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){ 
// vector<int>v;
// v.push_back(1);
// v.push_back(1);
// v.push_back(1);
// v.push_back(2);
// v.push_back(2);
// v.push_back(3);
// v.push_back(3);
// v.push_back(4);
// v.push_back(5);
// v.push_back(5);

// for(int i=0;i<v.size();i++){
//     for(int j=i+1;j<v.size();j++){
//         if(v[i]==v[j]){
//             v.pop_back();
//         }
//     }
// }



// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int  main(){
//     int arr[10]={1,3,5,69,9,0,1,212,345,5454};
//     int Max;
//     int n=sizeof(arr)/sizeof(arr[0]);
//    for(int i=0;i<n;i++){
//          Max=max(arr[i],arr[i+1]);
//    }
//    cout<<Max;



// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};//add 6 after 3 means after 2nd index or after i=2 or after 3rd element
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int brr[n+1];
    
//     for(int i=0;i<n+1;i++){
//       if(i==3){
//             brr[3]=6;
//       }

//   else if(i<3){
//       brr[i]=arr[i];
//     }

//     else if(i>3){
//       brr[i]=arr[i-1];
//     }
// }
//  for(int i=0;i<n+1;i++){
//      cout<<brr[i]<<" ";
//       }

// }

// #include<iostream>
// using namespace std;
// int power(int b,int c){
//   if(c==0) return 1;
//   return b*power(b,c-1);
// }

// int main(){
//   int a,b,c,d;
//   cout<<"a=";
//   cin>>a; 
//   cout<<"b=";
//   cin>>b;
//   cout<<"c=";
//   cin>>c;
//   cout<<"d=";
//   cin>>d;

// int cpowerd=power(c,d);
// int bpowercpowerd=power(b,cpowerd);
// cout<<power(a,bpowercpowerd);


// }

// #include<iostream>
// using namespace std;
// int main(){
// int arr[6]={1,2,3,4,5,15};
// for(int i=1;i<6;i++){
//   arr[i]+=arr[i-1];
// }
// for(int i=0;i<6;i++){
//   cout<<arr[i]<<" ";
// }
// }

// #include<iostream>
// using namespace std;
// int main(){
//   int arr[]={1,2,2,2,2,1};
//   int n=sizeof(arr)/sizeof(arr[0]);

//   for(int i=1;i<n;i++){
//    arr[i]+=arr[i-1];
//   }
//   for(int i=0;i<n;i++){
//    cout<<arr[i]<<" ";
//   }

// cout<<endl<<endl;

//   for(int i=0;i<n;i++){
//     if(arr[n-1]==2*arr[i]){
//       cout<<"index is:"<<i<<endl<<"sum is:"<<arr[i];
//     }
//   }

// }

// #include<iostream>
// using namespace std;
// int main(){
//   int arr[]={1,2,2,2,2,1};
//   int n=sizeof(arr)/sizeof(arr[0]);

//   for(int i=1;i<n;i++){
//    arr[i]+=arr[i-1];
//   }
//   for(int i=0;i<n;i++){
//    cout<<arr[i]<<" ";
//   }

// cout<<endl<<endl;
// bool flag =false;

//   for(int i=0;i<n;i++){
//     if(arr[n-1]==2*arr[i]){
//       flag=true;  
//       break; 
//     }
//     else flag=false;
//   }
//   if(flag==true) cout<<"yes";
//   else cout<<"no";

// }

// #include<iostream>
// using namespace std;
// int main(){
// int arr[5]={1,2,3,4,5};
// int brr[5];
// brr[0]=arr[0];
// for(int i=1;i<5;i++){
//   brr[i]=arr[i]+brr[i-1];
// }
// for(int i=0;i<5;i++){
//   cout<<brr[i]<<" ";
// }
// }

// #include<iostream>
// using namespace std;
// int main(){
// int arr[5]={1,2,3,4,5};
// for(int i=3;i>=0;i--){
//     arr[i]=arr[i]+arr[i+1];
// }

// for(int i=0;i<5;i++){
//     cout<<arr[i]<<" ";
// }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr1[4]={1,3,5,7};
//     int arr1[4]={2,4,6,8};
//     int ;
// }


// #include<iostream>
// using namespace std;
// class player{
//     public:
//     int score;
//     int health;
  
// };
// int main(){
//     int score[100]={};
//     int health[100]={};
// player amit;
// amit.score=90;
// amit.health=1000;

// player harsh;
// harsh.score=120;
// harsh.health=1024;

// player cos;
// cos.score=8.9;
// cos.health=110;

// cout<<cos.health;


// }

// #include<iostream>
// using namespace std;
// class player{
//     public:
//     int score;
//     int health;
//   };
// int main(){
// player amit;
// amit.score=10;
// amit.health=122;
// cout<<amit.health;

// }


// #include <iostream>
// using namespace std;

// class Player {  // Class name should start with uppercase for better readability
// public:
//     int score;
//     int health;
// };

// int main() {
//     Player players[10];  // Renamed array to avoid confusion

//     Player amit;
//     amit.score = 10;
//     amit.health = 122;

//     players[0] = amit;  // Now the assignment is correct

//     cout << "Player 0 Score: " << players[0].score << endl;
//     cout << "Player 0 Health: " << players[0].health << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class player{
//     public:
// int score;
// int health;
// string name;
// };
// int main(){
//     player players[10];

//     player amit;
//     amit.health=100;
//     amit.score=120;
//     amit.name="amit";

// players[0]=amit;

// cout<<players[0].name;

// }

// #include<iostream>
// using namespace std;

// class player{
//     public:
// int score;
// int health;
// string name;
// void showhealth(){
//     cout<<" health is:"<<health;
// }
// };

// class calculator{
//     public:
//     int a;
//     int b;
//     void add(){
//         cout<<a+b;
//     }

//     void subtract(){
//         cout<<a-b;
//     }

// };


// int main(){
//     player players[10];

//     player amit;
//     amit.health=100;
//     amit.score=120;
//     amit.name="amit";

// players[0]=amit;

// cout<<players[0].name;
// amit.showhealth();
// cout<<endl;

// calculator calci;
// calci.a=7;
// calci.b=10;

// calci.add();

// }

// #include<iostream>
// using  namespace std;
// class book{
//     public:
//     string name;
//     int price;
//     int pages;

//    int countbooks(int p){
//     if(price<p){
//         return 1;
//     }
//     else return 0;
//    }

//    bool isbookpresent(string book){
//     if(name==book){
//         return true;
//     }
//     else return false;
//    }
// };
// int main(){
//     book harrypotter;
//     harrypotter.pages=100;
//     harrypotter.price=1000;
//     harrypotter.name="H";

// cout<<harrypotter.countbooks(1200)<<endl;//when price of the book is less than the given price
// cout<<harrypotter.isbookpresent("H");

// }


// #include<iostream>
// using namespace std;
// class books{
//     private:
//     int pages;
//     int price;
//     string name;

//     public:
//     void setpages(int p){
//         pages=p;  }

//      void setprice(int p){
//         price =p; }

//      void setname(string p){
//         name=p; }


//         void getname(){
//             cout<<name<<endl;
//         } 

//          int getprice(){
//             return price;
//         } 

//          int getpages(){
//             return pages;
//         } 

// };
// int main(){
//     books jungle;
//         jungle.setprice(100);
//         jungle.setpages(1000);
//         jungle.setname("a");

//         jungle.getname();
//         cout<<jungle.getprice();
//         cout<<endl<<jungle.getpages();
    
// }


// #include<iostream>
// using namespace std;
// class player{
// private:
// int health;
// int age;
// int score;
// bool alive;

// public:
// int gethealth(){
//     return health;}

// int getage(){
//     return age;}

// int getscore(){
//     return score;}

// int isalive(){
//     return alive; }

//     void sethealth(int health){
//         this->health=health; }

//      void setage(int age){
//         this->age=age;   }

//      void setscore(int score){
//         this->score=score; }

//      void setisalive(bool alive){
//         this->alive=alive; }

        

//     };
//      player getmaxscoreplayer(player a ,player b){
//             if(a.getscore()>b.getscore())
//             return  a; 
//             else return b;
//         }

//         int addscore(player a,player b){
//             return a.getscore()+b.getscore();
//         }
// int main(){

// player harsh;
// player raghav;

// harsh.setage(21);
// harsh.setscore(100);
// harsh.setisalive(true);
// harsh.sethealth(70);

// raghav.setage(221);
// raghav.setscore(120);
// raghav.setisalive(true);
// raghav.sethealth(250);

// cout<<addscore(harsh, raghav)<<endl;
// player sanket=getmaxscoreplayer(harsh,raghav);
// cout<<sanket.getscore()<<endl;
// cout<<sanket.gethealth();

// }

// #include<iostream>
// using namespace std;
// int main(){

// }


// #include<iostream>
// using namespace std;
// class player{
// private:
// int health;
// int age;
// int score;
// bool alive;

// public:
// int gethealth(){
//     return health;}

// int getage(){
//     return age;}

// int getscore(){
//     return score;}

// int isalive(){
//     return alive; }

//     void sethealth(int health){
//         this->health=health; }

//      void setage(int age){
//         this->age=age;   }

//      void setscore(int score){
//         this->score=score; }

//      void setisalive(bool alive){
//         this->alive=alive; }
 
        

//     };
//      player getmaxscoreplayer(player a ,player b){
//             if(a.getscore()>b.getscore())
//             return  a; 
//             else return b;
//         }

//         int addscore(player a,player b){
//             return a.getscore()+b.getscore();
//         }
// int main(){

// player harsh;//object creation,statically
// player raghav;//compile time,static allocation

// player *urvi=new player; //run time,dynamic allocation
// player urviobject=*urvi;

// harsh.setage(21);
// harsh.setscore(100);
// harsh.setisalive(true);
// harsh.sethealth(70);

// raghav.setage(221);
// raghav.setscore(120);
// raghav.setisalive(true);
// raghav.sethealth(250);

// urviobject.setscore(40);
// urviobject.setage(18);

// (*urvi).sethealth(80);

// cout<<(*urvi).gethealth()<<endl;
// //cout<<addscore(harsh, raghav)<<endl;
// player sanket=getmaxscoreplayer(harsh,raghav);
// // cout<<sanket.getscore()<<endl;
// // cout<<sanket.gethealth();

// }

// #include<iostream>
// using namespace std;
// int main(){
    
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,1,3,4,4,5,5,2,2,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int brr[n];
    
// for(int i=0;i<n;i++){
//     brr[i]=0;
// }
    
// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         if(arr[i]>arr[j]){
//             swap(arr[i],arr[j]);
//         }
//     }
// }

// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//     //  if(arr[i]==arr[j]){
//     //  continue;
//     //  }
//       if(arr[i]!=arr[j]){
//         for(int k=0;k<n;k++){
//             brr[k]=arr[i];
//         }
//      }
//     }
// }
    
// for(int i=0;i<n;i++){
//     cout<<brr[i]<<" ";
// }
  
    
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
// int arr[]={1,3,4,3,12,3,1,3,1,13,12};
// int n=sizeof(arr)/sizeof(arr[0]);

// vector<int>v;
// for(int i=0;i<n;i++){
//     v.push_back(arr[i]);
// }

// sort(v.begin(),v.end());
// vector<int>v1;

// int i=0;

// while(i<n-1){
//     if(v[i]==v[i+1]){
//       v1.push_back(v[i]);
//       i++;
      
//     }
// }

// for(int i=0;i<v1.size();i++){
//     cout<<v1[i];
// }

// }

// #include<iostream>
// using namespace std;
// class pokemon{
//     public:
//     int hp;
//     int attack;
//     string name;
//     string type;

//     pokemon(int hp,int attack,string name,string type){
//     this->hp=hp;
//     this->attack=attack;
//     this->name=name;
//     this->type=type;
//     }

// void print(){
//     cout<<name<<" "<<hp<<" "<<attack<<" "<<type<<endl;
// }
// };
// int main(){
// pokemon s1(100,500,"pikachu","electric");
// s1.print();
// }


// #include<iostream>
// using namespace std;
// int main(){
//    static int arr[3]={1,2,3};
//     for(int i=0;i<3;i++){
//         arr[i]++;
//     }
//     for(int i=0;i<3;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     static int a=3,b=4;
//     swap(a,b);
//     cout<<a<<" "<<b;

// }


// #include<iostream>
// using namespace std;
// class vehicle{
//     public:
//     string name;
//     string type;
//     int seater;
//     string body;

// };

// class car:public vehicle{
//     public:
//  bool automatic;

//  car(){};

//  car(string name,string type,int seater,string body,bool automatic){
//     this->name=name;
//     this->body=body;
//     this->type=type;
//     this->automatic=automatic;
//     this->seater=seater;
//  }

//  void print(){
//     cout<<name<<" "<<type<<" "<<seater<<" "<<body<<" "<<automatic<<endl;
//  }

// };

// int main(){
//  car A("dzire","linux",5,"metal",true);
//  A.print();

    
// }


// #include<iostream>
// using namespace std;
// class student{
//     private:
//     int marks;
//     string name;
//     int rno;
//     int admno;

//    public:
//   void setmarks(int marks){
//     this->marks=marks; }

//   void setrno(int rno){
//     this->rno=rno; }

//   void setname(string name){
//     this->name=name;} 

//   void setadmno(int admno){
//     this->admno=admno;}

//    int getmarks(){
//     return marks; }

//     string getname(){
//     return name; }

//     int getrno(){
//     return rno; }

//      int getadmno(){
//      return admno; }

//      void print(){
//         cout<<name<<" "<<marks<<" "<<rno<<" "<<admno<<endl;
//      }
// };
// int main(){
//     student s1;
//     s1.setmarks(98);
//     s1.setname("kavay khurana");
//     s1.setrno(13);
//     s1.setadmno(6560);
//   // s1.print();

//   cout<<s1.getname();
// }

// #include<iostream>
// using namespace std;
// class student{
//    private:
//    string name;

//    public:
//    void setname(string name){
//     this->name=name;
//    }

//    string getname(){
//     return name;
//    }

//    void newname(){
//     this->name="khurana";
//    }

// };
// int main(){
//  student s1;
//  s1.setname("kavay");
//  cout<<s1.getname()<<endl;
//  s1.newname();
//  cout<<s1.getname();

// }


// #include<iostream>
// using namespace std;
// class pokemon{
//     private:
//     int atk;
//     int health;
//     string name;
//     string type;

    
//   public:
//   pokemon(){};

//     pokemon(int atk,int health,string name,string type){
//         this->atk=atk;
//         this->name=name;
//         this->type=type;
//         this->health=health;
//  }

//  void print(){
//     cout<<name<<" "<<type<<" "<<atk<<" "<<health<<endl;
// }

// };
// int main(){
// pokemon p1(100,500,"pikachu","electric");
// p1.print();

// }

// #include<iostream>
// using namespace std; 
// class student{
//     public:
//     int marks;
//     string name;

//     student(){};

//     student(string name,int marks){
//         this->marks=marks;
//         this->name=name;
//     }
//     void print(){
//         cout<<name<<" "<<marks<<endl;
//     }

// };
// int main(){
//     student s1("kavay",89);
//     student *s2=new student("parth",82);
//     s1.print();
//     s2->print();

// }

// #include<iostream>
// using namespace std;
// class fraction{
//     public:
//     int num;
//     int den;

//     fraction(int num,int den){
//         this->num=num;
//         this->den=den;
//     }

//     void print(){
//         cout<<num<<"/"<<den<<endl;
//     }

//     fraction operator+(fraction f){
//         int newnum=this->num*f.den + f.num*this->den;
//         int newden=this->den*f.den;
//         fraction ans(newnum,newden);
//         return ans;
//     }
// };
// int main(){
// fraction f1(1,3);
// fraction f2(4,3);
// fraction f3=f1+f2;
// f3.print();
// }


// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(){};

//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// int main(){
//     Node a(10);
//     Node b(20);
//     Node c(30);
//     Node d(40);
//     a.next=&b;
//     b.next=&c;
//     c.next=&d;
//     // cout<<a.next->next->next->val;

//     Node temp=a;

//     while(1){
//         cout<<temp.val<<" ";
//         temp=*(temp.next);
//     }

// }


// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(){};

//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// int main(){
// Node a(10);
// Node b(20);
// Node c(30);
// Node d(40);

// a.next=&b;
// b.next=&c;
// c.next=&d;

// Node temp=a;

// while(1){
//     cout<<temp.val<<" ";
//     temp=*(temp.next);
// }



// }


// #include<iostream>
// using namespace std;
// class Node {
//     public:
//     int val;
//     Node* next;

//     Node (){};

//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }

// };
// void displayrec(Node* head){
//     if(head==NULL) return;
//         cout<<head->val<<" ";
//         displayrec(head->next);
    
// }

// void display(Node* head){
//     while(head!=NULL){
//         cout<<head->val<<" ";
//        head=head->next;
//     }
//     cout<<endl;
// }

// int main(){
//     // Node a(10);
//     // Node b(20);
//     // Node c(30);
//     // Node d(40);
    
//     // a.next=&b;
//     // b.next=&c;
//     // c.next=&d;

//     Node* a=new Node(10);
//     Node* b=new Node(20);
//     Node* c=new Node(30);
//     Node* d=new Node(40);

//     a->next=b;
//     b->next=c;
//     c->next=d;


//   display(a);
//     displayrec(a);


// }

// #include<iostream>
// using namespace std;
// class date{
//     private:
//     int date;
//     int month;
//     int year;
   
//     public:
//     void setdate(int date){
//         this->date=date;}

//     void setmonth(int month){
//         this->month=month;}

//     void setyear(int year){
//         this->year=year; }


//     int getdate(){
//        return date;
//          }

//     int getmonth(){
//      return month;
//         }

//     int getyear(){
//     return year;
//          }


//  };
// int main(){
// date a;
// a.setdate(10);
// a.setmonth(10);
// a.setyear(2010);

// date b;
// b.setdate(10);
// b.setmonth(10);
// b.setyear(2025);

// if(a.getdate()==b.getdate()){
//     cout<<"equal";
// }
// else cout<<"unequal";
// }

// #include<iostream>
// using namespace std;
// class student{
//     public:
//     int rno;
//     string department;
//     string course;
//     int year;

//      student(){};



//     student(int rno, string department,string course,int year){
//         this->rno=rno;
//         this->department=department;
//         this->course=course;
//         this->year=year;
//     }
// };


// void check(student a,student b){
//     if(a.department==b.department){
//         cout<<"same department";
//     }
//     else cout<<"different department";
// }

// int main(){
// student a(1024,"mechanical","civil",2024);
// student b(1023,"mechanical","cse",2023);
// check(a,b);


// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// class employee{
//     public:
//     string name;
//     int Id;
//     int salary;

//     employee(){};

//     employee( string name,int Id,int salary){
//         this->name=name;
//         this->Id=Id;
//         this->salary=salary;
//     }
// };

// void display(employee a){
//     cout<<a.name<<" "<<a.Id<<" "<<a.salary<<endl;}

// void averagesalary(employee a,employee b,employee c,employee d,employee e){
//     cout<<"Average="<<((a.salary + b.salary + c.salary + d.salary + e.salary)/5)<<endl ;}

// void maxsalary(employee a,employee b,employee c,employee d,employee e){
//     int Max=max(a.salary,max(b.salary,max(c.salary,max(d.salary,e.salary))));
//     cout<<"Max="<<Max<<endl;
//     if(a.salary=Max){
//         cout<<"a";
//     }
//     else if(b.salary=Max){
//         cout<<"b";
//     }
//     else if(c.salary=Max){
//         cout<<"c";
//     }
//     else if(d.salary=Max){
//         cout<<"d";
//     }
//     else {
//         cout<<"e";
//     }
    
    
// }

// int main(){
// employee a("a",1,100);
// employee b("b",2,200);
// employee c("c",3,300);
// employee d("d",4,400);
// employee e("e",5,500);

// display(a);
// display(b);
// display(c);
// display(d);
// display(e);

// averagesalary(a,b,c,d,e);
// maxsalary(a,b,c,d,e);


// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// class triangle{
//     public:
//     int base;
//     int height;

   
//     triangle(int base,int height){
//         this->base=base;
//         this->height=height;
//     }
    
    

// };
// int area(triangle* a){
//     return (a->base*a->height)/2;
// }

// int comparearea(triangle* a,triangle* b){
//     // if(a->area(a)>b->area(b)){
//     //     return (*a).area;
//     // }
//     return max(area(a),area(b));
//     }

// int main(){
// // triangle a(2,4);
// // triangle b(4,8);
// triangle* c=new triangle(2,4);
// triangle* d=new triangle(4,8);

// cout<<area(c)<<endl;
// cout<<area(d)<<endl;

// cout<<comparearea(c,d);


// }


// #include<iostream>
// using namespace std;
// class triangle{
//     private:
//     int base;
//     int height;
  
//   public:
//     triangle(int base,int height){
//         this->base=base;
//         this->height=height;
//     }
//     void setbase(int base){ this->base=base; }
//     void setheight(int height){ this->height=height;}
//     int getbase  (){return base ;}
//     int getheight(){return height;}
// };
// class Area: public triangle{
//     public:
//       int area;

//       Area(&a){

//       }
// };

// int Area(triangle* a){
//   return a->base*a->height/2;
// }

// int CompareArea(triangle* a,triangle* b){
//     return max(a->area,b->area);
// }

// int main(){
// triangle a(2,4);
// triangle b(4,8);
// Area(&a);
// Area(&b);

// cout<<CompareArea(&a,&b);

// }


// #include <iostream>
// using namespace std;
// class Triangle {
// private:
//     int base;
//     int height;

// public:
//     Triangle(int base, int height) {
//         this->base = base;
//         this->height = height;
//     }

//     void setBase(int base) { this->base = base; }
//     void setHeight(int height) { this->height = height; }
//     int getBase() { return base; }
//     int getHeight() { return height; }

//     int getArea() { // Correctly calculating area
//         return (base * height) / 2;
//     }
// };

// int CompareArea(Triangle* a, Triangle* b) {
//     return max(a->getArea(), b->getArea());
// }

// int main() {
//     Triangle a(2, 4);
//     Triangle b(4, 8);

//     cout << "Larger Area: " << CompareArea(&a, &b) << endl;

//     return 0;
// }


// #include<iostream>
// #include<algorithm>
// using namespace std;
// class employee{
//     public:
//     string name;
//     int empid;
//     int salary;
       
//     void display(){
//         cout<<name<<" "<<empid<<" "<<salary<<endl;
//     }    

//     employee(){};
//     employee(string name,int empid,int salary){
//         this->name=name;
//         this->empid=empid;
//         this->salary=salary;
//     }
// };

// void avgsalary(employee a,employee b,employee c,employee d,employee e){
//     cout<<"average salary is:"<<(a.salary + b.salary + c.salary + d.salary + e.salary)/5<<endl;
// }

// void maxsalary(employee a,employee b,employee c,employee d,employee e){
//     int Max=max(a.salary,max(b.salary,max(c.salary,max(d.salary,e.salary))));
    
//    cout<<"max salary is:"<<Max<<endl;
// }

// int main(){
//   employee a("a",1,100);
//   employee b("b",2,200);
//   employee c("c",3,300);
//   employee d("d",4,400);
//   employee e("e",5,500);
   
//   a.display();
//   b.display();
//   c.display();
//   d.display();
//   e.display();

//   avgsalary(a,b,c,d,e);
//   maxsalary(a,b,c,d,e);



// }


// #include<iostream>
// #include<algorithm>
// using namespace std;
// class triangle{
//     //private:
//     public:
//     int base;
//     int height;

//     public:
//     triangle(){};
//     triangle(int base ,int height){
//         this->base=base;
//         this->height=height;
//     }      
    
//     float area(){
//      return base*height/2;
//     }

// };

// float comparearea(triangle* t1,triangle* t2){
//     return max(t1->area(),t2->area());
// }
// int main(){
// triangle t1(2,4);
// triangle t2(4,8);

// cout<<t1.area()<<endl;
// cout<<t2.area()<<endl;

// cout<<comparearea(&t1,&t2);
// }



// #include <iostream>
// using namespace std;
// class Triangle {
// private:
//     int base;
//     int height;

// public:
//     Triangle(int base, int height) {
//         this->base = base;
//         this->height = height;
//     }

//     void setBase(int base) { this->base = base; }
//     void setHeight(int height) { this->height = height; }
//     int getBase() { return base; }
//     int getHeight() { return height; }

//     int getArea() { // Correctly calculating area
//         return (base * height) / 2;
//     }
// };

// int CompareArea(Triangle* a, Triangle* b) {
//     return max(a->getArea(), b->getArea());
// }

// int main() {
//     Triangle a(2, 4);
//     Triangle b(4, 8);

//     cout << "Larger Area: " << CompareArea(&a, &b) << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// class car{
//     private:
//     int speed;
//     int fuel;

//     public:
//     car(){};

//     car(int speed,int fuel){
//         this->speed=speed;
//         this->fuel=fuel;
//     }

//       void display(){
//         cout<<speed<<" "<<fuel<<endl;
//           }
// };
// int main(){
// car a(100,35);
// car b(150,32);
// car c(180,33);
// car d(200,34);

// a.display();
// b.display();
// c.display();
// d.display();

// }

// #include<iostream>
// using namespace std;
// int main(){

// }

// #include <iostream>
// using namespace std;

// class ShoppingCart {
// private:
//     int cartID;
//     float totalAmount;

// public:
// ShoppingCart(){}; 
//     // Parameterized constructor
//     ShoppingCart(int cartID, float totalAmount) {
//         this->cartID = cartID;
//         this->totalAmount = totalAmount;
//     }

//     // Display method
//     void display() const {
//         cout << "Cart ID: " << cartID << ", Total Amount: $" << totalAmount << endl;
//     }
// };

// int main() {
//     int n;

//     // Taking input for the number of shopping carts
//     cout << "Enter the number of shopping carts: ";
//     cin >> n;

//     // Dynamically allocate an array of ShoppingCart objects
//     ShoppingCart* carts = new ShoppingCart[n];

//     // Taking input and initializing each object
//     for (int i = 0; i < n; i++) {
//         int id;
//         float amount;
//         cout << "Enter Cart ID and Total Amount for Cart " << i + 1 << ": ";
//         cin >> id >> amount;
//         carts[i] = ShoppingCart(id, amount);  // Using parameterized constructor
//     }

//     // Displaying the details of all shopping carts
//     cout << "\nShopping Cart Details:\n";
//     for (int i = 0; i < n; i++) {
//         carts[i].display();
//     }

//     // Free the allocated memory
//     delete[] carts;

//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Donor{
//     private:
//     string donor_name;
//     double balance;

//     public:

//     void set_details(string name,double amount){
//         this->donor_name=name;
//         this->balance=amount;
//     }
   
//     double get_balance(){
//         return balance;
//     }

//     void display(){
//         cout<<donor_name<<" "<<balance<<endl;
//     }

// };


// class Recipient{
//     private:
//     string recipient_name;
//     double account_balance;
//     double amount_required;

//     public:

//     void set_details(string name,double balance,double amount){
//      recipient_name=name;
//      account_balance=balance;
//      amount_required=amount;
//     }

//     void display(){
//         cout<<recipient_name<<" "<<account_balance<<" "<<amount_required<<endl;
//     }
    
//     double get_balance(){
//         return account_balance;
//     }

// };


// void transfer(Donor *donor,Recipient &recipient,double amount){
       
// }
// int main(){
// Donor a;
// a.set_details("a",100,200);
// }


// #include <iostream>
// using namespace std;
// class Donor{
// private:
//     string donor_name;
//     double balance;

// public:
//     // Set details for donor
//     void set_details(string name, double amount) {
//         this->donor_name = name;
//         this->balance = amount;
//     }

//     // Display donor details
//     void display() {
//         cout << "Donor Name: " << donor_name << ", Balance: " << balance << endl;
//     }

//     // Get donor's balance
//     double get_balance() {
//         return balance;
//     }

//     // Deduct donation amount from donor's balance
//     void donate(double amount) {
//         if (balance >= amount) {
//             balance -= amount;
//         } else {
//             cout << "Insufficient balance!" << endl;
//         }
//     }
// };

// class Recipient {
// private:
//     string recipient_name;
//     double account_balance;
//     double amount_required;

// public:
//     // Set details for recipient
//     void set_details(string name, double balance, double amount) {
//         recipient_name = name;
//         account_balance = balance;
//         amount_required = amount;
//     }

//     // Display recipient details
//     void display() {
//         cout << "Recipient Name: " << recipient_name << ", Account Balance: " << account_balance 
//              << ", Amount Required: " << amount_required << endl;
//     }

//     // Get recipient's account balance
//     double get_balance() {
//         return account_balance;
//     }

//     // Add received amount to recipient's account balance
//     void receive(double amount) {
//         account_balance += amount;
//     }
// };

// // Transfer function to handle the donation transfer
// void transfer(Donor &donor, Recipient &recipient, double amount) {
//     if (donor.get_balance() >= amount) {
//         donor.donate(amount);
//         recipient.receive(amount);
//         cout << "Transfer successful!" << endl;
//     } else {
//         cout << "Transfer failed: Donor has insufficient balance." << endl;
//     }
// }

// int main() {
//     // Create donor and recipient objects
//     Donor donor;
//     Recipient recipient;

//     // Set details for donor and recipient
//     donor.set_details("John Doe", 100.0);
//     recipient.set_details("Jane Smith", 50.0, 150.0);

//     // Display initial details
//     donor.display();
//     recipient.display();

//     // Perform donation transfer
//     transfer(donor, recipient, 50.0);

//     // Display details after transfer
//     donor.display();
//     recipient.display();

//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Company{
//     public:
//     string company_name;
//     string location;

// };

// class Team:public Company{
//  public:
//   string team_name;
//   string project;
// };

// class Developer:public Team{
//     public:
//     string developer_name;
//     string programming_language;

// };

// int main(){

// }


// #include <iostream>
// using namespace std;
// // Base Class
// class Company {
// protected:
//     string company_name;
//     string location;

// public:
//     Company(string cname, string loc) : company_name(cname), location(loc) {}
//     void displayCompany() {
//         cout << "Company Name: " << company_name << "\nLocation: " << location << endl;
//     }
// };

// // Intermediate Class inheriting from Company
// class Team : public Company {
// protected:
//     string team_name;
//     string project;

// public:
//     Team(string cname, string loc, string tname, string proj) 
//         : Company(cname, loc), team_name(tname), project(proj) {}
//     void displayTeam() {
//         cout << "Team Name: " << team_name << "\nProject: " << project << endl;
//     }
// };

// // Derived Class inheriting from Team
// class Developer : public Team {
// private:
//     string developer_name;
//     string programming_language;

// public:
//     Developer(string cname, string loc, string tname, string proj, string dname, string plang) 
//         : Team(cname, loc, tname, proj), developer_name(dname), programming_language(plang) {}
    
//     void displayDeveloper() {
//         displayCompany(); // Display details from Company class
//         displayTeam();    // Display details from Team class
//         cout << "Developer Name: " << developer_name << "\nProgramming Language: " << programming_language << endl;
//     }
// };

// int main() {
//     // Creating an object of Developer class
//     Developer dev("TechCorp", "New York", "AI Team", "Chatbot Development", "Alice Smith", "C++");
    
//     // Displaying all details
//     dev.displayDeveloper();
    
//     return 0;
// }


// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
    // int arr[]={1,2,3,4,5};
    // int brr[]={6,7,8,9};
    // int n1=sizeof(arr)/sizeof(arr[0]);
    // int n2=sizeof(brr)/sizeof(arr[0]);
    // int crr[n1+n2];
//     // for(int i=0;i<n1+n2;i+=3){
//     //      crr[i]=arr[i];
//     //      crr[i+1]=brr[i];
//     //      crr[i+2]=brr[i+1];
//     // }
//     int n=n1+n2;
//     crr[0]=arr[0];
//     crr[1]=brr[0];
//     crr[2]=brr[1];
//     for(int i=0;i<n;i++){
//         for(int j=3;j<n;j+=3){
//     crr[j]=arr[j-2];
//     crr[j-2]=brr[j];
//     crr[j-1]=brr[j+1];

//         }
//     }

    // for(int i=0;i<n1+n2;i++){
    //     cout<<crr[i]<<" ";
    // }
// }



// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int brr[]={6,7,8,9,10};
//     int n1=sizeof(arr)/sizeof(arr[0]);
//     int n2=sizeof(brr)/sizeof(arr[0]);
//     int crr[n1+n2];
//     //vector<int>v(n1+n2);
//    int n=n1+n2;
//     int i=0;//1,2,3,4
//     int j=1;//
//     crr[0]=arr[0];
//     while(i<n1 || j<n2){
//         //if(n1<n2){ crr[i+n1]=brr[i]; }
//       //else if(n1>n2){ crr[i+n2]=arr[i]; }
//       if(j-i==)
//          crr[i+2]=arr[i];
//       crr[j]=brr[j-1];
//       crr[j+1]=brr[j];

//      i++;
//      j++;

//     }

//     for(int i=0;i<n1+n2;i++){
//         cout<<crr[i]<<" ";
//     }




// }

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4};
//     int brr[]={5,6,7,8,9,10};
//     int n1=sizeof(arr)/sizeof(arr[0]);
//     int n2=sizeof(brr)/sizeof(arr[0]);
//     int crr[n1+n2];
//     //vector<int>v(n1+n2);
//    int n=n1+n2;
//    crr[0]=arr[0];
//     for(int i=1;i<n1;i++){
//         crr[i+2*i]=arr[i];
//     }
 
//      for(int i=1;i<n2;i++){
//         crr[i]=brr[i-1];
//         crr[2*i]=brr[i];
//      }



//     for(int i=0;i<n1+n2;i++){
//         cout<<crr[i]<<" ";
//     }




// }

// #include <iostream>
// using namespace std;
// int main() {
//     int arr[] = {1, 2, 3, 4};
//     int brr[] = {5, 6, 7, 8, 9, 10};
//     int n1 = sizeof(arr) / sizeof(arr[0]);
//     int n2 = sizeof(brr) / sizeof(brr[0]);
//     int crr[n1 + n2];
    
//     int index = 0; // Index for crr
//     int j = 0;     // Index for brr

//     // Iterate through arr
//     for (int i = 0; i < n1; i++) {
//         // Add one element from arr
//         crr[index++] = arr[i];
        
//         // Add two elements from brr
//         if (j < n2) crr[index++] = brr[j++];
//         if (j < n2) crr[index++] = brr[j++];
//     }
    
//     // In case brr has leftover elements, add them at the end
//     while (j < n2) {
//         crr[index++] = brr[j++];
//     }

//     // Print the resulting array
//     for (int i = 0; i < index; i++) {
//         cout << crr[i] << " ";
//     }

//     return 0;
// }



// #include<iostream>
// using namespace std;
// class employee{
//     public:
//     string name;
//     int id;
//     int year;

    


// };
// int main(){
    
// }


// #include<iostream>
// using namespace std;
// class car{
//     int speed;
//     string name;
//     string model;
//     string type;
//     car(){};

//     car( int speed,string name,string model,string type){
//         this->speed=speed;
//         this->name=name;
//         this->type=type;
//         this->model=model;
//     }
// };
// int main(){

// }



// // #include<stdio.h>
// // int main(){
// //     int n=5;
// //     for(int i=0;i<n;i++){
// //         for(int j=0;j<=i;j++){
// //             printf("* ");
// //         }
// //         printf("\n");
// //     }
// //     return 0;
// // }

// // #include<stdio.h>
// // int main(){
// //     int n=5;
// //     for(int i=0;i<n;i++){
// //         for(int j=i;j<n;j++){
// //             printf("* ");
// //         }
// //         printf("\n");
// //     }
// //     return 0;
// // }

// // #include<stdio.h>
// // int main(){
// //     int n=5;
// //     for(int i=0;i<n;i++){
// //         for(int j=i;j<n;j++){
// //             printf("* ");
// //         }
// //         printf("\n");
// //     }
// //     return 0;
// // }

// // #include<stdio.h>
// // int main(){
// //     int i,n,j,a;
// //     n=5;
// //     for(i=1;i<=n;i++){
// //         for(j=1;j<=n-i;j++){
// //         printf(" ");

// //         }
        
// //         for(a=1;a<=i;a++){
// //             printf("*");
            
// //         }
// //         printf("\n");
// //     }
// // }


// // #include<stdio.h>
// // int main(){
// //     int i,n,j,a;
// //     n=5;
// //     for(i=1;i<=n;i++){
// //         for(j=1;j<=i;j++){
// //         printf(" ");
// //         }
// //         for(a=i;a<=n;a++){
// //             printf("*");
            
// //         }
// //         printf("\n");
// //     }
// // }

// // #include<iostream>
// // using namespace std;
// // class car{
// //     string name;
// //     int capacity;
// //     int weight;

// //     car(){};
// //     car(string name,int capacity,int weight){

// //     }
// // };
// // int main(){

// // }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     string a="abcde";
//     string b="edca";
//     sort(a.begin(),a.end());
//     sort(b.begin(),b.end());
//     if(a==b){
//         cout<<"palindrome";
//     }
//     else cout<<"not";
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string a="adg";
//     a+='b';
//     cout<<a;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string a="idnsns";
//     a.pop_back();
//     cout<<a;
// }


// #include<iostream>
// using namespace std;
// class vehicle{
//     public:
//     int capacity;
//     string name;
//     string type;
//     string seats;
//     string colour;

//     vehicle(){};
//     vehicle(int capacity,string name,string type,string seats,string colour){
//         this->capacity=capacity;
//         this->name=name;
//         this->type=type;
//         this->seats=seats;
//         this->colour=colour;
//     }

//     void display(){
//         cout<<name<<" "<<type<<" "<<seats<<" "<<capacity<<" "<<colour<<endl;
//     }
// };
// void change(vehicle &a){
//     a.name="jaadu";
// }
// int main(){
// vehicle a(5,"dzire","4x4","cushioned","white");
// a.display();
// vehicle* b=new vehicle(4,"cx ","wuhd","shbdcc"," 1wudhb");
// // b->display();
// (*b).display();
// change(a);
// change(*b);
// b->display();
// a.display();
// }



// #include<iostream>
// using namespace std;
// int main(){
//     string str="Hasta La Vista";
//     for(int i=0;i<str.size();i++){
//         if(str[i]>=65  &&  str[i]<=90){
//             str[i]+=32;
//         }
//         else if(str[i]>=97  &&  str[i]<=122)
//         str[i]-=32;
//     }
//     cout<<str;
// }


// #include<iostream>
// using namespace std;
// void display(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={6,5,4,3,2,1};
//     int n =sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 swap(arr[i],arr[j]);

//             }
//         }
//     }
// display(arr,n);
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=123456;
//     string str=to_string(a);
//     cout<<str<<endl;
//     swap(str[0],str[str.size()-1]);
//     cout<<str;
// }


// #include<iostream>
// using namespace std;
// class car{
//     public:
//     string name;
//     int year;
//     int modelNo;

//      car(){};
//      car(string name,int year,int modelNo){
//         this->modelNo=modelNo;
//         this->name=name;
//         this->year=year;
//      }
//      void print(){
//         cout<<name<<" "<<year<<" "<<modelNo<<endl;
//      }

// };
// int main(){

// car a("ferrari",2025,12345);
// a.print();



// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int x;
//     bool flag=false;
//   cout<<"x=";
//   cin>>x;
//   for(int i=2;i<sqrt(x);i++){
//     if(x%i==0){
//         flag=true;
//     }
//   }
//   if(x==1) cout<<"neither prime nor composite";
//   else if(flag==true) cout<<"composite";
//   else cout<<"prime";
// }

// #include<iostream>
// using namespace std;
// int factorial(int x){
//     if(x==1) return 1;
//     return x*factorial(x-1);
// }
// int main(){
// cout<<factorial(5);
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8};
//     int n=sizeof(arr)/sizeof(arr[0]);
// int max=arr[0];
// int smax=arr[0];
// for(int i=1;i<n;i++){
//     if(arr[i]>max){
//         max=arr[i];
//     }
// }

// for(int i=1;i<n;i++){
//     if(arr[i]>smax && arr[i]!=max){
//         smax=arr[i];
//     }
// }
// cout<<smax;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,7,8,9};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         if(arr[i]!=arr[i+1]-1 && arr[i]!=arr[n-1]){
//             cout<<"  missing element is:"<<arr[i]+1<<" at index:"<<i+1<<endl;
//                 }
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     string str="racechar";
//     int i=0;
//     int j=str.size()-1;
//     bool  flag=true;
//     while(i<=j){
//         if(str[i]!=str[j]){
//             flag=false;
//         cout<<"no";
//         break;
//         }
//         i++;
//         j--;
//     }

//     if(flag==true) cout<<"yes";
//}

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
// string a="dsa";
// string b="sad";
// sort(a.begin(),a.end());
// sort(b.begin(),b.end());
// if(a==b) cout<<"yes";
// else cout<<"no";
// }

// #include<iostream>
// using namespace std;
// int main(){

// }

// #include <iostream>
// using namespace std;
// int removeDuplicates(int arr[], int n) {
//     if (n == 0) return 0; // Edge case: empty array

//     int j = 0; // Pointer for unique elements

//     for (int i = 1; i < n; i++) {
//         if (arr[i] != arr[j]) { 
//             j++; 
//             arr[j] = arr[i]; // Move the unique element forward
//         }
//     }
//     return j + 1; // Return the new size of the array
// }

// int main() {
//     int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int newSize = removeDuplicates(arr, n);

//     cout << "Array after removing duplicates: ";
//     for (int i = 0; i < newSize; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;
// class pokemon{
//     public:
//     int power;
//     string name;
//     string type;
//     int health;
//     pokemon(int power,string name,string type,int health){
//         this->health=health;
//         this->name=name;
//         this->power=power;
//         this->type=type;
//     }
//     int setpower(int power){this->power=power;}
//     int sethealth(int health){this->health=health;}
//     void getpower(){cout<<power;}
//     void gethealth(){ cout<<health;}
// };
// int main(){
// pokemon a(100,"pikachu","electric",1200);
// cout<<a.power<<endl;
// a.setpower(120);
// a.getpower();
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int lo=arr[0];
//     int hi=arr[n-1];
//     int x;
//     cout<<"target element is:";
//     cin>>x;
//     int mid;
//     for(int i=0;i<n;i++){
//          mid=(lo+hi)/2;
//         if(mid>x){hi=arr[mid];}
//        else  if(mid<x){lo=arr[mid];}
//        else if(mid==x){
//             cout<<"present at index:"<<mid-1<<endl;
//             break;
//         }
//     }
//     if(mid!=x){
//     cout<<"not present";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
//   int n=sizeof(arr)/sizeof(arr[0]);
//     int lo=0;
//     int hi=n-1;
//     int x;
//     cin>>x;
//     int mid;
//     for(int i=0;lo<=hi;i++){
//          mid=(lo+hi)/2;
//         if(arr[mid]>x){hi=mid-1;}
//         else if(arr[mid]<x){lo=mid+1;}
//         else if(arr[mid]==x) {cout<<"present at index:"<<mid;
//     break;}
// }
//     if(arr[mid]!=x) cout<<"absent";
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int lo=0;
//     int hi=n-1;
//     int mid;
//     int x;
//     cout<<"x=";
//     cin>>x;
//     while(lo<=hi){
//         mid=(lo+hi)/2;
//         if(arr[mid]>x){hi=mid-1;}
//          if(arr[mid]<x){lo=mid+1;}
//          if(arr[mid]==x){
//             cout<<"present at index:"<<mid;
//             break;
//         }
//     }
//     if(arr[mid]!=x){
//         cout<<"absent";
//     }
// }

//binary search recursively

// #include<iostream>
// using namespace std;
// bool find(int arr[],int target,int lo,int hi){
// int mid=(lo+hi)/2;
// if(lo<=hi){
// if(arr[mid]==target) return true;
// else if(arr[mid]>target) return find(arr,target,lo,mid-1);
// else if(arr[mid]<target) return find(arr,target,mid+1,hi);
// }
// return false; 
// }
// int main(){
//     int arr[]={3,5,8,14,18,23,38,57,74,90};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int x;
//     cout<<"target element:";
//     cin>>x;
//   cout<<find(arr,x,0,n-1);
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     int Max=arr[0][0];
//     for(int i=0,j=0 ; i<3 && j<3 ; i++,j++){
//         if(arr[i][j]>Max){
//             Max=arr[i][j];
//         }
//     }
//     cout<<Max<<endl;

// }

// #include<iostream>
// using namespace std;//s=1-3+5-7+9-11
// int main(){
// int s,n;
// cout<<"n=";
// cin>>n;
// if(n%2==0){
//     s=-n;
// }
// else if(n%2!=0){
//     s=n;
// }

// cout<<s;
// }

// #include<iostream>
// using namespace std;
// void bubble(int arr[],int i,int j){
    

//     if(arr[i]>arr[j]){
//         swap(arr[i],arr[j]);
//     }
//     bubble(arr,i+1,j+1);

// }
// void display(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
// int arr[5]={5,4,3,2,1};
// bubble(arr,0,1);
// display(arr,5);

// }


// #include<iostream>
// using namespace std;
// // Bubble sort using recursion
// void bubbleSort(int arr[], int n) {
//     // Base case: If the size is 1, return
//     if (n == 1) return;
//     // One pass of bubble sort
//     for (int i = 0; i < n - 1; i++) {
//         if (arr[i] > arr[i + 1]) {
//             swap(arr[i], arr[i + 1]);   }}
//     // Recursive call for the remaining array
//     bubbleSort(arr, n - 1);}
// // Function to display the array
// void display(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";}
//     cout << endl;}
// int main() {
//     int arr[5] = {5, 4, 3, 2, 1};

//     // Call the bubbleSort function
//     bubbleSort(arr, 5);

//     // Display the sorted array
//     display(arr, 5);

//     return 0;
// }



// #include<iostream>
// using namespace std;
// int max(int arr[]){

// int Max=arr[0];

// }
// int main(){
//     int arr[5]={1,2,3,4,5};
// }


// #include<iostream>
// using namespace std;
// class employee{
// public:
// string name;
// int empid;
// string post;
// int age;
// int height;

// void setheight(int height){
//     this->height=height;
// }

// int getheight(){
//     return height;
// }

// employee(){};

// employee(string name,int empid,int age,string post){
//     this->name=name;
//     this->empid=empid;
//     this->post=post;
//     this->age=age;}

// void info(){
//     cout<<name<<" "<<empid<<" "<<age<<" "<<post<<endl;
// }

// };
// int main(){
//     employee a1("kavay",12345,19,"senior");
//     a1.info();
//     a1.setheight(6);
//     cout<<a1.getheight();

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x=1;
//     int* ptr=&x;
//     cout<<ptr<<endl;
//     cout<<*ptr<<endl;
//     cout<<&x<<endl;
//     cout<<x<<endl;
// }

// #include<iostream>
// using namespace std;
// class cricketer{
//     public:
//     int runs;
//     string name;
//     int jersey_no;

//     cricketer(){};

//       cricketer(int runs,string name,int jersey_no){
//       this->jersey_no=jersey_no;
//       this->name=name;
//       this->runs=runs;
//     }

//     void info(){
//         cout<<name<<" "<<runs<<" "<<jersey_no<<endl;
//     }

// };
// int main(){
// cricketer a(25000,"kavay",7);
// a.info();
// cricketer* a1=new cricketer(23343,"uwbddb",0032);
// a1->info();//
// }


// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;

//     Node(){};
//     Node(int val){
//         this->val=val;
//     }

// };
// int main(){
// Node a(10);
// Node b(20);
// Node c(30);
// Node d(40);

// a.next=&b;
// b.next=&c;
// c.next=&d;

// Node temp=a;

// // while(temp.next!=NULL){
// // cout<<temp.val<<" ";
// // temp =*(temp.next);
// // }

// while(1){
//     cout<<temp.val<<" ";
//     if(temp.next==NULL) break;
//     temp =*(temp.next);
//     }

// } 


// #include<iostream>
// using namespace std;
// class Node{
//     public:
// int val;
// Node* next;

// Node(){};

// Node(int val){
//     this->val=val;
//     this->next=NULL;
// }

// // void display(Node* a){
    
// //     Node* head=a;
// //     while(head!=NULL){
// //         cout<<head->val<<" ";
// //         head=head->next;
// //     }
// // }
// };

// void display(Node* a){
    
//     Node* head=a;
//     while(head!=NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }

// }
// int main(){
// Node* a=new Node(10);
// Node* b=new Node(20);
// Node* c=new Node(30);
// Node* d=new Node(40);
// a->next=b;
// b->next=c;
// c->next=d;

// // Node* temp=a;
// // while(temp!=NULL){
// //     cout<<temp->val<<" ";
// //     temp=temp->next;
// // }
// display(a);
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(){};
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }

   
// };

// void display(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
// }
   
// int main(){
// Node* a=new Node(10);
// Node* b=new Node(20);
// Node* c=new Node(30);
// Node* d=new Node(40);
// Node* e=new Node(50);
// a->next=b;
// b->next=c;
// c->next=d;
// d->next=e;

// display(a);
// }


// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node*  next;

//     Node(){};

//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }

// };

// void display(Node* temp){
//     Node* head=temp;
//     while(head!=NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
// }
// int main(){
// Node* a=new Node(10);
// Node* b=new Node(20);
// Node* c=new Node(30);
// Node* d=new Node(40);
// Node* e=new Node(50);

// a->next=b;
// b->next=c;
// c->next=d;
// d->next=e;

// display(a);

// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(){};
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// int main(){
//     Node* a=new Node(10);
//     Node* b=new Node(20);
//     Node* c=new Node(30);
//     Node* d=new Node(40);
//     Node* e=new Node(50);
//     a->next=b;
//     b->next=c;
//     c->next=d;
//     d->next=e;
    
// Node* temp=a;
// while(temp!=NULL){
//     cout<<temp->val<<" ";
//     temp=temp->next;
// }
// }


// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(){};
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }  };
//     void display(Node *head){
//         Node* temp=head;
//         while(temp!=NULL){
//             cout<<temp->val<<" ";
//             temp=temp->next;
//     }  }
// int main(){
// Node* a=new Node(10);
// Node* b=new Node(20);
// Node* c=new Node(30);
// Node* d=new Node(40);
// a->next=b;
// b->next=c;
// c->next=d;
// display(a);

// }


// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next=NULL;
//     Node(){};
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// void display(Node* head){
//   //  Node* temp=head;
// if(head==NULL) return ;
// cout<<head->val<<" ";
// display(head->next);

// }
// int main(){
// Node* a=new Node(10);
// Node* b=new Node(20);
// Node* c=new Node(30);
// Node* d=new Node(40);
// Node* e=new Node(50);

// a->next=b;
// b->next=c;
// c->next=d;
// d->next=e;

// // Node* temp=a;

// // while(temp!=NULL){
// //     cout<<temp->val<<" ";
// //     temp=temp->next;
// // }
// display(a);
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9};//idx=5
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node* next;
    
//     Node(){};
//     Node(int val) {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// class LinkedList { // User-defined data structure
// private:
//     Node* head;
//     Node* tail;
//     int size;

// public:
//     LinkedList() {
//         head = tail = NULL;
//         size = 0;
//     }

//     void insertatend(int val) { // Fixed function name
//         Node* temp = new Node(val);
//         if (size == 0) {
//             head = tail = temp;
//         } else {
//             tail->next = temp;
//             tail = temp;
//         }
//         size++;
//     }

// void insertAtHead(int val){
//     Node* temp=new Node(val);
//     if(size==0) head=tail=temp;
//     else{
//         temp->next=head;
//         head=temp;
//     }
//     size++;
// }

// void InsertAtIndex(int idx,int val){
//     if(idx<0 || idx>size) cout<<"invalid index"<<endl;
//     else if(idx==0) insertAtHead(val);
//     else if(idx==size) InsertAtTail(val);
//     else{
//         Node* t=new Node(val);
//         Node* temp=head;
//         for(int i=0;i<=idx-2;i++){
//             temp=temp->next;
//         }
//         t->next=temp->next;
//         temp->next=t;
//         size++;
//     }
// }

// void InsertAtTail(int val){
//     Node* temp=new Node(val);
//     if(size==0) head=tail=temp;
//     else{
//         tail->next=temp;
//         tail=temp;
//     }
//     size++;
// }
// int getAtIdx(int idx){
//     if(idx<0 || idx>=size){
//         cout<<"invalid index";
//         return -1;
//     }
//     else if(idx==0) return head->val;
//     else if(idx==size-1) return tail->val;
//     else{
//         Node* temp=head;
//         for(int i=1;i<=idx;i++){
//             temp=temp->next;
//         }
//         return temp->val;
//     }
// }
// void deleteAtHead(){
//     if(size==0){
//         cout<<"list is empty!";
//     }
//     head=head->next;
//     size--;
// }
// void deleteAtTail(){
//     if(size==0){
//         cout<<"list is empty!";
//         return;
//     }
//     Node* temp=head;
//     while(temp->next!=tail){
//         temp=temp->next;
//     }
//     temp->next=NULL;
//     tail=temp;
//     size--;
// }
// void deleteAtIdx(int idx){
//     if(size==0){
//         cout<<"list is empty!";
//         return;
//     }
//     else if(idx<0 || idx>=size){
//         cout<<"invalid index";
//         return;
//     }
//     else if(idx==0) return deleteAtHead();
//     else if(idx==size-1) return deleteAtTail();
//     else{
//         Node* temp=head;
//         for(int i=1;i<=idx-1;i++){
//             temp=temp->next;
//         }
//         temp->next=temp->next->next;
//         size--;
//     }
// }
// Node* deletenode(Node* head,Node* target){
//   if(head==target){
//     head=head->next;
//     return head;
//   }
//   Node* temp=head;
//   while(temp->next!=target){
//     temp=temp->next;
//   }
//   temp->next=temp->next->next;
//   return head;}


//   Node* Deletenode(Node* head,int targetval){
//     if(head->val==targetval){
//         head=head->next;
//         return head;
//     }
//     Node* temp=head;
//     while(temp->next->val!=targetval){
//         temp=temp->next;
//     }
//     temp->next=temp->next->next;
//     return head;
//   }
  


// void deleteNode(Node* head,Node* target){
//    Node* temp=head;
//    while(temp->next!=target){
//     temp=temp->next;
//    }
//    temp->next=temp->next->next;}


//     void display() {
//         Node* temp = head;
//         while (temp != NULL) {
//             cout << temp->val << " ";
//             temp = temp->next;
//         }
//         cout << endl; // Fixed endl placement
//     }


//     void insertatend(Node* head,int val){
//         Node* t=new Node(val);
//         while(head->next!=NULL) head=head->next;
//         head->next=t;
//     }
// };

// int main() {
//     LinkedList ll; // No need for 'new'
//     ll.insertatend(10); // {10 -> NULL}
//     ll.display();
//     ll.insertatend(20); // {10 -> 20 -> NULL}
//     ll.display();
//     ll.insertatend(30);
//     ll.insertatend(40);
//     ll.display();
//     ll.insertAtHead(102);
//     ll.display();
//     ll.InsertAtIndex(3,151111);
//     ll.display();
    
    
//      //cout<<ll.size;
// }


// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;

//     Node(){};
//     Node(int val){
//         this->next=NULL;
//         this->val=val;
//     }
// };
// void display(Node* head){
//     while(head!=NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
// }
// int main(){
// Node* a=new Node(10);
// Node* b=new Node(20);
// Node* c=new Node(30);
// Node* d=new Node(40);
// Node* e=new Node(50);

// a->next=b;
// b->next=c;
// c->next=d;
// d->next=e;

// Node* temp=a;
// //display(a);
// //delete 30 idx=2 size=5

// Node* x=a;//=new Node(60);

// for(int i=0;i<2-1;i++){
// x=x->next;
// }
// x->next->val=60;
// display(a);



// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(){};

//     Node(int val){
//         this->next=NULL;
//         this->val=val;
//     }
// };

// class LinkedList { // User-defined data structure
//     private:
//         Node* head;
//         Node* tail;
//         int size;
    
//     public:
//         LinkedList() {
//             head = tail = NULL;
//             size = 0;
//         }
    
//         void insertAtend(int val){
//             Node* temp=new Node(val);
//             if(size==0){
//                 head=tail=temp;
//             }
//             else{
//                 tail->next=temp;
//                 tail=temp;
//             }
//             size++;
//         }

//     void insertAtstart(int val){
//       Node* temp=new Node(val);
//     if(size==0){
//         head=tail=temp;
//     }
//     else{
//         temp->next=head;
//         head=temp;
//     }
//     size++;
    
//     }

//     void insertAtidx(int val,int idx){
//         Node* temp=head;
//         Node* t=new Node(val);
//         if(idx>size || idx<0) cout<<"invalid idx";
//         else if(idx==0) insertAtstart(val);
//         else if(idx==size) insertAtend(val);
//         else {
//             for(int i=0;i<idx-1;i++){
//           temp=temp->next;
//             }
//             t->next=temp->next;
//             temp->next=t;
           
//             size++;
//         } 
       
//     }

//     int getAtidx(int idx){
//         Node* temp=head;
//         if(idx<0 || idx>=size){
//             cout<<"invalid idx";
//             return -1;
//         }
//         else if(idx==0) return head->val;
//         else if(idx==size-1) return tail->val;
//         else{
//             for(int i=0;i<idx;i++){
//                 temp=temp->next; 
//             }
//             return temp->val;
//         }
//     }


// void display(){
//      Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
//      cout<<endl;
//   }
//     };
   
// int main(){
// LinkedList ll;
// ll.insertAtend(10);
// ll.display();
// ll.insertAtstart(20);
// ll.display();
// ll.insertAtidx(45,1);
// ll.display();
// cout<<ll.getAtidx(1);
// }

// #include<iostream>
// using namespace std;
// class Node{
// public:
// int val;
// Node* next;

// Node(){};

//  Node(int val){
// this->val=val;
// this->next=NULL;
// }

// };

// void display(Node* head){
//     while(head){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
// }

// int main(){
// Node* head=new Node(2);
// Node* b=new Node(3);
// Node* c=new Node(3);
// Node* d=new Node(4);
// Node* e=new Node(4);

// head->next=b;
// b->next=c;
// c->next=d;
// d->next=e;

// Node* temp=head;
// Node* t=head;
// while(temp){
//     while(temp->val != t->val){
//         temp=temp->next;
//     }
//     t->next=temp;
//     temp->next=t;
//     temp=t;
// }
// display(head);



// }

// #include<iostream>
// using namespace std;
// void print(int arr[],int size){
//      for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//      }
//      cout<<endl;
// }
// int main(){
//     int arr1[6]={1,2,3,4,5,6};
//     int arr2[6]={7,8,9,10,11,12};
//     int arr[12]={};
//    for(int i=0;i<12;i++){
//    arr[2*i]=arr1[i];
//    arr[2*i+1]=arr2[i];
//    }
// print(arr,12);
   

// }


// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int>v;
//     v.push(10);
//     v.push(20);
//     v.push(30);
//     v.push(40);
//     v.push(50);
//     stack<int>v1;
    
//     while(v.size()>0){
//        // int x=v.pop();
//         v1.push(v.top());
//         v.pop();
//     }
    
//     stack<int>v2;

//     while(v1.size()>0){
//         v2.push(v1.top());
//         v1.pop();
//     }

//     while(v2.size()>0){
//         v.push(v2.top());
//         v2.pop();
//     }

//     stack<int>v3=v;

//     while(v3.size()>0){
//         cout<<v3.top()<<" ";
//         v3.pop();
//     }

// }

// #include<iostream>
// #include<stack>
// using namespace std;
// void printrec(stack<int>&v1){
//   //stack<int>v1=v;
//   if(v1.size()==0) return ;
//   cout<<v1.top()<<" ";
//   int x=v1.top();
//   v1.pop();
//   printrec(v1);
//   v1.push(x);
// }

// void printrecrev(stack<int>&v1){
//     //stack<int>v1=v;
//     if(v1.size()==0) return ;
//     int x=v1.top();
//     v1.pop();
//     printrecrev(v1);
//     v1.push(x);
//     cout<<x<<" ";
//   }

//   void addAtend(int val,stack<int>&v){
//     if (v.size()==0){
//      v.push(val);
//      return ;
//     }
//     int x=v.top();
//     v.pop();
//     addAtend(val,v);
//     v.push(x);
//   }

//   void reverse(stack<int>&v1){
//     //stack<int>v1=v;
//     if(v1.size()==0) return ;
//     int x=v1.top();
//     v1.pop();
//     reverse(v1);
//     addAtend(x,v1);
//     //v1.push(x);
//   }

// int main(){
// stack<int>v;
// v.push(1);
// v.push(2);
// v.push(3);
// v.push(4);
// v.push(5);

// printrec(v);

// cout<<endl;

// printrecrev(v);

// cout<<endl;

// // reverse(v);
// // printrec(v);


// addAtend(0,v);
// printrec(v);

// cout<<endl;
// reverse(v);



// printrec(v);

// }



// #include<iostream>
// #include<stack>
// using namespace std;
// void insert(int val,int idx,stack<int>&v){
//  if(idx==0){
//   v.push(val);
//   return;
//  }
//  int temp=v.top();
//  v.pop();
//  insert(val,idx-1,v);
//  v.push(temp);

// }

// void print(stack<int>&v){
//      stack<int>temp=v;
//      while(temp.size()>0){
//       cout<<temp.top()<<" ";
//       temp.pop();
//      }
//      cout<<endl;
// }
// int main(){
//   stack<int>v;
//   v.push(10);
//   v.push(20);
//   v.push(30);
//   v.push(40);
//   v.push(50);//insert after idx==2   10 20 x 30 40 50


//   print(v);
//   insert(12,2,v);
//   print(v);

// }

// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
// stack<int>v;
// v.push(10);
// v.push(20);
// v.push(30);
// v.push(40);
// v.push(50);

// stack<int>v1;
// while(v.size()>0){
//   v1.push(v.top());
//   v.pop();
// }
// v=v1;
// stack<int>v2=v;

// while(v2.size()>0){
//   cout<<v2.top()<<" ";
//   v2.pop();
// }



// }

// #include<iostream>
// #include<stack>
// #include<vector>
// #include<algorithm>
// #include<cmath>
// #include<climits>
// #include<queue>
// using namespace std;
// int main(){
// }

//print queue

// #include<iostream>
// #include<queue>
// using namespace std;
// void print(queue<int>&v){
//     for(int i=0;i<=v.size()-1;i++){
//         cout<<v.front()<<" ";
//         int x=v.front();
//         v.pop();
//         v.push(x);
//     }
//     cout<<endl;
// }

// int main(){
// queue<int>v;
// v.push(10);
// v.push(20);
// v.push(30);
// v.push(40);
// v.push(50);

// print(v);
// cout<<v.front();

// }


//reverse using stack

// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;
// void Rstack(stack<int>&st){
// stack<int>v;
// while(st.size()>0){
//     v.push(st.top());
//     st.pop();
// }
// st=v;
// }

// void reverse(queue<int>&v){
//     stack<int>st;
//     while(v.size()>0){
//         st.push(v.front());
//         v.pop();
//     }
//     while(st.size()>0){
//         v.push(st.top());
//         st.pop();
//     }
//     cout<<endl;
// }

// void print(queue<int>&v){
//     for(int i=0;i<=v.size()-1;i++){
//         cout<<v.front()<<" ";
//         int x=v.front();
//         v.pop();
//         v.push(x);
//     }
//     cout<<endl;
// }

// int main(){
// queue<int>v;
// v.push(10);
// v.push(20);
// v.push(30);
// v.push(40);
// v.push(50);

// print(v);
// cout<<v.front();
// reverse(v);
// print(v);

// }

// #include<iostream>
// #include<deque>
// using namespace std;
// void print(deque<int>&v){
//     for(int i=0;i<v.size();i++){
//         cout<<v.front()<<" ";
//         int x=v.front();
//         v.pop_front();
//         v.push_back(x);
//     }
//     cout<<endl;
// }
// int main(){
//     deque<int>v;
//     v.push_front(10);
//     v.push_back(20);
//     v.push_front(30);
//     v.push_back(40);
//     v.push_front(50);
//     v.push_back(60);
//     print(v);

// }

//reverse
// #include<iostream>
// #include<deque>
// #include<stack>
// using namespace std;
// void print(deque<int>&v){
//     for(int i=0;i<v.size();i++){
//         cout<<v.front()<<" ";
//         int x=v.front();
//         v.pop_front();
//         v.push_back(x);
//     }
//     cout<<endl;
// }
// void Rdeque(deque<int>&v){
// stack<int>v1;
// while(v.size()>0){
//     v1.push(v.front());
//     v.pop_front();
// }
// while(v1.size()>0){
//     v.push_back(v1.top());
//     v1.pop();
// }

// }
// int main(){
//     deque<int>v;
//     v.push_front(10);
//     v.push_back(20);
//     v.push_front(30);
//     v.push_back(40);
//     v.push_front(50);
//     v.push_back(60);
//     print(v);
//     Rdeque(v);
//     print(v);

// }

// #include<iostream>
// using namespace std;
// class Node{//this is a tree node
//     public:
//     int val;
//     Node* left;
//     Node* right;

//     Node(){};

//     Node(int val){
//         this->val=val;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// int main(){
// Node* a=new Node(1);
// Node* b=new Node(2);
// Node* c=new Node(3);
// Node* d=new Node(4);
// Node* e=new Node(5);
// Node* f=new Node(6);
// Node* g=new Node(7);

// a->left=b;
// b->left=d;
// b->right=e;
// a->right=c;
// c->left=f;
// c->right=g;

// }


// #include<iostream>
// #include<climits>
// #include<algorithm>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* right;
//     Node* left;

//     Node(){};

//     Node(int val){
//         this->val=val;
//         this->right=NULL;
//         this->left=NULL;   }

// };
//  void display(Node* root){
//     if(root==NULL) return ;
//     cout<<root->val<<" ";
//     display(root->left);
//     display(root->right);

//  }


// int sum(Node* root){
//     if(root==NULL) return 0;
//     return root->val + sum(root->left) + sum(root->right);  }

// int product(Node* root){
//     if(root==NULL) return 1;
//      return root->val * product(root->left) * product(root->right);  }

// int size(Node* root){
//     if(root==NULL) return 0;
//     return 1 + size(root->left) + size(root->right);
// }     

// int Max(Node* root){
//     if(root==NULL) return INT_MIN;
//     return max(root->val,max(Max(root->left),Max(root->right)));
// }

// int Min(Node* root){
//     if(root==NULL) return INT_MAX;
//     return min(root->val,min(Min(root->left),Min(root->right)));
// }

// int levels(Node* root){
//     if(root==NULL) return 0;
//     return 1 + max(levels(root->left),levels(root->right));
// }

// int height(Node* root){
//     return levels(root) - 1;
// }
// int main(){
// Node* a=new Node(1);
// Node* b=new Node(2);
// Node* c=new Node(3);
// Node* d=new Node(4);
// Node* e=new Node(5);
// Node* f=new Node(6);
// Node* g=new Node(7);

// a->left=b;
// a->right=c;
// b->left=d;
// b->right=e;
// c->left=f;
// c->right=g;

// display(a);
// cout<<endl;

// cout<<sum(a)<<endl;

// cout<<product(a)<<endl;

// cout<<size(a)<<endl;

// cout<<Max(a)<<endl;

// cout<<Min(a)<<endl;

// cout<<levels(a)<<endl;

// cout<<height(a)<<endl;

// }



// #include<iostream>
// using namespace std;
// int a=989;
// int main(){
//     int a=1;
// for(int i=0;i<3;i++){
//     a++;
// }
// cout<<a;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int a=2;
// for(int i=1;i<=6;i++){
//     int a=i;
// }
// cout<<a;

// }


// #include<iostream>
// using namespace std;
// int main(){
    
// }


// #include <iostream>
// using namespace std;
// struct Task {
//     string description;
//     bool completed;
//     Task* next;

//     Task(string desc) {
//         description = desc;
//         completed = false;
//         next = nullptr;
//     }
// };

// class ToDoList {
// private:
//     Task* head;

// public:
//     ToDoList() { head = nullptr; }

//     void addTask(string desc) {
//         Task* newTask = new Task(desc);
//         if (!head) {
//             head = newTask;
//         } else {
//             Task* temp = head;
//             while (temp->next) temp = temp->next;
//             temp->next = newTask;
//         }
//         cout << "Task added: " << desc << endl;
//     }

//     void markTaskDone(int index) {
//         Task* temp = head;
//         int count = 1;
//         while (temp) {
//             if (count == index) {
//                 temp->completed = true;
//                 cout << "Task marked as done: " << temp->description << endl;
//                 return;
//             }
//             temp = temp->next;
//             count++;
//         }
//         cout << "Invalid task number!" << endl;
//     }

//     void removeTask(int index) {
//         if (!head) {
//             cout << "No tasks to remove!" << endl;
//             return;
//         }
        
//         Task* temp = head;
//         if (index == 1) {
//             head = head->next;
//             delete temp;
//             cout << "Task removed." << endl;
//             return;
//         }

//         Task* prev = nullptr;
//         int count = 1;
//         while (temp && count != index) {
//             prev = temp;
//             temp = temp->next;
//             count++;
//         }

//         if (!temp) {
//             cout << "Invalid task number!" << endl;
//             return;
//         }

//         prev->next = temp->next;
//         delete temp;
//         cout << "Task removed." << endl;
//     }

//     void displayTasks() {
//         if (!head) {
//             cout << "No tasks in the list!" << endl;
//             return;
//         }

//         Task* temp = head;
//         int index = 1;
//         while (temp) {
//             cout << index << ". [" << (temp->completed ? "✔" : "✘") << "] " << temp->description << endl;
//             temp = temp->next;
//             index++;
//         }
//     }
// };

// int main() {
//     ToDoList myList;
//     int choice;
//     string task;
//     int index;

//     while (true) {
//         cout << "\n1. Add Task\n2. Mark Task as Done\n3. Remove Task\n4. Display Tasks\n5. Exit\nChoose an option: ";
//         cin >> choice;
//         cin.ignore();

//         switch (choice) {
//             case 1:
//                 cout << "Enter task description: ";
//                 getline(cin, task);
//                 myList.addTask(task);
//                 break;
//             case 2:
//                 cout << "Enter task number to mark as done: ";
//                 cin >> index;
//                 myList.markTaskDone(index);
//                 break;
//             case 3:
//                 cout << "Enter task number to remove: ";
//                 cin >> index;
//                 myList.removeTask(index);
//                 break;
//             case 4:
//                 myList.displayTasks();
//                 break;
//             case 5:
//                 cout << "Exiting..." << endl;
//                 return 0;
//             default:
//                 cout << "Invalid choice! Try again." << endl;
//         }
//     }
// }


// #include <iostream>
// using namespace std;
// class Task {
// private:
//     string description;
//     bool completed;
//     Task* next;

// public:
//     // Constructor
//     Task(string desc) {
//         description = desc;
//         completed = false;
//         next = nullptr;
//     }

//     // Getter and Setter for description
//     string getDescription() { return description; }
//     void setDescription(string desc) { description = desc; }

//     // Getter and Setter for completed status
//     bool isCompleted() { return completed; }
//     void setCompleted(bool status) { completed = status; }

//     // Getter and Setter for next pointer
//     Task* getNext() { return next; }
//     void setNext(Task* nextTask) { next = nextTask; }

//     // Display task info
//     void displayTask(int index) {
//         cout << index << ". [" << (completed ? "✔" : "✘") << "] " << description << endl;
//     }
// };

// class ToDoList {
// private:
//     Task* head;

// public:
//     ToDoList() { head = nullptr; }

//     void addTask(string desc) {
//         Task* newTask = new Task(desc);
//         if (!head) {
//             head = newTask;
//         } else {
//             Task* temp = head;
//             while (temp->getNext()) temp = temp->getNext();
//             temp->setNext(newTask);
//         }
//         cout << "Task added: " << desc << endl;
//     }

//     void markTaskDone(int index) {
//         Task* temp = head;
//         int count = 1;
//         while (temp) {
//             if (count == index) {
//                 temp->setCompleted(true);
//                 cout << "Task marked as done: " << temp->getDescription() << endl;
//                 return;
//             }
//             temp = temp->getNext();
//             count++;
//         }
//         cout << "Invalid task number!" << endl;
//     }

//     void removeTask(int index) {
//         if (!head) {
//             cout << "No tasks to remove!" << endl;
//             return;
//         }
        
//         Task* temp = head;
//         if (index == 1) {
//             head = head->getNext();
//             delete temp;
//             cout << "Task removed." << endl;
//             return;
//         }

//         Task* prev = nullptr;
//         int count = 1;
//         while (temp && count != index) {
//             prev = temp;
//             temp = temp->getNext();
//             count++;
//         }

//         if (!temp) {
//             cout << "Invalid task number!" << endl;
//             return;
//         }

//         prev->setNext(temp->getNext());
//         delete temp;
//         cout << "Task removed." << endl;
//     }

//     void displayTasks() {
//         if (!head) {
//             cout << "No tasks in the list!" << endl;
//             return;
//         }

//         Task* temp = head;
//         int index = 1;
//         while (temp) {
//             temp->displayTask(index);
//             temp = temp->getNext();
//             index++;
//         }
//     }
// };

// int main() {
//     ToDoList myList;
//     int choice;
//     string task;
//     int index;

//     while (true) {
//         cout << "\n1. Add Task\n2. Mark Task as Done\n3. Remove Task\n4. Display Tasks\n5. Exit\nChoose an option: ";
//         cin >> choice;
//         cin.ignore();

//         switch (choice) {
//             case 1:
//                 cout << "Enter task description: ";
//                 getline(cin, task);
//                 myList.addTask(task);
//                 break;
//             case 2:
//                 cout << "Enter task number to mark as done: ";
//                 cin >> index;
//                 myList.markTaskDone(index);
//                 break;
//             case 3:
//                 cout << "Enter task number to remove: ";
//                 cin >> index;
//                 myList.removeTask(index);
//                 break;
//             case 4:
//                 myList.displayTasks();
//                 break;
//             case 5:
//                 cout << "Exiting..." << endl;
//                 return 0;
//             default:
//                 cout << "Invalid choice! Try again." << endl;
//         }
//     }
// }


// #include<iostream>
// #include<climits>
// #include<cmath>
// #include<algorithm>
// #include<stack>
// #include<queue>
// #include<deque>
// #include<vector>
// using namespace std;
// class counter{
// private:
// int stair_count;
// int personalId;
// int step_count;

// public:
// counter(){
//     step_count=0;
//     stair_count=0;
// };

// counter(int stair_count,int personalId,int step_count){
//     this->stair_count=stair_count;
//     this->step_count=step_count;
//     this->personalId=personalId;
    
// }

// void incrementCount(int n){
//     step_count+=n;
//     stair_count+=n;
// }

// int convertstep(){
//     return 2*step_count;
// }

// void displaycount(){
//     cout<<personalId<<" "<<3*step_count<<endl;
// }
// };

// int main(){
// counter c(0,2012,0);
// c.incrementCount(125);
// c.convertstep();
// c.displaycount();


// }

// #include<iostream>
// #include<climits>
// #include<cmath>
// #include<algorithm>
// #include<stack>
// #include<queue>
// #include<deque>
// #include<vector>
// using namespace std;

// class Counter {
// private:
//     int stair_count;
//     int personalId;
//     int step_count;
//     static int object_count; // Static member to count objects

// public:
//     // Default constructor
//     Counter() {
//         step_count = 0;
//         stair_count = 0;
//         object_count++;
//     }

//     // Parameterized constructor
//     Counter(int stair_count, int personalId, int step_count) {
//         this->stair_count = stair_count;
//         this->step_count = step_count;
//         this->personalId = personalId;
//         object_count++;
//     }

//     // Function to increment step count and stair count
//     void incrementCount(int n) {
//         step_count += n;
//         stair_count += n;
//     }

//     // Function to convert stair count to step count
//     int convertStep() {
//         return stair_count * 2;
//     }

//     // Display function
//     void displayCount() {
//         cout << "Person ID: " << personalId << " Total Step Count: " << step_count + convertStep() << endl;
//     }

//     // Static function to get the count of objects
//     static int getObjectCount() {
//         return object_count;
//     }
// };

// // Initialize static member
// int Counter::object_count = 0;

// int main() {
//     Counter c(0, 2012, 0);
//     c.incrementCount(125);
//     c.displayCount();
//     cout << "Total Counter objects created: " << Counter::getObjectCount() << endl;
//     return 0;
// }


// #include<iostream>
// #include<climits>
// #include<cmath>
// #include<algorithm>
// #include<stack>
// #include<queue>
// #include<deque>
// #include<vector>
// using namespace std;
// class worker{
//    public:
//    string name;
//    int id;
//    int salary;
//    static int no_workers;

// //    worker(){
// //     no_workers++;
// //    }

//    worker(string name,int id,int salary){
//          this->name=name;
//          this->salary=salary;
//          this->id=id;
//          no_workers++;
//    }

//    static int getNo_workers(){
//     return no_workers;
//    }

//   void print(){
//     cout<<"name:"<<name<<endl;
//     cout<<"salary:"<<salary<<endl;
//     cout<<"id:"<<id<<endl;    
//   }
// };

// int worker::no_workers=0;//imp

// int main(){
// worker* w1=new worker("badmos",123,1000);
// worker* w2=new worker("badabadmos",456,1200);

// w1->print();
// w2->print();
// cout<<worker::getNo_workers();


// delete w1;
// delete w2;

// }

// #include<iostream>
// #include<climits>
// #include<cmath>
// #include<algorithm>
// #include<stack>
// #include<queue>
// #include<deque>
// #include<vector>
// using namespace std;
// class Node{
// public:
// int val;
// Node* next;

// Node(int val){
//     this->val=val;
// }

// };
// int getsize(Node* head){
//     Node* temp=head;
//     int size=1;
//     if(head->next==head) return 1;
//     while(temp->next!=head){
//       size++;
//       temp=temp->next;
//     }
//     return size;
// }
// void Delete(Node* head){
//     Node* temp=head;
//      for(int i=0;i<getsize(temp)-1;i++){
//         temp=temp->next;
//      }
//      temp->next=head;
// }

// void print(Node* head){
//     Node* temp=head;
//     for(int i=0;i<getsize(temp);i++){
//         cout<<temp->val<<" ";
//         temp=temp->next;
//         cout<<endl;
//     }
// }
// int main(){
// Node* a=new Node(10);
// Node* b=new Node(20);
// Node* c=new Node(30);
// Node* d=new Node(40);
// Node* e=new Node(50);

// a->next=b;
// b->next=c;
// c->next=d;
// d->next=e;
// d->next=a;

// print(a);

// Delete(a);

// cout<<endl;

// print(a);


// }


// #include<iostream>
// #include<climits>
// #include<cmath>
// #include<algorithm>
// #include<stack>
// #include<queue>
// #include<deque>
// #include<vector>
// using namespace std;
// class Node{
// public:
// int val;
// Node* next;

// Node(int val){
//     this->val=val;
// }

// };
// void del(Node* head){
//     Node* temp=head;
//     if(head->next==head) return;

//     while(temp->next->next!=head){
//         temp=temp->next;
//     }

//     temp->next=head;
// }
// int main(){
// Node* a=new Node(10);
// Node* b=new Node(20);
// Node* c=new Node(30);
// Node* d=new Node(40);
// Node* e=new Node(50);

// a->next=b;
// b->next=c;
// c->next=d;
// d->next=e;
// e->next=a;

// del(a);


// }


// #include<iostream>
// #include<climits>
// #include<cmath>
// #include<algorithm>
// #include<stack>
// #include<queue>
// #include<deque>
// #include<vector>
// using namespace std;
// class Node{
// public:
// int val;
// Node* next;

// Node(int val){
//     this->val=val;
//     this->next=NULL;
// }

// };
// void del(Node* &head){
//     Node* temp=head;
//     if(head->next==NULL){ 
//         delete head;
//         head=NULL;
//         return;
//     }

//     while(temp->next->next!=NULL){
//         temp=temp->next;
//     }
//      delete temp->next;
//      temp->next=NULL;

// }
// void display(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//    cout<<temp->val<<" ";
//    temp=temp->next;
//     }
// }
// int main(){
// Node* a=new Node(10);
// Node* b=new Node(20);
// Node* c=new Node(30);
// Node* d=new Node(40);
// Node* e=new Node(50);

// a->next=b;
// b->next=c;
// c->next=d;
// d->next=e;

// display(a);
// del(a);
// cout<<endl;
// display(a);


// }


// #include<iostream>
// #include<climits>
// #include<cmath>
// #include<algorithm>
// #include<stack>
// #include<queue>
// #include<deque>
// #include<vector>
// using namespace std;
// class Node{
// public:
// int val;
// Node* next;

// Node(int val){
//     this->val=val;
//     this->next=NULL;
// }

// };
// void del(Node* &head){
//     Node* temp=head;
//     if(head->next==NULL){ 
//         delete head;
//         head=NULL;
//         return;
//     }

//     while(temp->next->next!=NULL){
//         temp=temp->next;
//     }
//      delete temp->next;
//      temp->next=NULL;

// }
// void display(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//    cout<<temp->val<<" ";
//    temp=temp->next;
//     }
// }
// int main(){
// Node* a=new Node(10);
// Node* b=new Node(20);
// Node* c=new Node(30);
// Node* d=new Node(40);
// Node* e=new Node(50);

// a->next=b;
// b->next=c;
// c->next=d;
// d->next=e;

// display(a);
// del(a);
// cout<<endl;
// display(a);


// }

// 

// #include<iostream>
// #include<climits>
// #include<cmath>
// #include<algorithm>
// #include<stack>
// #include<queue>
// #include<deque>
// #include<vector>
// using namespace std;
// int main(){
// vector<int>v={10,20,10,30,40,50};
// int count_10=count(v.begin(),v.end(),10);
// cout<<count_10;
// }


// #include<iostream>
// #include<climits>
// #include<cmath>
// #include<algorithm>
// #include<stack>
// #include<queue>
// #include<deque>
// #include<vector>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* right;
//     Node* left;
//     Node(int val){
//      this->val=val;
//      this->right=NULL;
//      this->left=NULL;
//     }
// };
// void display(Node* head){
//     if(head==NULL) return;
//     cout<<(head->val)<<" ";
//     display(head->left);
//     display(head->right);
// }

// int sum(Node* head){
//     if(head==NULL) return 0;
//     return head->val + sum(head->left) + sum(head->right);//max size levels
// }

// int size(Node* head){
//     if(head==NULL) return 0;
//     return 1 + size(head->left) + size(head->right);
// }

// int levels(Node* head){
// if(head==NULL) return 0;
// return 1 + max(levels(head->left),levels(head->right));
// }

// int MAX(Node* head){
//     if(head==NULL) return INT_MIN;
//     return max(head->val,max(MAX(head->left),MAX(head->right)));
// }


// int main(){
// Node* a=new Node(1);
// Node* b=new Node(2);
// Node* c=new Node(3);
// Node* d=new Node(4);
// Node* e=new Node(5);
// Node* f=new Node(6);
// Node* g=new Node(7);

// a->left=b;
// a->right=c;
// b->left=d;
// b->right=e;
// 

//#include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;

//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// void print(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     Node* a=new Node(10);
//     Node* b=new Node(20);
//     Node* c=new Node(30);
//     Node* d=new Node(40);
//     Node* e=new Node(50);
//     a->next=b;
//     b->next=c;
//     c->next=d;
//     d->next=e;
//    print(a);
    
    
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={5,4,3,2,1};
//     for(int i=0;i<5;i++){
//         for(int j=i+1;j<5;j++){
//             if(arr[j]<arr[i]){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={2,3,1,4,5};//5,4,1,3,2
// int i=0;
// int j=4;
// while(i<=j){
//     swap(arr[i],arr[j]);
//     i++;
//     j--;
// }

// for(int i=0;i<5;i++){
//     cout<<arr[i]<<" ";
// }
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
// int a,b;
// cout<<"a=";
// cin>>a;
// cout<<"b=";
// cin>>b;
// int hcf=1;
// for(int i=2;i<=min(a,b);i++){
//     if(a%i==0 && b%i==0){
//         hcf=i;
//     }
// }
// cout<<"hcf="<<hcf<<endl;
// cout<<"lcm="<<a*b/hcf;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"hello world";
//     cout<<endl;
//     cout<<"mota badmos";
//     cout<<endl;
//     cout<<"badmos";
//     cout<<endl;
//     cout<<1288436;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"hello";
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;

//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// int main(){
// Node* a=new Node(10);
// Node* b=new Node(20);
// Node* c=new Node(30);
// Node* d=new Node(40);
// Node* e=new Node(50);

// a->next=b;
// b->next=c;
// c->next=d;
// d->next=e;

// Node* temp=a;

// while(temp!=NULL){
//     cout<<temp->val<<" ";
//     temp=temp->next;
// }

// cout<<endl;



// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x=12343;
//     int count=0;
//     while(x!=0){
//         count++;
//         x=x/10;
//     }
//     cout<<count;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int x=12345;
//    int r=0;
//   int rev;
//     while(x!=0){
//         r=(r + x%10)*10;
//         x=x/10; 
//     }
//    rev=r/10;
//     cout<<rev;    
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int x=12321;
//     int x1=x;
//     int rev=0;
//     while(x!=0){
//         rev=(rev+x%10)*10;
//         x=x/10;
//     }
//     rev=rev/10;

//     if(rev==x1) cout<<"palindrome";
//     else cout<<"non palindrome";

// }


// #include<iostream>
// #include<algorithm>
// using namespace std;
// int  main(){
//     int x=6,y=8;
//     int hcf=1;
//     for(int i=2;i<min(x,y);i++){
//         if(x%i==0 && y%i==0){
//             hcf=i;
//         }
//     }
//     cout<<hcf;
// }


// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int x=153;
//     int x1=x,x2=x;
//     int check=0;
//     int count=0;

//     while(x2!=0){
//     count++;
//     x2=x2/10;
//     }

//     while(x1!=0){
//          check+=pow(x1%10,count);
//          x1=x1/10;
//     }

//    if(check==x) cout<<"armstrong";
//     else cout<<"non armstrong";
// }


// #include<iostream>
// #include<cmath>
// using namespace std;
// int main() {
//     int x = 153;
//     int x1 = x, x2 = x;
//     int check = 0;
//     int count = 0;

//     while (x2 != 0) {
//         count++;
//         x2 = x2 / 10;}

//     while (x1 != 0) {
//         check += (int)round(pow(x1 % 10, count));
//         x1 = x1 / 10; }

//     if (check == x)  cout << "armstrong";
//     else cout << "non armstrong";
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cout<<"x=";
//     cin>>x;
//     for(int i=1;i!=x+1;i++){
//         if(x%i==0){
//             cout<<i<<" ";
//         }
//     }
// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int x;
//     cout<<"x=";
//     cin>>x;
// bool flag=true;
// for(int i=2;i<=sqrt(x);i++){
//     if(x%i==0){
//         flag=false;
//         break;
//     }
// }
// if(flag==true) cout<<"prime";
// else cout<<"composite";
// }


// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0) return;
//     cout<<"badmos"<<endl;
//     print(n-1);
// }
// int main(){
//     int x;
//     cout<<"x=";
//     cin>>x;
//     print(x);

// }


// #include<iostream>
// using namespace std;
// void print(int n , string name){
//     if(n==0) return;
//     cout<<name<<endl;
//     print(n-1,name);
// }
// int main(){
//     int x;
//     cout<<"x=";
//     cin>>x;
//     string name;
//     cout<<"name=";
//     cin>>name;
//     print(x,name);

//  }


// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0) return;
//     print(n-1);
//     cout<<n<<" ";
// }
// int main(){
// print(10);
// }

// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0) return;
//     cout<<n<<" ";
//     print(n-1);
// }
// int main(){
// print(10);
// }


// #include<iostream>
// using namespace std;
// int sum(int n){
//     if(n==0) return 0;
//     return n + sum(n-1);
// }
// int main(){
// cout<<sum(10);
// }


// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==0) return 1;
//     return n*fact(n-1);
// }
// int main(){
// cout<<fact(7);
// }


// #include<iostream>
// using namespace std;
// int fibo(int n){
//     if(n==2 || n==1) return 1;
//     return fibo(n-1) + fibo(n-2);

// }
// int main(){
// cout<<fibo(7);
// }

// #include<iostream>
// using namespace std;
// int  main(){
// int arr[5]={5,4,3,2,1};
// int n=sizeof(arr)/sizeof(arr[0]);
// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         if(arr[j]<arr[i]){
//             swap(arr[i],arr[j]);
//         }
//     }
// }
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// }

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[9]={1,2,3,4,5,6,7,8,9};
// int max=INT_MIN;
// for(int i=0;i<9;i++){
//     if(max<arr[i]){
//         max=arr[i];
//     }
// }
// cout<<max;
// }


// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[9]={1,2,3,4,5,6,7,8,9};
// int Max=arr[0];
// for(int i=0;i<9;i++){
//     Max=max(arr[i],Max);
// }
// cout<<Max;

// }


// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
// stack<int>v;
// v.push(10);
// cout<<v.top();
// }

// #include<iostream>
// using namespace std;
// int main(){
// cout<<"hello world";
// cout<<endl;
// cout<<"dsa ";

// }


// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     int arr[5]={5,4,3,2,1};
//     for(int i=0;i<5;i++){
//         for(int j=i+1;j<5;j++){
//             if(arr[i]>arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }

//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"hello world";
// }


// #include<iostream>
// using namespace std;
// int main(){
// int a;
// cout<<"a=";
// cin>>a;
// a%2==0 ? cout<<"even":cout<<"odd";

// }


// #include<iostream>
// using namespace std;
// int main(){
// cout<<"hello world";
// }


// #include<iostream>
// using namespace std;
// int  main(){
//     cout<<"hell";
// }


// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<=100;i+=2){
        
//         cout<<i<<endl;
//     } 
// }

// #include<iostream>
// using namespace std;
// int  main(){
//     for(int i=19;i<=190;i+=19){
//         cout<<i<<endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n=";
//     cin>>n;
//     for(int i=1;i<2*n;i+=2){
//         cout<<i<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
// int i=1,n;
// cout<<"n=";
// cin>>n;
// while(i<2*n){
// cout<<i<<" ";
// i+=2;
// }
// }

// #include<iostream>
// using namespace std;
// int sum(int a,int b){
//     return a+b;
// }
// int main(){
//     int x=3;
//     int y=3949;
//     cout<<sum(x,y);
// }

// #include<iostream>
// using namespace std;
// int fact(int x){
//     int factorial=1;
//     for(int i=1;i<=x;i++){
//      factorial*=i;
//     }
//     return factorial;
// }
// int main(){
// cout<<fact(5);
// }


// #include<iostream>
// using namespace std;
// void square(int n){
//     for(int i=1;i<=n;i++){
//         cout<<i*i<<endl;
//     }
// }
// int main(){
// square(10);
//}


// #include<iostream>
// using namespace std;
// int areaOfCircle(int radius){
//     return 3.14*radius*radius;
// }
// int main(){
//     cout<<areaOfCircle(10);
// }


// #include<iostream>
// using namespace std;
// void odd(int a,int b){
//     for(int i=min(a,b);i<max(a,b);i++){
//         if(i%2!=0){
//             cout<<i<<" ";
//         }
//     }
// }
// int main(){
//     int a=10;
//     int b=50;
//     odd(a,b);
// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// bool prime(int x){
//     //bool flag=false;
//     for(int i=2;i<sqrt(x);i++){
//         if(x%i==0){
//         return false;
//             }
//         else return true;
//     }
// }
// int main(){
// cout<<prime(12);
// }


// #include<iostream>
// using namespace std;
// int square(int a){
//     return a*a;
// }

// int NoOfDigits(int a){
//     int count=0;
//     for(int i=1;a>0;i++){
//     a=a/10;
//     count++;
//     }
//     return count;
// }

// int main(){
// int x=120;
// cout<<NoOfDigits(x)<<endl;
// cout<<square(x);

// }

// #include<iostream>
// using namespace std;
// void swap(int &a,int& b){
//      int temp=a;
//      a=b;
//      b=temp;
// }
// int main(){
//  int a=1,b=3;
//   swap(a,b);
//   cout<<a<<b;
// } 

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={90,30,32,85,34,97};
//     for(int i=0;i<6;i++){
//         if(arr[i]<35){
//             cout<<i<<" ";
//         }
//     }
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,0};
//     int max=arr[0];
//     for(int i=1;i<10;i++){
//       if(max<arr[i]){
//         max=arr[i];
//       }

//     }
//     cout<<max;
// }



// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,0};
//     int max=INT_MIN;
//     for(int i=0;i<10;i++){
//       if(max<arr[i]){
//         max=arr[i];
//       }

//     }
//     int smax=INT_MIN;
//     for(int i=0;i<10;i++){
//         if(smax<arr[i] && arr[i]!=max){
//             smax=arr[i];
//         }
//     }
// cout<<smax;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,3,6,4,3,0};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int lo=0;
//     int hi=n-1;
    
//     while(lo<=hi){
//         int mid=(lo+hi)/2;
//         if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
//         cout<<arr[mid];
//         break;
//         }
//     }
// }

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//  int arr[7]={1,2,3,4,5,6,7};
//  int k=2;
//  int sum=1;
//  for(int i=0;i<k;i++){
//   sum*=arr[i];
//  }
//  int i=1;
//  int j=k;
//  int ans=INT_MIN;
//  while(j<7){
//     sum=sum*arr[j]/arr[i-1];
//     ans=max(ans,sum);
//     i++;
//     j++;
//  }
//  cout<<ans;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int arr[9]={2,-3,4,4,-7,-1,4,-2,6};
//     int k=3;  
//     vector<int>v;
//     for(int i=0;i<9-k+1;i++){
//            for(int j=i;j<i+k;j++){
//             if(arr[j]<0){
//                 v.push_back(arr[j]);
//                 break;           
//             }
//         }
//       }
//       for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//       }
// }

// #include<iostream>
// #include<climits>
// using namespace std;
// int mx=INT_MIN;
// class Node{
//     public:
//     int val;
//     Node* right;
//     Node* left;
//     Node(int val){
//      this->val=val;
//      this->right=NULL;
//      this->left=NULL;
//     }
// };
// void display(Node* a){
//     if(a==NULL) return;
//     cout<<a->val<<" ";
//     display(a->left);
    
//     display(a->right);

// }
// int  levels(Node* a){
//     if(a==NULL) return 0;
//     return 1+max(levels(a->left),levels(a->right));
// }

// int sum(Node* a){
//     if(a==NULL) return 0;
//     return a->val+ sum(a->left) + sum(a->right);
// }
// int product(Node* a){
//     if(a==NULL) return 1;
//     return a->val*product(a->left)*product(a->right);
// }
// int height(Node* a){
//     return levels(a)-1;
// }
// int Max(Node* a){
//     if(a==NULL) return INT_MIN;
//   return max(a->val,max(Max(a->left),Max(a->right)));
// }
// int Min(Node* a){
//     if(a==NULL) return INT_MAX;
//   return min(a->val,min(Min(a->left),Min(a->right)));
// }
// int main(){
// Node* a=new Node(1);
//     Node* b=new Node(2);
//     Node* c=new Node(3);
//     Node* d=new Node(4);
//     Node* e=new Node(5);
//     Node* f=new Node(6);
//     Node* g=new Node(7);
    
//     a->left=b;
//     a->right=c;
//     b->left=d;
//     b->right=e;
//     c->left=f;
//     c->right=g;

//     display(a);
//   cout<<endl;
//   cout<<levels(a)<<endl;
//   cout<<sum(a)<<endl;
//   cout<<product(a)<<endl;
//   cout<<height(a)<<endl;
//   cout<<Max(a)<<endl;
// }

// #include<iostream>
// using namespace std;
// class book{
// public:
// string name;
// int price;
// int pages;


// };
// int main(){

// }


// #include<iostream>
// using namespace std;
// class cricketer{
//     public:
//     string name;
//     int age;
//     int matches;
//     float avg;
//  cricketer(){};

//   void input(){
//     cout<<"enter name:";
//     cin>>name;
//     cout<<"enter age:";
//     cin>>age;
//     cout<<"enter matches:";
//     cin>>matches;
//     cout<<"avg:";
//     cin>>avg;
//   }

//     void display(){
//         cout<<name<<" "<<age<<" "<<matches<<" "<<avg<<endl;
//     }
// };
// int main(){
//  cricketer arr[5];
//   for(int i=0;i<5;i++){
//    arr[i].input();
//   }

//   for(int i=0;i<5;i++){
//     arr[i].display();
//   }

// }

// #include<iostream>
// using namespace std;
// int main(){
//   cout<<"hello world"<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//   cout<<"hello world";
// }


// Design a class Triangle with private attributes: base and height. 
// Implement a public function compareArea(Triangle &t1, Triangle 
// &t2) that compares the areas of two triangles passed as arguments 
// and returns the triangle with the larger area. 

// #include<iostream>
// using namespace std;
// class Triangle{
//   private:
//   int base;
//   int height;

//   public:

//   Triangle(int height,int base){
//     this->height=height;
//     this->base=base;
//   }
//     float area(){
//     return 0.5*base*height;
//     }

//     static void compareArea(Triangle &t1, Triangle &t2){
//     t1.area()>t2.area() ? cout<<"t1 has greater area" : cout<<"t2 has greater area";
//     }
// };
// int main(){
// Triangle* t1=new Triangle(3,2);
// Triangle* t2=new Triangle(4,2);

// Triangle::compareArea(*t1,*t2);

// }

// Design a C++ program with a variable named int count that tracks 
// both the number of items and the number of customers in the same 
// program. Initialize the count variable with no. of items=20 and no. 
// of customers=12, respectively. In main (), display the no. of items 
// only. Ensure that the solution does not use classes and:: operator.

// #include<iostream>
// using namespace std;
// class shop{
//   public:
//   int customers;
//   int items;
//   static int count;
  

// };
// int main(){

// }


// Design a Car class with private attributes, speed, and fuel, and 
// implement a constructor that uses this pointer to initialize these 
// attributes. Develop all the necessary methods required to display 
// the details.
// #include<iostream>
// using namespace std;
// class car{
//   private:
//   double speed;
//   double fuel;

//   public:

//   car(double speed,double fuel){
//     this->speed=speed;
//     this->fuel=fuel;
//   }

//   void display(){
//     cout<<"speed="<<speed<<endl<<"fuel="<<fuel<<endl;
//   }
// };
// int main(){
// car* A=new car(23.4,20.6);
// A->display();//by using pointers use arrow
// }



// Design a class Book with the following:
// Private data members: title (string), author (string).
// A static int count variable to keep track of how many Book objects have been created.
// A constructor that initializes the title and author, and increments the count.
// A destructor that decrements the count when an object is destroyed.
// A static function getCount() that returns the current number of active Book objects.


// Creates multiple Book objects inside different scopes.
// Displays the number of active books using getCount() after each scope.

// #include<iostream>
// using namespace std;
// class book{
//   private:
//   string title;
//   string author;
//   static int count;
//   public:
//   book(string title,string author){
//     this->author=author;
//     this->title=title;
//     count++;
//   }
//   static int getcount(){
//     return count;
//   }

//   ~book(){
//     cout<<"destruct";
//     count--;
//   }
// };
// int book::count=0;
// int main(){

// }


// Private data members: name (string), salary (float).
// A static int employeeCount to keep track of how many employees are currently working (objects alive).
// A constructor that sets name and salary, and increments employeeCount.
// A destructor that decrements employeeCount when an employee object is destroyed.
// A static function getEmployeeCount() that returns the number of employees currently active.
// A member function display() to show details of an employee.

// Creates a few employees inside a scope.
// Prints the total number of employees after each creation.
// Deletes some employees (if dynamically created) and shows how employeeCount changes.

// '#include<iostream>
// using namespace std;
// class employee{
// private:
// string name;
// float salary;
// static int count;
 
// public:
// employee(string name,float salary){
//   this->salary=salary;
//   this->name=name;
//   count++;
// }
// ~employee(){
//   cout<<"destructor\n";
//   count--;
// }
// };
// int employee::count=0;
// int main(){

// }
// '

//Implement the class with four private integer data members and public: 
//showdata() function for the below main() code snippet. 

// #include<iostream>
// using namespace std;
// class Number{
//   private:
//  int a,b,c,d;
 
//  public:
//  Number(){
//   a=b=c=d=0;
//  }
// Number(int x,int y){
//   a=x;
//   b=y;
//   c=d=0;
// }

// Number(int x,int y,int z,int k){
//   a=x;
//   b=y;
//   c=z;
//   d=k;
// }
//  void showdata(){
//   cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
//  }
// };
// int main(){
// Number n1;
// Number n2(10,20);
// Number n3(30,40,50,60);
// Number n4(n2);
// Number n5=n1;

// n1.showdata();
// n2.showdata();
// n3.showdata();
// n4.showdata();
// n5.showdata();

// }


//Design a C++ program to demonstrate multilevel inheritance using the 
// following classes: Class Company (Base Class) with attributes: 
// company_name and location. Class Team (Intermediate Class): Inherits 
// 2 
// from Company and adds attributes: team_name and project. Class 
// Developer (Derived Class): Inherits from Team and adds attributes: 
// developer_name and programming_language. Use a parameterized 
// constructors to initialize all the class attributes. Create an object of 
// Developer, and display details from all the classes: Company, Team, and 
// Developer.
// #include<iostream>
// using namespace std;
// class 
// int main(){

// }

// #include<iostream>
// using namespace std;
// class company{
//     public:
//     string company_name,location;
// };
// class team:public company{
//     public:
//     string team_name,project;
// };
// class developer:public team{
//     public:
//     string dev_name,language;

// developer(string company_name,string location,string team_name,string project,string dev_name,string language){
//     this->company_name=company_name;
//     this->team_name=team_name;
//     this->dev_name=dev_name;
//     this->location=location;
//     this->project=project;
//     this->language=language;
// }
// void display(){
//     cout<<"company_name:"<<company_name<<endl;
//     cout<<"team_name:"<<team_name<<endl;
//     cout<<"dev_name:"<<dev_name<<endl;
//     cout<<"location:"<<location<<endl;
//     cout<<"language:"<<language<<endl;
//     cout<<"project:"<<project<<endl;
// }
// };
// int main(){
// developer a("google","india","illuminati","error404","modi","rust");
// a.display();
// }


// Develop a Donation Management System in C++ that efficiently manages 
// the transfer of donations between accounts utilizing classes. The system 
// consists of the following components: Donor Class contains private data 
// members: string donor_name, double balance. Write the following 
// functions in public section: 
//  set_details(string name, double amount) 
//  display() 
//  double get_balance() 
// Recipient Class contains the private data member: string recipient_name, 
// double account_balance, double amount_required needed by the recipient 
// and the following functions in public section: 
//  set_details(string name, double balance, double amount) 
//  display() 
//   
// 5 
// CO2 L4 
// double get_balance()  
// Additionally, the program includes the following function: 
// transfer (Donor &donor, Recipient &recipient, double 
// amount) 
// This function facilitates the transfer of funds between a donor and a 
// recipient. This function will verify whether the donor has sufficient funds 
// for the transfer. If the donor has adequate funds, both the donor's and 
// recipient's balances will be updated accordingly. Complete the program 
// using the above-mentioned conditions. 

// #include<iostream>
// using namespace std;
// class Donor{
//     private:
//     string donor_name;
//     double balance;

//     public:
//     void set_setails(string donor_name,double balance){
//        this->donor_name=donor_name;
//        this->balance=balance;
//     }
//     void display(){
//         cout<<"donor name is "<<donor_name<<endl;
//         cout<<"donor balance is "<<balance<<endl<<endl;
//     }
//     double get_balance(){
//         return balance;
//     }
// };

// class Recepient{
//     private:
//     string recepient_name;
//     double acc_balance,amount_required;

//     public:

//     void set_setails(string recepient,double acc_balance,double amount_required){
//        this->recepient_name=recepient_name;
//        this->acc_balance=acc_balance;
//        this->amount_required=amount_required;
//     }

//     void display(){
//         cout<<"receipent name is "<<recepient_name<<endl;
//         cout<<"receipent balance is "<<acc_balance<<endl;
//         cout<<"amount required is "<<amount_required<<endl<<endl;
//     }
//     double get_balance(){
//         return acc_balance;
//     }
// };

// int main(){

// }

// #include<iostream>
// using namespace std;
// class Demo{
//     public:
//     int val;

//     Demo(int val){
//         this->val=val;
//     }
// };
// int main () { 
//  Demo d1(10); Demo d2(20); 
//  if(d1==d2) 
//      cout<<"both are equal"<<endl; 
//  else 
//          cout<<"not equal"<<endl;  
//  if(d1<d2) 
//          cout<<"d1 is less than d2"<<endl; 
//  else 
//          cout<<"d2 is less than d1"<<endl; }


// #include<iostream>
// using namespace std;
// class Triangle{
//     private:
//     double base,height;
//     public:
// Triangle(double base,double height){
//     this->base=base;
//     this->height=height;
// }
//     double area(){
//         return base*height*0.5;
//     }
// };
//   void compareArea(Triangle &t1,Triangle &t2){
//      if(t1.area()>=t2.area()){
//         cout<<"t1 has greater area : "<<t1.area();
//      }
//      else cout<<"t2 has greater area : "<<t2.area();
     
//     }

// int main(){
//   Triangle t1(3,2),t2(4,5);
//   compareArea(t1,t2);
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72, 91};
// int n = sizeof(arr) / sizeof(arr[0]);

// int lo=0;
// int hi=n-1;
 
// while(lo<=hi){
//     int mid=(lo+hi)/2;
//     if(arr[mid]==56){
//         cout<<"found";
//         break;
//     }
//     else if(arr[mid]<58){
//         lo=mid+1;
//     }
//     else hi=mid-1;
// }
// }


// #include<iostream>
// #include<queue>
// #include<climits>
// #include<algorithm>
// using namespace std;
// int main(){
// int arr[] = {42, 7, 19, 3, 56, 12, 8, 33, 25};
// int n = sizeof(arr) / sizeof(arr[0]);

// int j=0;
// while(j<n-1){
//     int Min=INT_MAX;
//     int k=j;

//     for(int i=j+1;i<n;i++){
//         if(Min>=arr[i]){
//          Min=arr[i];
//          k=i;
//         }
//     }
//     swap(arr[k],arr[j]);
//     j++;
// }
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// }

// #include<iostream>
// #include<queue>
// #include<climits>
// #include<algorithm>
// using namespace std;
// int main(){
// int arr[] = {42, 7, 19, 3, 56, 12, 8, 33, 25};
// int n = sizeof(arr) / sizeof(arr[0]);

// for(int i=1;i<n;i++){
//     int j=i;
//     while(j>=1){
//         if(arr[j]>=arr[j-1]) break;
//         else{
//             swap(arr[j],arr[j-1]);
//             j--;
//         }
//     }
// }
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// }


// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
// queue<int>q;
// q.push(10);
// q.push(20);
// q.push(30);
// q.push(40);
// q.push(50);

// cout<<q.front()<<endl;
// cout<<q.back()<<endl;

// int n=q.size();
// int help=n;
// for(int i=0;i<n;i++){
//     if(i%2==0){
//         int x=q.front();
//         q.pop();
//         q.push(x);
//     }
//     else{
//         q.pop();
//     help--;}
// }
// for(int i=0;i<help;i++){
//     int x=q.front();
//     cout<<x<<" ";
//     q.pop();
//     q.push(x);
// }
// }

// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node* next;

//     Node(){};
//     Node(int val) {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void display(Node* head) {
//     while (head) {
//         cout << head->val << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// int main() {
//     Node* head = new Node(2);
//     Node* b = new Node(3);
//     Node* c = new Node(3);
//     Node* d = new Node(4);
//     Node* e = new Node(4);

//     head->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;

//     cout << "Original List: ";
//     display(head);

//     Node* tempA=head;
//     Node* tempB=head->next;

//     while(tempB!=NULL){
//         if(tempA->val==tempB->val){
//             tempA->next=tempB->next;
//             tempB=tempB->next;
             
//         }
//         else{
//             tempA=tempA->next;
//             tempB=tempB->next;
//         }
//     }

//     cout << "List after removing duplicates: ";
//     display(head);

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"hello world";
// }

// #include<iostream>
// #include<algorithm>
// #include<climits>
// using namespace std;
// class node{
//     public:
//     int val;
//     node* left;
//     node* right;

//     node(){};

//     node(int val){
//         this->val=val;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };

// void display(node* root){
// if(root==NULL) return ;
// cout<<root->val<<" ";
// display(root->left);
// display(root->right);
// }

// int maxi(node* root){
//     if(root==NULL) return 0;
//     return max(root->val,max(maxi(root->left),maxi(root->right)));
// }

// int size(node* root){
//     if(root==nullptr) return 0;
//     return 1 + size(root->left) + size(root->right);
// }

// int levels(node* root){
//     if(root==NULL) return 0;
//     return 1+ max(levels(root->left),levels(root->right));
// }

// int height(node* root){
//     return levels(root)-1;
// } 

// int sum(node* root){
//     if(root==NULL) return 0;
//     return root->val+ sum(root->left)+sum(root->right);
// }

// int product(node* root){
//     if(root==nullptr) return 1;
//     return root->val * product(root->left) * product(root->right);
// }

// int main(){
// node* a=new node(1);
// node* b=new node(2);
// node* c=new node(3);
// node* d=new node(4);
// node* e=new node(5);
// node* f=new node(6);
// node* g=new node(7);

// a->left=b;
// a->right=c;
// b->left=d;
// b->right=e;
// c->left=f;
// c->right=g;

// display(a);
// cout<<endl;
// cout<<maxi(a);
// cout<<endl;
// cout<<size(a);
// cout<<endl;
// cout<<levels(a);
// cout<<endl;
// cout<<height(a);
// cout<<endl;
// cout<<sum(a);
// cout<<endl;
// cout<<product(a);
// cout<<endl;




// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=123454321;
//     string s=to_string(n);
//     int i=0,j=s.size()-1;
//     bool flag=true;
//     while(i<j){
//         if(s[i]!=s[j]){
//             flag=false;
//             break;
//         }
//         i++;
//         j--;
//     }
//     cout<<flag;
// }

// #include<iostream>
// using namespace std;
// void print(int arr[],int n){
//     for(int i=0;i<n;i++){
//       cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//   int n=sizeof(arr)/sizeof(arr[0]);
//   print(arr,n);

// //   reverse

// int i=0;
// int j=n-1;
// while(i<j){
//     swap(arr[i],arr[j]);
//     i++;
//     j--;
// }
// print(arr,n);
// }

// #include <iostream>
// #include <queue>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node *left, *right;
//     Node(int val) {
//         data = val;
//         left = right = NULL;
//     }
// };

// class BinaryTree {
// public:
//     Node* root;
//     BinaryTree() { root = NULL; }

//     void createSample() {
//         root = new Node(1);
//         root->left = new Node(3);
//         root->right = new Node(5);
//         root->left->left = new Node(7);
//         root->left->right = new Node(11);
//         root->right->right = new Node(17);
//     }

//     int height(Node* node) {
//         if (node == NULL)
//             return 0;
//         int lh = height(node->left);
//         int rh = height(node->right);
//         return (lh > rh ? lh : rh) + 1;
//     }

//     void printLevel(Node* node, int level) {
//         if (node == NULL)
//             return;
//         if (level == 1)
//             cout << node->data << " ";
//         else {
//             printLevel(node->left, level - 1);
//             printLevel(node->right, level - 1);
//         }
//     }

//     void reverseLevelOrder(Node* root) {
//         int h = height(root);
//         cout << "Reverse Level Order (level-wise):" << endl;
//         for (int i = h; i >= 1; i--) {
//             printLevel(root, i);
//             cout << endl;
//         }
//     }
// };

// int main() {
//     BinaryTree bt;
//     bt.createSample();
//     bt.reverseLevelOrder(bt.root);
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    
}