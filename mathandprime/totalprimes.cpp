// #include<iostream>
// #include<cmath>
// using namespace std;
// bool prime(int n){
//     if(n==0) return false;
//     //if(n<2) return false;
//     for(int i=2;i<=sqrt(n);i++){
        
//         if(n%i!=0) return true;
//     }

// }
// int main(){
// int n=20;
// int sum=1;
// for(int i=2;i<n;i++){
//     if(prime(i)){
//         sum+=1;
//     }
// }
// cout<<sum;
// }

#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n) {
    if (n < 2) return false; // Prime numbers start from 2
    for (int i = 2; i <= sqrt(n); i++) { // Proper loop condition
        if (n % i == 0) return false; // Return false if divisible
    }
    return true; // Return true if no divisor found
}

int main() {
    int n = 20;
    int sum = 0; // Initialize sum to 0

    for (int i = 2; i < n; i++) {
        if (prime(i)) {
            sum++; // Increment sum when a prime is found
        }
    }

    cout << sum;
}
