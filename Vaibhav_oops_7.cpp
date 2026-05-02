//q1
#include <iostream>
using namespace std;

class Polygon {
protected:
    int width, height;
public:
    void set_value(int w, int h){
        width = w;
        height = h;
    }
};

class Rectangle : public Polygon {
public:
    int area(){
        return width * height;
    }
};

class Triangle : public Polygon {
public:
    int area(){
        return (width * height) / 2;
    }
};

int main(){
    Rectangle rect;
    Triangle tri;

    Polygon *p;

    p = &rect;
    p->set_value(10,5);
    cout<<"Rectangle Area = "<<rect.area()<<endl;

    p = &tri;
    p->set_value(10,5);
    cout<<"Triangle Area = "<<tri.area()<<endl;

    return 0;
}

//q2 

#include <iostream>
using namespace std;

class Shape{
public:
    virtual void area(){}
};

class Circle : public Shape{
    float r;
public:
    Circle(float x){ r = x; }
    void area(){
        cout<<"Area of Circle = "<<3.14*r*r<<endl;
    }
};

class Rectangle : public Shape{
    float l,b;
public:
    Rectangle(float x,float y){
        l=x;
        b=y;
    }
    void area(){
        cout<<"Area of Rectangle = "<<l*b<<endl;
    }
};

class Triangle : public Shape{
    float b,h;
public:
    Triangle(float x,float y){
        b=x;
        h=y;
    }
    void area(){
        cout<<"Area of Triangle = "<<0.5*b*h<<endl;
    }
};

int main(){
    Shape *s;

    Circle c(5);
    Rectangle r(4,6);
    Triangle t(4,5);

    s=&c;
    s->area();

    s=&r;
    s->area();

    s=&t;
    s->area();

    return 0;
}

//q3
#include <iostream>
using namespace std;

class Triangle{
public:

    float area(float base, float height){
        return 0.5 * base * height;
    }

    float area(float side){
        return (1.732/4) * side * side;
    }

    float area(float a, float b, float c){
        float s = (a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
};

int main(){

    Triangle t;

    cout<<"Right angle triangle area = "<<t.area(5,4)<<endl;
    cout<<"Equilateral triangle area = "<<t.area(6)<<endl;
    cout<<"Isosceles triangle area = "<<t.area(5,5,6)<<endl;

    return 0;
}

//q4
#include <iostream>
using namespace std;

class Student{
public:
    virtual void show() = 0;
};

class Engineering : public Student{
public:
    void show(){
        cout<<"Engineering Student"<<endl;
    }
};

class Medicine : public Student{
public:
    void show(){
        cout<<"Medical Student"<<endl;
    }
};

class Science : public Student{
public:
    void show(){
        cout<<"Science Student"<<endl;
    }
};

int main(){

    Student *s[3];

    Engineering e;
    Medicine m;
    Science sc;

    s[0] = &e;
    s[1] = &m;
    s[2] = &sc;

    for(int i=0;i<3;i++)
        s[i]->show();

    return 0;
}

//q5
#include <iostream>
using namespace std;

class Time{
    int h,m,s;

public:

    Time(int a,int b,int c){
        h=a;
        m=b;
        s=c;
    }

    Time(){}

    Time operator + (Time t){
        Time temp;

        temp.s = s + t.s;
        temp.m = m + t.m;
        temp.h = h + t.h;

        return temp;
    }

    void show(){
        cout<<h<<":"<<m<<":"<<s<<endl;
    }
};

int main(){

    Time t1(5,15,34), t2(9,53,58), t3;

    t3 = t1 + t2;

    t3.show();

    return 0;
}

//q6

#include <iostream>
#include <string>
using namespace std;

class STRING{

public:
    string s;

    STRING(string str){
        s = str;
    }

    bool operator == (STRING x){
        if(s == x.s)
        return true;
        else
        return false;
    }

    STRING operator + (STRING x){
        STRING temp("");
        temp.s = s + x.s;
        return temp;
    }
};

int main(){

    STRING s1("Hello ");
    STRING s2("World");

    STRING s3 = s1 + s2;

    cout<<"Concatenation: "<<s3.s<<endl;

    if(s1 == s2)
        cout<<"Strings are equal";
    else
        cout<<"Strings are not equal";

    return 0;
}

//q7

#include <iostream>
using namespace std;

class Matrix{
    int a[2][2];

public:

    void input(){
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                cin>>a[i][j];
    }

    friend void multiply(Matrix,Matrix);
};

void multiply(Matrix m1, Matrix m2){

    int result[2][2];

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            result[i][j] = 0;

            for(int k=0;k<2;k++)
                result[i][j] += m1.a[i][k] * m2.a[k][j];
        }
    }

    cout<<"Result Matrix:"<<endl;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            cout<<result[i][j]<<" ";
        cout<<endl;
    }
}

int main(){

    Matrix m1,m2;

    cout<<"Enter Matrix 1"<<endl;
    m1.input();

    cout<<"Enter Matrix 2"<<endl;
    m2.input();

    multiply(m1,m2);

    return 0;
}

//q8
#include <iostream>
using namespace std;

class Array{

    int arr[5];

public:

    Array(){
        for(int i=0;i<5;i++)
            arr[i] = i*10;
    }

    int operator[](int index){

        if(index<0 || index>=5){
            cout<<"Index out of bounds"<<endl;
            return -1;
        }

        return arr[index];
    }
};

int main(){

    Array a;

    cout<<a[2]<<endl;
    cout<<a[7]<<endl;

    return 0;
}

//q9

#include <iostream>
using namespace std;

class Demo{

public:

    void operator()(int a){
        cout<<"One argument: "<<a<<endl;
    }

    void operator()(int a,int b){
        cout<<"Two arguments: "<<a<<" "<<b<<endl;
    }

    void operator()(int a,int b,int c){
        cout<<"Three arguments: "<<a<<" "<<b<<" "<<c<<endl;
    }
};

int main(){

    Demo d;

    d(5);
    d(2,4);
    d(1,2,3);

    return 0;
}

//q10

#include <iostream>
using namespace std;

class Student{

    int roll;
    string name;

public:

    friend istream& operator>>(istream &in, Student &s){
        cout<<"Enter name and roll: ";
        in>>s.name>>s.roll;
        return in;
    }

    friend ostream& operator<<(ostream &out, Student &s){
        out<<"Name: "<<s.name<<endl;
        out<<"Roll: "<<s.roll<<endl;
        return out;
    }
};

int main(){

    Student s;

    cin>>s;
    cout<<s;

    return 0;
}

//q11

#include <iostream>
using namespace std;

class Test{

    float x;

public:

    Test(float a){
        x = a;
    }

    void show(){
        cout<<"Value = "<<x<<endl;
    }
};

int main(){

    float num = 5.5;

    Test t = num;

    t.show();

    return 0;
}

//q12

#include <iostream>
using namespace std;

class Test{

    float x;

public:

    Test(float a){
        x = a;
    }

    operator float(){
        return x;
    }
};

int main(){

    Test t(6.5);

    float num;

    num = t;

    cout<<"Float value = "<<num<<endl;

    return 0;
}

//q13

#include <iostream>
#include <cmath>
using namespace std;

class Polar{
public:
    float r,theta;

    Polar(float a,float b){
        r=a;
        theta=b;
    }
};

class Cartesian{
    float x,y;

public:

    Cartesian(){}

    Cartesian(Polar p){
        x = p.r * cos(p.theta);
        y = p.r * sin(p.theta);
    }

    void show(){
        cout<<"x = "<<x<<" y = "<<y<<endl;
    }
};

int main(){

    Polar p(10,5);

    Cartesian c = p;

    c.show();

    return 0;
}
