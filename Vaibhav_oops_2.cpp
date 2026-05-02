//Q1
#include <iostream>
using namespace std;

struct Student
{
    string name;
    int roll;
    string degree;
    string hostel;
    float cgpa;

    void addDetails()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter degree: ";
        cin >> degree;

        cout << "Enter hostel: ";
        cin >> hostel;

        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void displayDetails()
    {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main()
{
    Student s;
    s.addDetails();
    s.displayDetails();
    return 0;
}

//Q2
#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    float cgpa;

public:
    string name;

    void setData()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> roll;

        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void showData()
    {
        cout << "\nName: " << name;
        cout << "\nRoll No: " << roll;
        cout << "\nCGPA: " << cgpa;
    }
};

int main()
{
    Student s;
    s.setData();
    s.showData();
    return 0;
}

//Q3
#include <iostream>
using namespace std;

class Demo
{
private:
    void show()
    {
        cout << "This is private function";
    }

public:
    void display()
    {
        show();
    }
};

int main()
{
    Demo d;
    d.display();
    return 0;
}

//Q4
#include <iostream>
using namespace std;

class Rectangle
{
public:
    int width, height;

    void getdata()
    {
        cout << "Enter width: ";
        cin >> width;

        cout << "Enter height: ";
        cin >> height;
    }

    void calculatearea()
    {
        cout << "Area = " << width * height;
    }
};

int main()
{
    Rectangle r;
    r.getdata();
    r.calculatearea();
    return 0;
}

//Q5
#include <iostream>
using namespace std;

class Complex
{
public:
    int real, imag;
};

int main()
{
    Complex a, b, c;

    cout << "Enter real part of first number: ";
    cin >> a.real;
    cout << "Enter imaginary part of first number: ";
    cin >> a.imag;

    cout << "Enter real part of second number: ";
    cin >> b.real;
    cout << "Enter imaginary part of second number: ";
    cin >> b.imag;

    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;

    cout << "Result = " << c.real << " + " << c.imag << "i";

    return 0;
}

//Q6 
#include <iostream>
using namespace std;

int x = 10; // global variable

class Demo
{
public:
    void show();
};

void Demo::show()
{
    cout << "Global x = " << ::x;
}

int main()
{
    Demo d;
    d.show();
    return 0;
}

//Q6C
#include <iostream>
using namespace std;

class Test
{
public:
    static int count;

    void show()
    {
        cout << "Count = " << count;
    }
};

int Test::count = 5;

int main()
{
    Test t;
    t.show();
    return 0;
}
//Q6D
#include <iostream>
using namespace std;

int main()
{
    cout << "Using scope resolution operator with std::cout";
    return 0;
}

//Q7
#include <iostream>
using namespace std;

namespace First
{
    int num = 10;
}

namespace Second
{
    int num = 20;
}

int main()
{
    cout << First::num << endl;
    cout << Second::num << endl;
    return 0;
}
