/*
//Question:1
#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swapValues(x, y);

    cout << x << " " << y << endl;
    return 0;
}
*/

/*
//Question : 2
#include <iostream>
using namespace std;

template <typename T>
T findMin(T arr[], int size) {
    T min = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main() {
    int arr[] = {4, 2, 7, 1, 9};
    cout << "Minimum: " << findMin(arr, 5);
    return 0;
}
    */
/*
    //Question :3
    #include <iostream>
using namespace std;

template <typename T>
T findMax(T arr[], int size) {
    T max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int arr[] = {4, 2, 7, 1, 9};
    cout << "Maximum: " << findMax(arr, 5);
    return 0;
}
*/
/*
//Question :4
#include <iostream>
using namespace std;

template <class T>
T bubbleSort(T arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    float arr[] = {5.6, 3.2, 1.3, 4.0, 2.2};
    bubbleSort(arr, 5);

    cout << "Sorted array: ";
    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}
*/

/*
//Question :5
#include <iostream>
using namespace std;

template <class T> // class is old syntax, typename is preferred but both work
int linearSearch(T arr[], int size, T key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int key = 30;

    int index = linearSearch(arr, 5, key);
    cout << "Element found at index: " << index;

    return 0;
}
*/

/*
    //Question :6
    #include <iostream>
using namespace std;

template <typename T>
class Stack {
    T arr[100];
    int top;
public:
    Stack() { top = -1; }

    void push(T value) {
        arr[++top] = value;
    }

    void pop() {
        top--;
    }

    void display() {
        for(int i = top; i >= 0; i--)
            cout << arr[i] << " ";
    }
};

int main() {
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack: ";
    s.display();

    s.pop();
    cout << "\nAfter pop: ";
    s.display();

    return 0;
}
*/
/*
    //Question :7
#include <iostream>
using namespace std;

template <typename T>
class Queue {
    T arr[100];
    int front, rear;
public:
    Queue() {
        front = 0;
        rear = -1;
    }

    void enqueue(T value) {
        arr[++rear] = value;
    }

    void dequeue() {
        front++;
    }

    void display() {
        for(int i = front; i <= rear; i++)
            cout << arr[i] << " ";
    }
};

int main() {
    Queue<int> q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    cout << "Queue: ";
    q.display();

    q.dequeue();
    cout << "\nAfter dequeue: ";
    q.display();

    return 0;
}
*/
/*
//Question :8
#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair {
    T1 a;
    T2 b;
public:
    Pair(T1 x, T2 y) {
        a = x;
        b = y;
    }

    void display() {
        cout << a << " " << b;
    }
};

int main() {
    Pair<int, string> p(1, "Hello");
    p.display();
    return 0;
}
    */
/*
 //Question :9
 #include <iostream>
using namespace std;

template <typename T>
class Calculator {
public:
    T add(T a, T b) { return a + b; }
    T sub(T a, T b) { return a - b; }
    T mul(T a, T b) { return a * b; }
    T div(T a, T b) { return a / b; }
};

int main() {
    Calculator<int> c;

    cout << "Add: " << c.add(10, 5) << endl;
    cout << "Sub: " << c.sub(10, 5) << endl;
    cout << "Mul: " << c.mul(10, 5) << endl;
    cout << "Div: " << c.div(10, 5);

    return 0;
}
    */

    //Question :10
    #include <iostream>
using namespace std;

template <typename T>
class Array {
    T arr[100];
    int size;
public:
    void input(int n) {
        size = n;
        for(int i = 0; i < size; i++)
            cin >> arr[i];
    }

    void display() {
        for(int i = 0; i < size; i++)
            cout << arr[i] << " ";
    }
};

int main() {
    Array<int> a;

    int n;
    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    a.input(n);

    cout << "Array: ";
    a.display();

    return 0;
}
