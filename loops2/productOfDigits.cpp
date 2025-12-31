#include<iostream>
using namespace std;
 int  main (){
    int i,n,product,lastdigit;
     cout<<"n=";
     cin>>n;
     lastdigit=0;
     product=1;
     while(n>0){
        lastdigit=n%10;
        product*=lastdigit;
        n/=10;
        
     }
     cout<<product;
 }

// #include<iostream>
// using namespace std;

// int main() {
//     int n, product, lastdigit;
//     cout << "n = ";
//     cin >> n;
//     product = 1;  // Initialize product to 1
    
//     while(n > 0) {
//         lastdigit = n % 10;  // Get the last digit
//         product *= lastdigit; // Multiply the last digit to the product
//         n /= 10;  // Remove the last digit from n
//     }
    
//     cout << "Product of digits = " << product << endl;
//     return 0;
// }
