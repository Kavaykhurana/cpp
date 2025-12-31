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
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int product=1;
//     for(int i=0;i<10;i++){
//         product*=arr[i];
//     }
//     cout<<product;

// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void displayArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void vectorDisplay(vector<int>v){
//      for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//      }
//      cout<<endl;
// }

// int main(){
// vector<int>v;
// v.push_back(10);
// v.push_back(20);
// v.push_back(30);
// v.push_back(40);
// vectorDisplay(v);
// reverse(v.begin(),v.end());
// vectorDisplay(v);

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[8]={1,3,2,4,3,4,1,6};
//     int target=7;
//     for(int i=0;i<7;i++){
//         for(int j=i+1;j<8;j++){
//             if(arr[i]+arr[j]==target){
//                 cout<<"("<<i<<","<<j<<")"<<" "<<endl;
//             }
            
//         }
//     }
    
// }

// #include<iostream>
// using namespace std;
// void display(int arr[],int n){
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// }
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int i=0;
//     int j=9;
//     while(i<=j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
//     display(arr,10);
// }

// #include<iostream>
// using namespace std;
// void display(int a[],int n){
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[10]={1,1,1,1,0,0,1,1,0,0};
//     int noz=0;
//     int noo=0;
//     for(int i=0;i<10;i++){
//         if(arr[i]==0){
//             noz++;
//         }
//         else noo++;
//     }
//     for(int i=0;i<noz;i++){
//      arr[i]=0;
//     }
//     for(int i=noz;i<10;i++){
//    arr[i]=1;
//     }
//     display(arr,10);
// }


// #include<iostream>
// using namespace std;
// int main(){
//     string p="bfdsbibub";
//     cout<<p.size();
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string c=to_string(20);
//     cout<<c;                                    
// }



// #include<iostream>
// using namespace std;;
// int main(){
//     cout<<"hello world";
// }


// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==0) return 1;
//     return n*fact(n-1);
// }
// int main(){
// cout<<fact(5);
// }

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
//       print(n-1);
// }
// int main(){
// print(10);
// }


// #include<iostream>
// using namespace std;
// int fibonacci(int n){
//     if(n==1 || n==2) return 1;
//      return (fibonacci(n-1) + fibonacci(n-2));
// }
// int main(){
// cout<<fibonacci(6);
// }

// #include<iostream>
// using namespace std;
// int power(int a,int b){
//     if(b==0) return 1;
//     return a*power(a,b-1);
// }
// int main(){
// cout<<power(2,24);

// }

// #include<iostream>
// using namespace std;
// int hcf(int a,int b){
//     int gcp=1;
//     for(int i=2;i<=min(a,b);i++){
//         if(a%i==0 && b%i==0){
//          gcp=i;
//         }
//     }
//     return gcp;
// }
// int main(){
// cout<<hcf(20,28);
// }

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,0};
//     int max=INT_MIN,min=INT_MAX;
//     for(int i=0;i<10;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     cout<<min<<" "<<max;
// }

// #include<iostream>
// using namespace std;
// void display(int arr[],int n){
//     for(int i=0;i<n;i++){
//   cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,0};
//     int i=0;
//     int j=9;
//     display(arr,10);
//     while(i<=j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
//     display(arr,10);

// }

// #include<iostream>
// using namespace std;
// bool SortedOrNot(int arr[],int n){
//     bool flag=true;
//     for(int i=0;i<n-1;i++){
//         if(arr[i] > arr[i+1]){
//       flag=false;
//         }
//     }
//     cout<<flag;
// }
// int main(){
//     int arr[10]={1,2,4,3,5,6,7,8,9,0};
//     SortedOrNot(arr,10);
  
//     }


// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
// int arr[3][3]={1,2,3,4,5,6,7,8,9};
// int max=INT_MIN;
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         if(max<arr[i][j]){
//             max=arr[i][j];
//         }
//     }
// }
// cout<<max;
// }


// #include<iostream>
// #include<climits>
// using namespace std;
// void print(int arr[3][3]){
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
// int arr[3][3]={1,2,3,4,5,6,7,8,9};
// print(arr);

// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         if(i<j){
//      swap(arr[i][j],arr[j][i]);
//     }}
// }
// cout<<endl;
// print(arr);

// for(int i=0;i<3;i++){
//    swap(arr[i][0],arr[i][2]);
// }

// cout<<endl;
// print(arr);

// }


// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"hello";
// }


// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"hello workd";
// }


// #include<iostream>
// using namespace std;
// int main(){
// int arr[10]={1,2,3,4,5,6,7,8,9,0};
// int target=7;
// int lo=0;
// int hi=9;
// int mid;

// while(lo<=hi){
//     mid=(lo+hi)/2;
//     if(arr[mid]==target){
//         cout<<"element present at index:"<<mid;
//         break;}

//     else if(arr[mid]<target){
//         lo=mid+1;
//     }
//     else hi=mid-1;
// }
// }

//bubble sort
// #include<iostream>
// using namespace std;
// int main(){
// int arr[10]={1,3,2,4,5,7,65,787,45,0};
// for(int i=0;i<9;i++){
//     for(int j=i+1;j<10;j++){
//         if(arr[i]>arr[j]){
//             swap(arr[i],arr[j]);
//         }
//     }
// }
// for(int i=0;i<10;i++){
//     cout<<arr[i]<<" ";
// }
// }


// #include<iostream>
// using namespace std;
// int binary(int arr[],int n,int lo,int hi,int target){
//     int idx;
//     int mid=(lo+hi)/2;
//     if(lo<=hi){
//     if(arr[mid]==target) return mid;
//     else if(arr[mid]>target) return binary(arr,n,lo,mid-1,target);
//     else if(arr[mid]<target) return binary(arr,n,mid+1,hi,target);}

//     return -1;


// }
// int main(){
//     int arr[]={1,2,3,3,4,4,4,5};
//     int target=4;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<binary(arr,n,0,n-1,4);
// }

// #include<iostream>
// using namespace std;
// class student{
//     public:
//     string name;
//     int rno;
//     float gpa;
 
//     student(){};
//     student(string name,int rno,float gpa){
//         this->gpa=gpa;
//         this->name=name;
//         this->rno=rno;
//     }

//     void print(){
//         cout<<name<<" "<<rno<<" "<<gpa<<endl;
//     }

//     void setname(string name){
//     this->name=name;
//     }

//     string getname(){
//         return name;
//     }
// };
// void display(student s){
//         cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
//     }

// int main(){ 
// student s("jdf",32,7.8);
// s.print();
// student s1("sdbb",3,9.0);
// s1.print();

// student* x=new student("vvg",34,6.8);
// x->print();
// int p=9;
// int * ptr=new int(5);
// cout<<*ptr;

// x->setname("kjdshb");
// cout<<x->getname();

// }




// Design a class Triangle with private attributes: base and height. 
// Implement a public function compareArea(Triangle &t1, Triangle 
// &t2) that compares the areas of two triangles passed as arguments 
// and returns the triangle with the larger area.

// #include<iostream>
// using namespace std;
// class triangle{
//     private:
//     int base;
//     int height;

//     public:
//     // void setheight(int height){
//     //     this->height=height;
//     // }

//     // void setbase(int base){
//     //     this->base=base;
//     // }

//     // int getheight(){
//     //     return height;
//     // }
       
//     // int getbase(){
//     //    return base;
//     // }
//     float area(){
//       return 0.5*base*height;   
//     }

//   static float CompareArea(triangle &t1,triangle &t2){
//       return max(t1.area(),t2.area());
      
//    }
//    triangle(){};
//    triangle(float height,float base){
//     this->height=height;
//     this->base=base;
//    }
// };
// int main(){
// triangle t1(5,9);
// triangle t2(4,9);
// cout<<t1.area();
// cout<<CompareArea(&t1,&t2);
// }



// #include<iostream>
// using namespace std;
// class date{
//     public:
//     int date;
//     int month;
//     int year;

//     void setdate(int date){
//         this->date=date;}

//     void setmonth(int month){
//         this->month=month;}

//     void setyear(int year){
//         this->year=year;}

//     int getdate(){
//         return date;
//     }
//     int getmonth(){
//         return month;
//     }
//     int getyear(){
//         return year;
//     }

//     date int compare(date b){

//     }
// };
// int main(){

// }


// Design a C++ program with a variable named int count that tracks 
// both the number of items and the number of customers in the same 
// program. Initialize the count variable with no. of items=20 and no. 
// of customers=12, respectively. In main (), display the no. of items 
// only. Ensure that the solution does not use classes and:: operator. 

// #include<iostream>
// using namespace std;
// class {

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
//     private:
//     int speed;
//     float fuel;

//     public:
//     car(){};
//     car(int speed,float fuel){
//         this->speed=speed;
//         this->fuel=fuel;
//     }

//     void display(){
//         cout<<speed<<" "<<fuel<<endl;
//     }
// };
// int main(){
// car c1(120,35.6);
// car c2(150,50.60);
// c1.display();
// c2.display();
// }


// You are provided with the ShoppingCart class, as shown above. Write the 
// main() function for the given class. Your task is to: 
// Take input from the user for the number of shopping carts (n) and 
// dynamically create an array of n ShoppingCart objects. Initialize the objects 
// using the parameterized constructor by taking the input at run-time. Display 
// the details.

// #include<iostream>
// using namespace std;
// class ShoppingCart {
// private:
//     int cart_id;
//     string customer_name;
//     int item_count;

// public:
// ShoppingCart(){};
//     ShoppingCart(int id, string name, int count) {
//         cart_id = id;
//         customer_name = name;
//         item_count = count;
//     }

//     ~ShoppingCart() {
//         cout << "Thank you, " << customer_name << endl;
//     }

//     void display_cart() {
//         cout << "Cart ID: " << cart_id << endl;
//         cout << "Customer Name: " << customer_name << endl;
//         cout << "Number of Items in Cart: " << item_count << endl;
//     }
// };

// int main(){
//     int n;
//     cout<<"number of shopping carts:";
//     cin>>n;
//     ShoppingCart* arr=new ShoppingCart[n];
//     int id;
//     int count;
//     string name;
//     for(int i=0;i<n;i++){
//         cout<<"id:";
//         cin>>id;
//         cout<<"count:";
//         cin>>count;
//         cout<<"name:";
//         cin>>name;
//         arr[i]=ShoppingCart(id,name,count);
//     }

//     for(int i=0;i<n;i++){
//         arr[i].display_cart();
//     }
// }



// Develop a Donation Management System in C++ that efficiently manages 
// the transfer of donations between accounts utilizing classes. The system 
// consists of the following components: Donor Class contains private data 
// members: string donor_name, double balance. Write the following 
// functions in public section: 
//  set_details(string name, double amount) 
//  display() 
//  double get_balance() 
// Recipient Class contains the private data member: string recipient_name, 
// double account_balance, double amount_required needed by the recipient 
// and the following functions in public section: 
//  set_details(string name, double balance, double amount) 
//  display() 

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
// class donor{
//     private:
//     string donor_name;
//     double balance;

//     public:
//     void set_details(string name, double amount){
//         donor_name=name;
//         balance=amount;
//     } 

//     void display(){
//     cout<<"donor_name:"<<donor_name<<endl<<"balance:"<<balance<<endl;
// } 

//  double get_balance(){
//   return balance;
//  }
// };

// class recepient{
// private:
// string recipient_name; 
// double account_balance;
// double amount_required;

// public:
// void set_details(string name, double balance, double amount){
// recipient_name=name;
// amount_required=amount;
// account_balance=balance;
// }


//  void display(){
//     cout<<"recipient_name"<<recipient_name<<endl;
//     cout<<"account_balance"<<account_balance<<endl;
//     cout<<"amount_required"<<amount_required<<endl;
//  } 
 
// double get_balance(){
//   return account_balance;
// }

// //Additionally, the program includes the following function: 
// transfer (Donor &donor, Recipient &recipient, double amount){

// }
// };
// int main(){

// }





// #include <iostream>
// using namespace std;

// class Donor {
// private:
//     string donor_name;
//     double balance;

// public:
//     void set_details(string name, double amount) {
//         donor_name = name;
//         balance = amount;
//     }

//     void display() {
//         cout << "Donor Name: " << donor_name << endl
//              << "Balance: ₹" << balance << endl;
//     }

//     double get_balance() {
//         return balance;
//     }

//     void deduct_balance(double amount) {
//         balance -= amount;
//     }
// };

// class Recipient {
// private:
//     string recipient_name;
//     double account_balance;
//     double amount_required;

// public:
//     void set_details(string name, double balance, double amount) {
//         recipient_name = name;
//         account_balance = balance;
//         amount_required = amount;
//     }

//     void display() {
//         cout << "Recipient Name: " << recipient_name << endl;
//         cout << "Account Balance: ₹" << account_balance << endl;
//         cout << "Amount Required: ₹" << amount_required << endl;
//     }

//     double get_balance() {
//         return account_balance;
//     }

//     void add_balance(double amount) {
//         account_balance += amount;
//     }
// };

// // Transfer function
// void transfer(Donor &donor, Recipient &recipient, double amount) {
//     cout << "\nTransferring ₹" << amount << " from Donor to Recipient...\n";
//     if (donor.get_balance() >= amount) {
//         donor.deduct_balance(amount);
//         recipient.add_balance(amount);
//         cout << "Transfer successful!\n";
//     } else {
//         cout << "Transfer failed: Insufficient donor balance.\n";
//     }
// }

// int main() {
//     Donor d;
//     Recipient r;

//     d.set_details("Aman", 3000.0);
//     r.set_details("Smile Foundation", 1500.0, 5000.0);

//     cout << "\n--- Before Transfer ---\n";
//     d.display();
//     cout << endl;
//     r.display();

//     transfer(d, r, 2000.0);

//     cout << "\n--- After Transfer ---\n";
//     d.display();
//     cout << endl;
//     r.display();

//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,3,5,7,9};
//     int brr[5]={2,4,6,8,10};
//     int crr[10];
//     int i=0;
//     int j=0;
//    // int k=0;
//     for(int p=0;p<10;p++){
//         crr[p]=min(arr[i],brr[j]);
//         if(arr[i]>brr[j]){
//             j++;
//         }
//         else i++;
//     }

//     for(int i=0;i<10;i++){
//         cout<<crr[i]<<" ";
//     }
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// void display(vector<int>v){
//     for(int i=0;i<v.size();i++){
//   cout<<v[i]<<" ";
//     }
// }
// void merge(vector<int>&arr,vector<int>&brr,vector<int>&res){
//     int i=0,j=0,k=0;
//    while(i<arr.size() && j<brr.size()){
//     if(arr[i]<brr[j]){
//         res[k++]=arr[i++];
//     }
//     else res[k++]=brr[j++];
//     }
//     while (i < arr.size()) {
//         res[k++] = arr[i++];
//     }
//     while (j < brr.size()) {
//         res[k++] = brr[j++];
//     }
//     }

//     void mergesort(vector<int>&v){
        
//         int n=v.size();
//         if(n<=1) return ;
//         vector<int>v1(n/2),v2(n-n/2);
//         for(int i=0;i<v1.size();i++){
//             v1[i]=v[i];
//         }
//         for(int i=0;i<v2.size();i++){
//             v2[i]=v[i+v1.size()];
//         }
//         mergesort(v1);
//         mergesort(v2);
//         merge(v1,v2,v);
//     }
// int main(){
//     int arr[10]={1,32,53,5,4,44,35,36423,3542,5};
//     vector<int>v(arr,arr+10);
//    mergesort(v);
//    display(v);
// }



// Design a C++ program to demonstrate multilevel inheritance using the 
// following classes: Class Company (Base Class) with attributes:     company team developer class
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
// class company{//Class Company (Base Class) with attributes: company_name and location.
//     public:
//     string company_name;
//     string location;
   
//     company(string company_name,string location){
//         this->company_name=company_name;
//         this->location=location;
//     }

// };
// class team : public company{//Class Team (Intermediate Class): Inherits from Company and adds attributes: team_name and project. 
//     public:
//     string team_name;
//     string project;

//     team(string team_name,string project){
//         this->team_name=team_name;
//         this->project=project;
//     }

// };
// class developer: public team{ //Class Developer (Derived Class): Inherits from Team and adds attributes: developer_name and programming_language
// public:
// string developer_name;
// string programming_language;

// developer(string developer_name,string programming_language){
//     this->developer_name=developer_name;
//     this->programming_language=programming_language;
// }

// void display(){
//     cout<<"developer_name:"<<developer_name<<endl;
//     cout<<"programming_language"<<programming_language<<endl;
//     cout<<"team_name"<<team_name<<endl;
//     cout<<"project:"<<project<<endl;
//     cout<<"company_name:"<<company_name<<endl;
//     cout<<"location:"<<location<<endl;
// }

// };
// int main(){
// company a("mota","bangalore");
// team b("badmosh","badmoshi");
// developer c("badmoshu","cpp");
// c.display();
// }

// #include<iostream>
// using namespace std;

// class company {
// public:
//     string company_name;
//     string location;

//     company(string company_name, string location) {
//         this->company_name = company_name;
//         this->location = location;
//     }
// };

// class team : public company {
// public:
//     string team_name;
//     string project;

//     // Pass company args to base constructor
//     team(string company_name, string location, string team_name, string project)
//         : company(company_name, location) {
//         this->team_name = team_name;
//         this->project = project;
//     }
// };

// class developer : public team {
// public:
//     string developer_name;
//     string programming_language;

//     // Pass company & team args up the chain
//     developer(string company_name, string location, string team_name, string project,
//               string developer_name, string programming_language)
//         : team(company_name, location, team_name, project) {
//         this->developer_name = developer_name;
//         this->programming_language = programming_language;
//     }

//     void display() {
//         cout << "developer_name: " << developer_name << endl;
//         cout << "programming_language: " << programming_language << endl;
//         cout << "team_name: " << team_name << endl;
//         cout << "project: " << project << endl;
//         cout << "company_name: " << company_name << endl;
//         cout << "location: " << location << endl;
//     }
// };

// int main() {
//     developer d("Google", "Bangalore", "Cloud Team", "AI Platform", "Alice", "C++");
//     d.display();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// bool RecursiveBinarySearch(int arr[],int lo,int hi,int target){
//     if(lo>hi) return false;
//     int mid=(lo+hi)/2;
//     if(arr[mid]==target) return true;
//     else if(arr[mid]<target) return RecursiveBinarySearch(arr,mid+1,hi,target);
//     else if(arr[mid]>target) return RecursiveBinarySearch(arr,lo,mid-1,target);
//    else return false;


// }
// int main(){
//     int arr[]={2,5,6,7,8,9,10,15,16,18,19,20};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<RecursiveBinarySearch(arr,0,n-1,8);
// }

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val=val;
//         this->next=nullptr;
//     }
// };
// int print(Node* a){
//     Node*  temp=a;
//     int n=0;
//     while(temp!=NULL){
//   cout<<temp->val<<" ";
//   n++;
//   temp=temp->next;
//     }
//     cout<<endl;
//     return n;
// }
// int main(){
// Node* a=new Node(1);
// Node* b=new Node(2);
// Node* c=new Node(3);
// Node* d=new Node(4);
// Node* e=new Node(5);
// Node* f=new Node(6);
// Node* g=new Node(7);
// a->next=b;
// b->next=c;
// c->next=d;
// d->next=e;
// e->next=f;
// f->next=g;

// cout<< 
// print(a);
// cout<<endl;


// }

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"hello world";
// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// bool isprime(int n){
//     if(n<2) return false;
//     if(n==2) return true;
//     int i=2;
//     while(i<=sqrt(n)){
//       if(n%i==0) return false;
//       i++;
//     }
//     return true;
// }
// int main(){
// cout<<isprime(12347);
// }

// #include<iostream>
// #include<unordered_set>
// using namespace std;
// int main(){
// unordered_set<int>s;
// s.insert(1);
// s.insert(2);
// s.insert(3);
// s.insert(4);
// s.insert(5);
// s.erase(2);
// int target =10;
// if(s.find(target)!=s.end()){
//     cout<<"exists";
// }
// else cout<<"does not exist";
// }

// #include<iostream>
// #include<unordered_set>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v;
//     unordered_set<int>s;
// s.insert(1);
// s.insert(2);
// s.insert(3);
// s.insert(4);
// s.insert(5);
// for(auto x:s){
//     cout<<x<<" ";
// }
// cout<<endl;
// for(auto val:s){
//     v.push_back(val);
// }
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<int>v;
// v.push_back(10);
// v.push_back(0);
// v.push_back(1);

// for(auto i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// }

// #include<iostream>
// #include<vector>
// #include<map>
// using namespace std;
// int main(){
// map<int,int>m;
// vector<int> arr = {
//     12, 7, 29, 12, 3, 45, 7, 16, 3, 50,
//     18, 29, 45, 8, 23, 12, 3, 7, 0, 50,
//     9, 18, 3, 2, 33, 0, 16, 45, 50, 23,
//     7, 1, 9, 12, 16, 3, 29, 8, 50, 2,
//     14, 33, 0, 1, 12, 3, 7, 29, 18, 2,
//     23, 33, 8, 9, 0, 1, 16, 45, 2, 14,
//     7, 3, 8, 12, 29, 50, 23, 18, 33, 14,
//     0, 2, 1, 3, 9, 16, 29, 50, 14, 45,
//     7, 18, 23, 33, 8, 1, 0, 16, 9, 3,
//     50, 12, 45, 2, 14, 7, 8, 29, 23, 1
// };

// for(int i=0;i<arr.size();i++){
//     m[arr[i]]++;
// }

// for(auto x: m){
//     cout<<x.first<<" "<<x.second<<endl;  
// }
// }

// #include<iostream>
// using namespace std;
// int power(int a,int b){
//     if(b==0) return 1;
//     return a*power(a,b-1);
// }
// int main(){
//     int x=power(2,4);
//     cout<<x;
// }


// #include<iostream>
// using namespace std;
// int fact(int n){
//     if(n==0) return 1;
//     return n*fact(n-1);
// }
// int main(){
//     cout<<fact(5);
// }

// #include<iostream>
// using namespace std;
// int fibo(int n){
//     if(n==1 || n==2) return 1;
//     return fibo(n-1)+fibo(n-2);
// }
// int main(){
//     cout<<fibo(6);
// }

// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0) return;
//     print(n-1);
//     cout<<n<<" ";
  
// }
// int main(){
//     print(10);
// }

// #include<iostream>
// using namespace std;
// int sum(int n,int ans){
//    if(n==0) return ans;
//    ans+=n;
//    sum(n-1,ans);
// }
// int main(){
//    cout<<sum(10,0);
// }



// #include<iostream>
// using namespace std;
// int ans=0;
// int sum(int n){
//     if(n==0) return ans;
//     ans+=n;
//     sum(n-1);
// }
// int main(){
//     cout<<sum(10);
// }

// #include<iostream>
// using namespace std;
// int s=0;
// int sum(int a,int b){
//     if(a>b) return 0;
//     if(a%2!=0) s+=a;
//     sum(a+1,b);
//     return s;

// }
// int main(){
//     cout<<sum(0,10);
// }


// #include<iostream>
// using namespace std;
// int stair(int n){
//     if(n==1 || n==2) return n;
//     if(n==3) return 4;
//      return stair(n-1)+stair(n-2)+stair(n-3);
// }
// int main(){
//     cout<<stair( 10);
// }


// #include<iostream>
// using namespace std;
// bool power(int n){
//     if(n==1) return true;
//     if(n%2!=0) return false;
//     power(n/2);
//     return true;
// }
// int main(){
//  cout<<power(1);
// }



// #include<iostream>
// using namespace std;
// int reverse=0;
// int rev(int n){
//     if(n==0) return reverse;
//     reverse=reverse*10+n%10;
//     rev(n/10);

// }
// int main(){
//     cout<<rev(12345);
// }


// Design the logic to remove the duplicate elements from an Array
// and after the deletion the array should contain the unique elements.

// #include<iostream>
// #include<queue>
// using namespace std;
// void display(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";}}
// int main(){
//     int arr[]={1,1,3,3,3,4,2,5,7,7};
//     int n=sizeof(arr)/sizeof(arr[0]);
// cout<<"before:";//we only have to remove the dublicates present
// display(arr,n);//not changing the order how elements are placed
//   queue<int>st;
//   for(int i=0;i<n;i++){
//     if(st.size()==0) st.push(arr[i]);
//     else if(st.back()==arr[i]) continue;
//     else st.push(arr[i]);
//   }
//   int i=0;
//   while(st.size()!=0){
//    arr[i]=st.front();
//    i++;
//    st.pop();}
// //now i is the new size of the 
// //array arr after removing dublicates
//  cout<<endl<<"after:";
// display(arr,i);//new size=i
// }

//reversing array
// #include<iostream>
// using namespace std;
// void display(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";}}
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     cout<<"before reversing:";
//     display(arr,10);
//     //using two pointers
//     int i=0;//starting index
//     int j=9;//last index
//     while(i<j){
// swap(arr[i],arr[j]);//swapping 1st and last term
// i++;//incrementing 1st pointer
// j--;//decrementing 2nd pointer
//     }
//    cout<<endl<<"after reversing:";
//    display(arr,10);}

//Find the matrix multiplication
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[2][2]={1,2,3,4};
//     int brr[2][2]={1,2,3,4};
//     int crr[2][2];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//         crr[i][j]=3;
//         }
//     }
// }


//binary search
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int target=8;
//     int lo=0;
//     int hi=9;
//     bool flag=false;
//     while(lo<=hi){
//         int mid=(lo+hi)/2;
//         if(arr[mid]==target){
//         flag=true;
//         break;
//     }
//         if(arr[mid]<target) lo=mid+1;
//         if(arr[mid]>target) hi=mid-1;
//     }
    
//     cout<<flag;
// }



// Design the Logic to Find a Missing Number in a Sorted Array.
// #include<iostream>
// using namespace std;
// int main(){
//     int ans=0;
//     int arr[10]={1,2,3,4,5,7,8,9,10,11};
//     for(int i=0;i<10;i++){
//         if(arr[i]+1!=arr[i+1]){
//             ans=arr[i]+1;
//             break;
//         }
//     }
//     cout<<ans;
// }



//bubble sort
// #include<iostream>
// using namespace std;
// void display(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int arr[]={64,34,25,12,22,11,90};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     cout<<"before:"; 
//     display(arr,n);
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1;j++){
//         if(arr[j]>arr[j+1]){
//             swap(arr[j],arr[j+1]);
//         }
//         }
//     }
//     cout<<endl<<"after:";
//     display(arr,n);
// }


// Write a program to count the total number of distinct elements in an array of length n.
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     int arr[10]={1,2,2,2,2,4,4,6,7,7};
//     stack<int>st;
//     for(auto x:arr){
//         if(st.size()==0) st.push(x);
//         else if(x==st.top()) continue;
//         else st.push(x);
//     }
//     cout<<st.size();
// }


// #include<iostream>
// using namespace std;
// int main(){

// }

//reverse string using stack
// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     string s="DataStructure";
//     stack<char>st;
//     for(auto x:s){
//         st.push(x);
//     }
//     s.clear();
//     while(st.size()!=0){
//         s+=st.top();
//         st.pop();
//     }
//     cout<<s;
// }


// 3. Write a program that checks if an expression has balanced parentheses.
// #include<iostream>
// using namespace std;

// bool check(string s){
// if(s[0]==')' || s[s.size()-1]=='(') return false;
// int count1=0,count2=0;
// for(int i=0;i<s.size();i++){
//     if(s[i]=='(') count1++;
//     else count2++;
// }
// if(count1!=count2) return false;
// else return true;
// }

// int main(){
//      string s="()()()()))(()())))";
//      bool flag=check(s); 
//  cout<< flag;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[2][2]={1,2,3,4};
//     int brr[2][2]={1,2,3,4};
//     int crr[2][2]={0};
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             for(int k=0;k<2;k++){
//                crr[i][j] += arr[i][k] * brr[k][j];
//             }
//         }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             cout<<crr[i][j]<<" ";
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};    
    
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[j][i]<<" ";
//         }
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     string s="usdruypficfbpfbivlrhutcgvyjenlxzeovdyjtgvvfdjzcmikjraspdfp";
//     string p="qaeowuwqsqffvibrtxnjnzvzuuonrkwpysyxvkijemmpdmtnqx...";
// }

// #include<iostream>
// using namespace std;
// class student{
// public:
//  int marks;
//  int rollno;
//  string name;
//  string stream;
//  student(int marks,int rollno,string name,string stream){
//     this->marks=marks;
//     this->name=name;
//     this->rollno=rollno;
//     this->stream=stream;
//  }
// void show(){
//     cout<<name<<" "<<marks<<" "<<rollno<<" "<<stream<<endl;
// }
// int getmarks(){
//     return marks;
// }
// void setmarks(){

// }
// };

// void display(student a){
//     cout<<a.name<<" "<<a.marks<<" "<<a.rollno<<" "<<a.stream<<endl;
// }
// int  main(){
// student a(80,12,"raghav","cs");
// display(a);
// a.show();//pass by value
// student* b=new student(122,1,"aaa","science");
// }

// Design a class Triangle with private attributes: base and height. 
//Implement a public function compareArea(Triangle &t1, Triangle 
//&t2) that compares the areas of two triangles passed as arguments 
//and returns the triangle with the larger area.
// #include<iostream>
// using namespace std;
// class Triangle{
//     private:
//     int base;
//     int height;
    
//     public:
//     Triangle(int base,int height){
//         this->base=base;
//         this->height=height;
//     }
//     double area(){
//         return base*height*0.5;
//     }
// };

//  Triangle compareArea(Triangle &t1, Triangle &t2){
//    if(t1.area()>t2.area()) return t1;
//    else return t2;
//   }
// int main(){
// }

// #include<iostream>
// using namespace std;
// void se(string &a,int st,int end){
//     while(st<end){
//         swap(a[st],a[end]);
//         st++;
//         end--;
//     }
//     return ;
// }
// int main(){
//     string s="abcde";
//     int k=3;
//     int n=5;
//     se(s,0,n-k-1);
//         se(s,n-k,n-1);
//         se(s,0,n-1);
//         cout<<s;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3]={0};//upper
//     //0 1 2
//     //0 0 3
//     //0 0 0 
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(i==j || i==j+1 || i==j-1){
//                 cin>>arr[i][j];
//             }
//         }
//     }

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    

// }


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6][6]={15,0,0,22,0,-15,0,11,3,0,0,0,0,0,0,-6,0,0,0,0,0,0,0,0,91,0,0,0,0,0,0,0,28,0,0,0};
   
//     int count=0;
//     for(int i=0;i<6;i++){
//       for(int j=0;j<6;j++){
//         if(arr[i][j]!=0){
//             count++;
//       }
//     }
//     }

//      int ans[count+1][3];
//     ans[0][0]=6;
//     ans[0][1]=6;
//     ans[0][2]=count;
//     int k=1;
//     for(int i=0;i<6;i++){
//       for(int j=0;j<6;j++){
//         if(arr[i][j]!=0){
//             ans[k][0]=i;
//             ans[k][1]=j;
//             ans[k][2]=arr[i][j];
//             k++;
//       }
//     }
//     }
    
//       for(int i=0;i<count+1;i++){
//       for(int j=0;j<3;j++){
//        cout<<ans[i][j]<<" ";
//     }
//     cout<<endl;
//     }

// }




// #include<iostream>
// using namespace std;
// void addsparse(int arr[][4],int ans[][3],int m,int n,int p){

//     ans[0][0]=m;
//     ans[0][1]=n;
//     ans[0][2]=p;
//     int k=1;

//     for(int i=0;i<m;i++){
//       for(int j=0;j<n;j++){
//         if(arr[i][j]!=0){
//             ans[k][0]=i;
//             ans[k][1]=j;
//             ans[k][2]=arr[i][j];
//             k++;
//       }
//     }
//     }

// }

// void display(int arr[][3],int p){
//  for(int i=0;i<p+1;i++){
//     for(int j=0;j<3;j++){
//  cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }
// }

// int main(){
//     int arr[4][4]={0,10,0,12,0,0,0,0,0,0,5,0,15,12,0,0};
//     int brr[4][4]={0,0,8,0,0,0,0,23,0,0,9,0,20,25,0,0};
//     int ans[4][4];

//     int p=0;
//      for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             ans[i][j]=arr[i][j]+brr[i][j];
//             if(arr[i][j]!=0 || brr[i][j]!=0) p++;
//         }
//     }

//   int final[p+1][3];
// addsparse(ans,final,4,4,p);
// display(final,p);

// }


// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//   int arr[4]={1,2,3,4};
//   int k=2;
//   int sum=0;
//   for(int i=0;i<k;i++){
//     sum+=arr[i];
//   }
//   int Max=sum;
//   int i=1;
//   int j=k;
//   while(j<4){
//     sum=sum+arr[j]-arr[i-1];
//     Max=max(Max,sum);
//     i++;
//     j++;
//   }
//   cout<<Max;
// }


// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//   int arr[5]={-8,2,3,-6,10};
//   int k=2;
//   int p=0;
//   vector<int>v(5-k+1,0);
//   for(int i=0;i<=5-k;i++){
//     for(int j=i;j<k+i;j++){
//         if(arr[j]<0){
//             v[p]=(arr[j]); 
//             break;
//     }
// }
// p++;
//   }
//   for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
//   }
  
// }


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  int arr[5]={-8,2,3,-6,10};
  int k=2;
  int p=0;
  vector<int>v(5-k+1,0);
  for(int i=0;i<5-k;i++){
    for(int j=i;j<k+i;j++){
        if(arr[j]<0){
            v[p]=(arr[j]); 
            break;
    }
}
p++;
  }
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
  
}
