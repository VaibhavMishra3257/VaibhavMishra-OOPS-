//Q1 ASS4

#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

public:

    // (a) Default Constructor
    Rectangle()
    {
        length = 0;
        breadth = 0;
        cout << "Default Constructor Called\n";
    }

    // (b) Two Parameter Constructor
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
        cout << "Two Parameter Constructor Called\n";
    }

    // (c) One Parameter Constructor
    Rectangle(int x)
    {
        length = x;
        breadth = x;
        cout << "One Parameter Constructor Called\n";
    }

    int area()
    {
        return length * breadth;
    }
};

int main()
{
    Rectangle r1;          // no parameter
    Rectangle r2(5);       // one parameter
    Rectangle r3(4, 6);    // two parameters

    cout << "Area of r1 = " << r1.area() << endl;
    cout << "Area of r2 = " << r2.area() << endl;
    cout << "Area of r3 = " << r3.area() << endl;

    return 0;
}

//Q2 ASS 4

#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

public:

    // Constructor with default arguments
    Rectangle(int l = 0, int b = 0)
    {
        length = l;
        breadth = b;
        cout << "Constructor Called\n";
    }

    int area()
    {
        return length * breadth;
    }

    // Destructor
    ~Rectangle()
    {
        cout << "Destructor Called\n";
    }
};

int main()
{
    Rectangle arr[3] = { Rectangle(), Rectangle(5), Rectangle(4,6) };

    for(int i = 0; i < 3; i++)
    {
        cout << "Area of object " << i+1 << " = " << arr[i].area() << endl;
    }

    return 0;
}

//Q3 ASS 4

#include <iostream>
using namespace std;

class Demo
{
public:
    Demo()
    {
        cout << "Constructor Called\n";
    }

    ~Demo()     // Destructor
    {
        cout << "Destructor Called\n";
    }
};

int main()
{
    Demo obj;
    return 0;
}

// q4(a)

int *p;
p = new int;

*p = 10;
cout << "Value = " << *p << endl;

delete p;
 
//q4(b)

float *f;
f = new float;

*f = 5.5;
cout << "Value = " << *f << endl;

delete f;

//q4(c)

int *arr;
arr = new int[5];

for(int i=0; i<5; i++)
{
    arr[i] = i+1;
    cout << arr[i] << " ";
}

delete[] arr;

//q4(d)

float *farr;
farr = new float[3];

farr[0] = 1.1;
farr[1] = 2.2;
farr[2] = 3.3;

for(int i=0; i<3; i++)
{
    cout << farr[i] << " ";
}

delete[] farr;

//q4(e)

#include <iostream>
using namespace std;

class Test
{
public:
    Test()
    {
        cout << "Constructor Called\n";
    }

    ~Test()
    {
        cout << "Destructor Called\n";
    }
};

int main()
{
    Test *obj = new Test;

    delete obj;

    return 0;
}

//q5(f)

Test *objArr = new Test[2];

delete[] objArr;
