//last assig ques.
#include <iostream>
using namespace std;

class Complex{ 
    float real;
    float imag;

    public:
    void setComplex(float real,float imag){
        cout<<"Enter the real part:"<<endl;
        cin>>real;
        cout<<"Enter the imag part:"<<endl;
        cin>>imag;
        }

    void displayComplex(){
        if(imag>=0)
        cout<<real<<"+"<<imag<<"i"<<endl;
        else
        cout<<real<<"-"<<imag<<"i"<<endl;
        }

    Complex sumComplex(Complex a){
        Complex temp;
        temp.real = real + a.real;
        temp.imag = imag + a.imag;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;

    c1.setComplex(3.2, 2.5);
    c2.setComplex(1, 4.5);

    cout << "First Complex Number: ";
    c1.displayComplex();
    cout << "Second Complex Number: ";
    c2.displayComplex();

    c3 = c1.sumComplex(c2);
    cout << "Sum of Complex Numbers: ";
    c3.displayComplex();
    return 0;
}

//q1
#include <iostream>
using namespace std;

class Student {
    int marks;
public:
    void set(int marks) {
        this->marks = marks;   // this pointer
    }
    void show() {
        cout << "Marks = " << marks << endl;
    }
};

int main() {
    Student s1;
    Student *p;

    p = &s1;

    s1.set(90);     // dot operator
    p->show();      // arrow operator

    return 0;
}
//q2
#include <iostream>
using namespace std;

class B;

class A {
    int x;
public:
    void set(int a) {
        x = a;
    }
    friend void swap(A &, B &);
};

class B {
    int y;
public:
    void set(int b) {
        y = b;
    }
    friend void swap(A &, B &);
};

void swap(A &a, B &b) {
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}

int main() {
    A a;
    B b;

    a.set(10);
    b.set(20);

    swap(a, b);

    cout << "Swapped successfully" << endl;
    return 0;
}
// q3

#include <iostream>
using namespace std;

class B;

class A {
    int x;
public:
    void set(int a) {
        x = a;
    }
    friend void add(A, B);
};

class B {
    int y;
public:
    void set(int b) {
        y = b;
    }
    friend void add(A, B);
};

void add(A a, B b) {
    cout << "Sum = " << a.x + b.y << endl;
}

int main() {
    A a;
    B b;

    a.set(5);
    b.set(7);

    add(a, b);

    return 0;
}

//q4
#include <iostream>
using namespace std;

class B;

class A {
    int x = 50;
    friend class B;
};

class B {
public:
    void show(A a) {
        cout << "Value of x = " << a.x << endl;
    }
};

int main() {
    A a;
    B b;
    b.show(a);

    return 0;
}

//q5
#include <iostream>
using namespace std;

class Rectangle {
    int l, b;
public:
    void set(int x, int y) {
        l = x;
        b = y;
    }
    void area() {
        cout << "Area = " << l * b << endl;
    }
};

int main() {
    Rectangle r[3];

    r[0].set(2, 3);
    r[1].set(4, 5);
    r[2].set(6, 7);

    for(int i = 0; i < 3; i++) {
        r[i].area();
    }

    return 0;
}

//q6
#include <iostream>
using namespace std;

inline int cube(int x) {
    return x * x * x;
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Cube = " << cube(n) << endl;

    return 0;
}

//q7a
#include <iostream>
using namespace std;

class Test {
public:
    int x;
};

Test show(Test t) {
    t.x = t.x + 10;
    return t;
}

int main() {
    Test t1, t2;
    t1.x = 5;

    t2 = show(t1);

    cout << "Returned value = " << t2.x << endl;
    return 0;
}

//q7b
#include <iostream>
using namespace std;

class Test {
public:
    int x;
};

void show(Test &t) {
    t.x = t.x + 10;
}

int main() {
    Test t;
    t.x = 5;

    show(t);

    cout << "Updated value = " << t.x << endl;
    return 0;
}
