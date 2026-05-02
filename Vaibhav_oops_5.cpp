a// // Q1
// #include <iostream>
// using namespace std;
// class Creature{
//     string petName;
// public:
//     Creature(string n){ petName=n; }
//     void makeSound(){ cout<<"Creature makes some sound."<<endl; }
//     void printName(){ cout<<"Pet Name: "<<petName<<endl; }
// };
// class Puppy:public Creature{
// public:
//     Puppy(string n):Creature(n){}
//     void makeSound(){ cout<<"Puppy says Woof!"<<endl; }
// };
// int main(){
//     Creature c("Unknown");
//     c.printName();
//     c.makeSound();
//     cout<<endl;
//     Puppy p("Rocky");
//     p.printName();
//     p.makeSound();
//     return 0;
// }

// // Q2
// #include <iostream>
// using namespace std;
// class Human{
// protected:
//     int ageValue;
// public:
//     Human(int a){ ageValue=a; }
// };
// class Learner:public Human{
// public:
//     Learner(int a):Human(a){}
//     void showAge(){ cout<<"Student Age: "<<ageValue<<endl; }
// };
// int main(){
//     Learner obj(19);
//     obj.showAge();
// }

// // Q3 a
// #include <iostream>
// using namespace std;
// class Parent{
// public:
//     int x;
// protected:
//     int y;
// private:
//     int z;
// public:
//     void initialize(){ x=11; y=22; z=33; }
//     void displayParent(){ cout<<x<<" "<<y<<" "<<z<<endl; }
// };
// class Child:public Parent{
// public:
//     void displayChild(){ cout<<"x: "<<x<<endl; cout<<"y: "<<y<<endl; }
// };
// int main(){
//     Child obj;
//     obj.initialize();
//     obj.x=100;
//     obj.displayChild();
//     obj.displayParent();
// }

// // Q3b
// #include <iostream>
// using namespace std;
// class Parent{
// public:
//     int x;
// protected:
//     int y;
// private:
//     int z;
// public:
//     void initialize(){ x=11; y=22; z=33; }
//     void displayParent(){ cout<<x<<" "<<y<<" "<<z<<endl; }
// };
// class Child:public Parent{
// public:
//     void displayChild(){ cout<<"x: "<<x<<endl; cout<<"y: "<<y<<endl; }
// };
// int main(){
//     Child obj;
//     obj.initialize();
//     obj.x=100;
//     obj.displayChild();
//     obj.displayParent();
// }

// // Q4
// #include <iostream>
// using namespace std;
// class Super{
// public:
//     void showSuper(){ cout<<"Inside Super Class"<<endl; }
// };
// class Sub:public Super{
// public:
//     void showSub(){ cout<<"Inside Sub Class"<<endl; }
// };
// int main(){
//     Sub s;
//     s.showSuper();
//     s.showSub();
// }

// // Q5
// #include <iostream>
// using namespace std;
// class BaseLayer{
// public:
//     BaseLayer(){ cout<<"Base Created"<<endl; }
//     ~BaseLayer(){ cout<<"Base Destroyed"<<endl; }
// };
// class UpperLayer:public BaseLayer{
// public:
//     UpperLayer(){ cout<<"Derived Created"<<endl; }
//     ~UpperLayer(){ cout<<"Derived Destroyed"<<endl; }
// };
// int main(){
//     UpperLayer obj;
// }

// // Q6
// #include <iostream>
// using namespace std;
// class Publication{
// protected:
//     string bookTitle,writer;
//     double cost;
// public:
//     void inputBook(){ cin>>bookTitle>>writer>>cost; }
//     void displayBook(){ cout<<bookTitle<<" "<<writer<<" "<<cost<<endl; }
// };
// class AcademicBook:public Publication{
//     string topic;
// public:
//     void inputDetails(){ inputBook(); cin>>topic; }
//     void showDetails(){ displayBook(); cout<<topic<<endl; }
// };
// int main(){
//     AcademicBook obj;
//     obj.inputDetails();
//     obj.showDetails();
// }

// // Q7
// #include <iostream>
// using namespace std;
// class Speed{
// protected:int spd;
// public:void setSpd(int s){ spd=s; }
// };
// class Fuel{
// protected:int level;
// public:void setLevel(int l){ level=l; }
// };
// class Temp{
// protected:int heat;
// public:void setHeat(int h){ heat=h; }
// };
// class Dashboard:public Speed,public Fuel,public Temp{
// public:
//     void showAll(){
//         cout<<"Speed: "<<spd<<endl;
//         cout<<"Fuel: "<<level<<endl;
//         cout<<"Temp: "<<heat<<endl;
//     }
// };
// int main(){
//     Dashboard d;
//     d.setSpd(70);
//     d.setLevel(40);
//     d.setHeat(85);
//     d.showAll();
// }

// // Q8
// #include <iostream>
// using namespace std;
// class Member{
// protected:
//     string personName;
//     int userID;
//     string phone;
// public:
//     void getMember(){ cin>>personName>>userID>>phone; }
//     void showMember(){ cout<<personName<<" "<<userID<<" "<<phone<<endl; }
// };
// class CollegeStudent:public Member{
//     int semester;
// public:
//     void inputStudent(){ getMember(); cin>>semester; }
//     void displayStudent(){ showMember(); cout<<semester<<endl; }
// };
// class Faculty:public Member{
//     string branch;
// public:
//     void inputFaculty(){ getMember(); cin>>branch; }
//     void displayFaculty(){ showMember(); cout<<branch<<endl; }
// };
// int main(){
//     CollegeStudent s;
//     Faculty f;
//     s.inputStudent();
//     s.displayStudent();
//     f.inputFaculty();
//     f.displayFaculty();
//     return 0;
// }

// // Q9
// #include <iostream>
// using namespace std;
// class Transport{
// protected:
//     string brand;
//     string type;
//     int makeYear;
// public:
//     void getTransport(){ cin>>brand>>type>>makeYear; }
//     void showTransport(){ cout<<brand<<" "<<type<<" "<<makeYear<<endl; }
// };
// class HeavyVehicle:public Transport{
// protected:
//     int capacity;
// public:
//     void inputHeavy(){ getTransport(); cin>>capacity; }
//     void displayHeavy(){ showTransport(); cout<<capacity<<endl; }
// };
// class ColdStorageTruck:public HeavyVehicle{
//     int coolingTemp;
// public:
//     void inputColdTruck(){ inputHeavy(); cin>>coolingTemp; }
//     void displayColdTruck(){ displayHeavy(); cout<<coolingTemp<<endl; }
// };
// int main(){
//     ColdStorageTruck obj;
//     obj.inputColdTruck();
//     obj.displayColdTruck();
//     return 0;
// }

// // Q10 
// #include <iostream>
// using namespace std;
// class Individual{
// protected:
//     string fullName,location;
// public:
//     void inputPerson(){ cin>>fullName>>location; }
//     void showPerson(){ cout<<fullName<<" "<<location<<endl; }
// };
// class Employee:virtual public Individual{
// protected:int empID;
// public:
//     void inputEmp(){ cin>>empID; }
//     void showEmp(){ cout<<empID<<endl; }
// };
// class Scholar:virtual public Individual{
// protected:int rollNo;
// public:
//     void inputScholar(){ cin>>rollNo; }
//     void showScholar(){ cout<<rollNo<<endl; }
// };
// class Assistant:public Employee,public Scholar{
// public:
//     void displayAll(){ showPerson(); showEmp(); showScholar(); }
// };
// int main(){
//     Assistant a;
//     a.inputPerson();
//     a.inputEmp();
//     a.inputScholar();
//     a.displayAll();
// }
