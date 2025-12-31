// #include<iostream>
// using namespace std;
// int main(){
//     float A,r;
//     cout<<"r=";
//     cin>>r;
//     A=3.1415*r*r;
//     cout<<A;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     float x=2.3;
//     cout<<x/2;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char ch='a';
//     cout<<int(ch);
// }

// #include<iostream>
// using namespace std;
// int main(){
//     float d=2/7.0;
//     cout<<d;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n=";
//     cin>>n;
//     if(n%2==0) cout<<"even";
//     else cout<<"odd";
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"n=";
//     cin>>n;
//     if(n%5==0) cout<<"the number is dvisible by 5";
//   else cout<<"the number is not divisible by 5";
// }

// #include<iostream>
// using namespace std;
// int main(){
// float n;
// cout<<"n=";
// cin>>n;
// if(n>=0) cout<<n;
// else cout<<-n;
// }

//: If cost price and selling price of an item is 
// input through the keyboard, write a program to 
// determine whether the seller has made profit or 
// incurred loss or no profit no loss. Also determine 
// how much profit he made or loss he incurred.

// #include<iostream>
// using namespace std;
// int main(){
//     int cp,sp;
//     cout<<"cost price=";
//     cin>>cp;
//     cout<<"selling price=";
//     cin>>sp;
//     if (sp>cp) cout<<"profit of "<<sp-cp<<" has occured";
//    else if(sp=cp) cout<<" no profit no loss";
//     else if(sp<cp) cout<<"loss of"<<cp-sp<<"has occured";

// }


//Given the length and breadth of a rectangle, 
// write a program to find whether the area of the 
// rectangle is greater than its perimeter.


// #include<iostream>
// using namespace std;
// int main(){
// int l,b,P,A;
// cout<<"l=";
// cin>>l;
// cout<<"b=";
// cin>>b;
// A=l*b;
// P=2*(l+b);
// if(A>P) cout<<"area of rectangle is greater than it's perimeter";
// else if(A<P) cout<<"perimeter of rectangle is greater than it's area";
// else if (A=P) cout<<"area of rectangle is greater than it's area";
// }

// #include<iostream>
// using  namespace std;
// int main(){
// int n;
// cout<<"n=";
// cin>>n;
// if(n>99 && n<1000) cout<<"it is a three digit number";
// else cout<<"it is not a three digit number";
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n,p;
//     cout<<"n=";
//     cin>>n;
//     p=0;
//     for(int i=1;n>0;i++){
//         n%10;
//         p+=1;
//         n/=10;
//     }
//     if(p==3) cout<<"it is a three digit number";
//     else cout<<"it is not a three digit number";

// }

// #include<iostream>
// using namespace std;
// int main(){
// int a,b,c;
// cout<<"a=";
// cin>>a;
// cout<<"b=";
// cin>>b;
// cout<<"c=";
// cin>>c;
// if(a+b>c && b+c>a && a+c>b) cout<<"triangle can be formed";
// else cout<<"triangle cannot be formed";
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"a=";
//     cin>>a;
//     cout<<"b=";
//     cin>>b;
//     cout<<"c=";
//     cin>>c;
//     if(a>b && a>c) cout<<"a is greatest";
//     else if(b>a && b>c) cout<<"b is greatest";
//     else if(c>a && c>b) cout<<"c is greatest";
// }

//: Given a point (x, y), write a program to find 
// out if it lies in the 1st Quadrant, 2nd Quadrant, 3rd 
// Quadrant, 4th Quadrant, on the x-axis, y-axis or at 
// the origin, viz. (0, 0).

// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cout<<"x=";
//     cin>>x;
//     cout<<"y=";
//     cin>>y;
//     if(x>0 && y>0) cout<<"it lies in 1st quadrant";
//     else if(x<0 && y<0 ) cout<<"it lies in 3rd quadrant";
//     else if(x>0 && y<0) cout<<"it lies in 4th quadrant";
//     else if (x<0 && y>0) cout<<"it lies in 2nd quadrant";
// }

//Write a program (WAP) to display "Hello World" on console display

// #include<iostream>
// using namespace std;
// int main(){
//    cout<<"hello world";
// }

// #include<stdio.h>
// int main(){
//     printf("hello world");
//     return 0;

// }

//WAP to input an integer and display it.

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"n=";
// cin>>n;
// cout<<n;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("n=");
//     scanf("%d",&n);
//     printf("%d",n);
//     return 0;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"ch=";
//     cin>>ch;
//     cout<<ch;

// }

// #include<stdio.h>
// int main(){
//     char ch;
//     printf("ch=");
//     scanf("%c",&ch);
//     printf("%c",ch);
//     return 0;
// }

//WAP to input a fraction (rational number) and display. (Ask the user to 
// input numerator and denominator, then display it in the form of p/q 
// without simplification)

// #include<iostream>
// using namespace std;
// int main(){
//     int n,d;
//     cout<<"numerator=";
//     cin>>n;
//     cout<<"denominator=";
//     cin>>d;
//     cout<<n<<"/"<<d;
// }

// #include<stdio.h>
// int main(){
//     int n,d;
//     printf("numerator=");
//     scanf("%d",&n);
//     printf("denominator=");
//     scanf("%d",&d);
//     printf("%d/%d",n,d);
//     return 0;
// }

//WAP to add, subtract, multiply, divide numbers.

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("a=");
//     scanf("%d",&a);
//     printf("b=");
//     scanf("%d",&b);
//     printf("sum=%d\n",a+b);
//     printf("difference=%d\n",a-b);
//     printf("product=%d\n",a*b);
//     printf("division=%d\n",a/b);

// }

//WAP for the area of a circle

// #include<stdio.h>
// int main(){
//     float A,r;
//     printf("radius=");
//     scanf("%f",&r);
//     A=3.14*r*r;
//     printf("%f",A);
//     return 0;
// }


//simple interest

// #include<stdio.h>
// int main(){
//     float p,r,t,si;
//     printf("p=");
//     scanf("%f",&p);
//     printf("r=");
//     scanf("%f",&r);
//     printf("t=");
//     scanf("%f",&t);
//     si=p*r*t/100;
//     printf("%f",si);
//     return 0;
// }

//*WAP to calculate gross salary of a person, where 
//gross_salary=basic+da+ta and da is 10% of basic and ta is 12% of basic

// #include<iostream>
// using namespace std;
// int main(){
//     float basic,da,ta,gross_salary,x,y;
//     cout<<"basic=";
//     cin>>basic;
//     cout<<"x=";
//     cin>>x;
//     da=(x/100)*basic;
//     cout<<"y=";
//     cin>>y;
//     ta=(y/100)*basic;
//     gross_salary=basic+da+ta;
//     cout<<gross_salary;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("n=");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         printf("%d",i);
//         printf(". hello world\n");
//     }

// }

// #include<stdio.h>
// int main(){
// float basic,gross_salary,x,y,da,ta;
// printf("basic=");
// scanf("%f",&basic);
// printf("x=");
// scanf("%f",&x);
// da=(x/100)*basic;
// printf("y=");
// scanf("%f",&y);
// ta=(y/100)*basic;
// gross_salary=basic+da+ta;
// printf("gross salary=%f",gross_salary);
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//       float a,n,nth_root;
//       printf("a=");
//       scanf("%f",&a);
//       printf("n=");
//       scanf("%f",&n);       
//       nth_root=pow(a,1/n);
//       printf("%f",nth_root);
//     return 0;
// }


// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
// int a,n,nth_root;
// cout<<"a=";
// cin>>a;
// cout<<"n=";
// cin>>n;
// cout<<pow(a,n);
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
//     float p,r,t,power,ci;
//     printf("p=");
//     scanf("%f",&p);
//     printf("r=");
//     scanf("%f",&r);
//     printf("t=");
//     scanf("%f",&t);
//     power=pow(1+(r/100),t);
//     ci=p*power;
//     printf("%f",ci);
//     return 0;
// }

//WAP to practice math functions such as sin(), cos(), log(), pow(), sqrt() etc. by 
//including <math.h> header file.

// #include<stdio.h>
// #include<math.h>
// int main(){
//     float n,a;
//     printf("%f",n);
//     scanf("%f",&n);
//     a=sin(n);
//     printf("%f",a);
//     return 0;
// }

//. WAP to find roots of a quadratic equation (for D>=0 case)

// #include<stdio.h>
// int main(){//ax2+bx+c=0,D,roots
//     float a,b,c,x,D,roots,eqn;
//     eqn=a*x*x+b*x+c;
//     a*x*x+b*x+c=0;

//     return 0;
// }

//WAP to implement assignment operators such as += , -= , *=, /= %= etc.

// #include<stdio.h>
// int main(){
//     int n;
//     printf("n=");
//     scanf("%d",&n);
//     n+=1;
//     printf("%d\n",n);
//     n-=1;
//     printf("%d\n",n);
//     n*=2;
//     printf("%d\n",n);
//     n/=2;
//     printf("%d\n",n);
//     n%=2;
//     printf("%d\n",n);
    
//     return 0;
// }

//Assignment operator assigns right hand side value to left hand side variable. 
//Use this idea to interchange (swap) values of two variables.

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("a=");
//     scanf("%d",&a);
//     printf("b=");
//     scanf("%d",&b);
//     c=a;
//     a=b;
//     b=c;
//     printf("%d %d",a,b);
//     return 0;
// }

//. WAP to utilize ternary operator

// #include<stdio.h>
// int main(){
// int n;
// printf("n=");
// scanf("%d",&n);
// n%2==0 ? printf("even") : printf("odd");
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char  x;
//     printf("the size  of the given datatype is %zu",sizeof(x));
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     char x;
//     cout<<sizeof(x);
// }

// #include<iostream>
// using namespace std;
// int main(){
// int sum,n;
// double mean;
// cout<<"sum=";
// cin>>sum;
// cout<<"n=";
// cin>>n;
// mean=(double)sum/n;
// cout<<mean;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n,a;
//     cout<<"n=";
//     cin>>n;
//     a=1;
//     for(int i=1;i<=n;i++){
     
//     cout<<a<<endl;
//     a*=2;
//     }
    
// }

// #include<stdio.h>
// int main(){
//     int n,a;
//     printf("n=");
//     scanf("%d",&n);
//     a=1;
//     for(int i=1;i<=n;i++){
//         printf("%d\n",a);
//         a*=2;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n,a;
//     cout<<"n=";
//     cin>>n;
//     for(int i=2;i<n;i++){
//         if(n%i!=0) cout<<"prime";
        
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n,fact;
//     cout<<"n=";
//     cin>>n;
//     fact=1;
//     for(int i=1;n>0;i++){
    
//     fact*=i;
//     cout<<fact<<endl;
//     n--;

//     }
//}

// #include<stdio.h>
// int main(){
//     int arr[5];
//     for(int i=0;i<5;i++){
//         scanf("%d",&arr[i]);
//     }
//    for(int i=4;i>=0;i--){
//     printf("%d ",arr[i]);
//    }
//     return 0;

// }

// #include<stdio.h>
// int main(){
//     int marks[10]={52,45,26,3,89,58,72,41,45,32};
//     for(int i=0;i<=9;i++){
//         if(marks[i]<35) printf("%d ",i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
// int x[7]={1,2,3,4,5,6,7};
// printf("%p\n",&x[0]);
// printf("%p\n",&x[1]);
// printf("%p\n",&x[2]);
// printf("%p\n",&x[3]);
// printf("%p\n",&x[4]);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int sum,x[5]={1,2,3,4,5};
//     sum=0;
//      for(int i=0;i<=4;i++){
//      sum+=x[i];
//      }
//      printf("%d",sum);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int x[7]={1,2,3,4,5,6,7};
//     int max=x[0];
//     for(int i=0;i<7;i++){
//         if(max<x[i]){
//             max=x[i];
//         }

//     }
//     printf("%d",max);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int x[7]={1,2,3,4,5,6,7};
//     int max=x[0];
//     for(int i=0;i<7;i++){
//         if(max>x[i]){
//             max=x[i];
//         }

//     }
//     printf("%d",max);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     for(int i=0;i<=4;i++){
//         if(arr[i]%2==0) {
//             arr[i]*=2;

//         }
//         else arr[i]+=10;
//     }
//     for(int i=0;i<=4;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int even,odd,arr[6]={1,2,3,4,5,6};
//     even=0;
//     odd=0;
//     for(int i=0;i<=5;i++){
//         if(arr[i]%2==0){
//      even+=arr[i];
//         }
//     }
//     for(int i=0;i<=5;i++){
//      if(arr[i]%2!=0) {
//         odd+=arr[i];
//      }
//     }
//     printf("difference between sum of even and odd elements=");
//     printf(" %d",even-odd);
//     return 0;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int  n;
//     cout<<"n=";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;

//         }
//         cout<<endl;
//     }
// }

// #include<stdio.h>
// int main(){
//     int max,smax, n[7]={1,2,3,4,5,6,7};
//       max=n[0];
//    for(int i=0;i<=6;i++){
  
//      if(max<n[i]){
//         max=n[i];
//      }

//    }
//    smax=n[0];
//   for(int i=0;i<=6;i++){
    
//     if(smax<n[i] && n[i]!=max){
//         smax=n[i];
//     }

//   }
//   printf("%d",smax);
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
  //Hatsa La Vista
  int n;
  char arr[n]={'Hasta La Vista'};
  n=sizeof(arr[n])/sizeof(arr[0]);
  for(int i=0;i<=n-1;i++){
    if(int(arr[i])>=65 && arr[i]<=90){
    arr[i]=char(arr[i]+32);}
    else if(int(arr[i])>=97 && arr[i]<=123){
   arr[i]=char(arr[i]-32);}
   else {arr[i]=arr[i];}
    }
    cout<<arr[n];
  }
  


