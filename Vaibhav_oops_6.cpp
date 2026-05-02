//  QUESTION 1

// #include<iostream>
// using namespace std;

// class Book{
// public:
//     string title,author,isbn;
// };

// class Library{
// public:
//     Book b[5];
//     int count=0;

//     bool addNewBook(string &title,string &author,string &isbn){
//         b[count].title=title;
//         b[count].author=author;
//         b[count].isbn=isbn;
//         count++;
//         return true;
//     }

//     bool removeBooks(string &isbn){
//         for(int i=0;i<count;i++){
//             if(b[i].isbn==isbn){
//                 for(int j=i;j<count-1;j++){
//                     b[j]=b[j+1];
//                 }
//                 count--;
//                 return true;
//             }
//         }
//         return false;
//     }

//     void displayDetails(){
//         for(int i=0;i<count;i++){
//             cout<<b[i].title<<" "<<b[i].author<<" "<<b[i].isbn<<endl;
//         }
//     }
// };

// int main(){

//     Library l;

//     string t="Book1",a="Auth1",i="1";
//     l.addNewBook(t,a,i);

//     t="Book2"; a="Auth2"; i="2";
//     l.addNewBook(t,a,i);

//     t="Book3"; a="Auth3"; i="3";
//     l.addNewBook(t,a,i);

//     t="Book4"; a="Auth4"; i="4";
//     l.addNewBook(t,a,i);

//     t="Book5"; a="Auth5"; i="5";
//     l.addNewBook(t,a,i);

//     l.displayDetails();

//     string r="3";
//     l.removeBooks(r);

//     cout<<"after remove"<<endl;
//     l.displayDetails();
// }

//   QUESTION 2

// #include<iostream>
// using namespace std;

// class Book{
// public:
//     string title,author,isbn;

//     Book(){}

//     Book(string t,string a,string i){
//         this->title=t;
//         this->author=a;
//         this->isbn=i;
//     }

//     Book(const Book &b){
//         this->title=b.title;
//         this->author=b.author;
//         this->isbn=b.isbn;
//     }
// };

// class Library{
// public:
//     Book b[5];
//     int count=0;

//     bool addNewBook(string title,string author,string isbn){
//         if(count==5) return false;
//         b[count]=Book(title,author,isbn);
//         count++;
//         return true;
//     }

//     bool removeBooks(string isbn){
//         for(int i=0;i<count;i++){
//             if(b[i].isbn==isbn){
//                 for(int j=i;j<count-1;j++){
//                     b[j]=b[j+1];
//                 }
//                 count--;
//                 return true;
//             }
//         }
//         return false;
//     }

//     void displayDetails(){
//         for(int i=0;i<count;i++){
//             cout<<b[i].title<<" "<<b[i].author<<" "<<b[i].isbn<<endl;
//         }
//     }
// };

// int main(){

//     Library l;

//     l.addNewBook("A","AA","1");
//     l.addNewBook("B","BB","2");
//     l.addNewBook("C","CC","3");
//     l.addNewBook("D","DD","4");
//     l.addNewBook("E","EE","5");

//     l.displayDetails();

//     l.removeBooks("3");

//     cout<<"after remove"<<endl;
//     l.displayDetails();

//     Book arr[2]={Book("X","XX","11"),Book("Y","YY","22")};

//     Book *p=new Book("Z","ZZ","33");
//     cout<<p->title<<" "<<p->author<<" "<<p->isbn<<endl;
//     delete p;
// }

// QUESTION 3

// #include<iostream>
// #include<string>

// class Account{
//     const long accNo;
//     long transactionID;
//     std::string type;
//     double balance;

// public:

//     Account(long a,double b):accNo(a){
//         balance=b;
//         transactionID=0;
//         type="none";
//     }

//     long depositAmount(const long to,const long from,const double amount){
//         balance+=amount;
//         transactionID++;
//         type="deposit";
//         return transactionID;
//     }

//     long creditAmount(const long to,const long from,const double amount){
//         balance-=amount;
//         transactionID++;
//         type="debit";
//         return transactionID;
//     }

//     void displayDetails() const{
//         std::cout<<"Acc:"<<accNo<<std::endl;
//         std::cout<<"Balance:"<<balance<<std::endl;
//         std::cout<<"Last Transaction:"<<type<<std::endl<<std::endl;
//     }
// };

// int main(){

//     Account a1(1,1000),a2(2,2000),a3(3,3000),a4(4,4000),a5(5,5000);

//     a1.depositAmount(1,2,500);
//     a2.creditAmount(2,1,300);

//     a3.depositAmount(3,4,700);
//     a4.creditAmount(4,3,200);

//     a5.depositAmount(5,1,100);

//     a1.displayDetails();
//     a2.displayDetails();
//     a3.displayDetails();
//     a4.displayDetails();
//     a5.displayDetails();
// }

//  QUESTION 5

// #include<iostream>
// using namespace std;

// class Complex{
//     int real,imag;

// public:

//     Complex(int r,int i){
//         real=r;
//         imag=i;
//     }

//     Complex(const Complex &c){
//         real=c.real;
//         imag=c.imag;
//     }

//     void display(){
//         cout<<real<<" + "<<imag<<"i"<<endl;
//     }

//     friend void sum(Complex,Complex);
// };

// void sum(Complex c1,Complex c2){
//     int r=c1.real+c2.real;
//     int i=c1.imag+c2.imag;
//     cout<<"Sum = "<<r<<" + "<<i<<"i"<<endl;
// }

// int main(){

//     Complex c1(2,3);
//     Complex c2(4,5);

//     Complex c3=c1;

//     c1.display();
//     c2.display();
//     c3.display();

//     sum(c1,c2);
// }
