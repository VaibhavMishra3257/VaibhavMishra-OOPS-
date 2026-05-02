//q1
#include<iostream>
using namespace std;
int main(){
    cout << "hello world";
    return 0;
}

//q2
int main(){
    int a;
    int b;
    cin >> a >> b;
    cout << a+b << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    cout << a/b << endl;
    return 0;
}

//q3
int main(){
    int a;
    float b;
    char c;
   cin >> a >> b >> c;
   cout << "integer:" <<a<< endl;
   cout<< "decimal:"<<b<< endl;
   cout<< "charac:" << c<< endl;
    return 0;
}

//q4
int main(){
   int c;
   int f;
   cin>> c ;
   f=(9*c)/5+32;
   cout<< f;
    return 0;
}



// q5
int main(){
   cout <<"hello" << endl;
   cout<<"hello \n";
   cout<<"hello\tworld"<< endl;
   cout<<"hello \b";
    return 0;
}
// Q6
int main(){
  int a;
  int b;
  cin >> a >>b;
    a += 3;
    b -= 4;
    cout << a << endl;
    cout << b << endl;
    
    return 0;
}
   
   //Q7
   int main(){
 
    int a, b;
    cin >> a >> b;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << a << b;

    return 0;
} 

//q8

int main() {
    int days;
    cin >> days;

    if (days <= 5)
        cout << "Fine: 50 paise";
    else if (days <= 10)
        cout << "Fine: 1 rupee";
    else if (days <= 30)
        cout << "Fine: 5 rupees";
    else
        cout << "Membership cancelled";

    return 0;
}

//q9


int main() {
    int a, b;
    char op;
    cin >> a >> b >> op;

    switch(op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << a / b; break;
        default: cout << "Invalid operator";
    }
    return 0;
}


//q10

int main() {
    int n;
    cin >> n;

    if(n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}
