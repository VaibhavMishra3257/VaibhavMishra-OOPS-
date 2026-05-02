//Q1
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("NUM.TXT");

    for(int i = 1; i <= 200; i++)
    {
        fout << i << " ";
    }

    fout.close();
    cout << "Numbers written to file";
    return 0;
}

//Q2
#include <iostream>
#include <fstream>
using namespace std;

void countAlphabets()
{
    ifstream fin("NOTES.TXT");
    char ch;
    int count = 0;

    while(fin.get(ch))
    {
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            count++;
        }
    }

    cout << "Total alphabets: " << count;
    fin.close();
}

int main()
{
    countAlphabets();
    return 0;
}

//Q3
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("source.txt");
    ofstream fout("dest.txt");

    char ch;

    while(fin.get(ch))
    {
        fout.put(ch);
    }

    fin.close();
    fout.close();

    cout << "File copied successfully";
    return 0;
}

//Q4
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Length = " << strlen(str) << endl;

    ofstream fout("data.txt");
    fout << str;
    fout.close();

    ifstream fin("data.txt");
    char ch;

    cout << "From file: ";
    while(fin.get(ch))
    {
        cout << ch;
    }

    fin.close();
    return 0;
}

//Q5
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;

    // (a) create file A-Z
    file.open("test.txt", ios::out);
    for(char ch = 'A'; ch <= 'Z'; ch++)
        file << ch;
    file.close();

    // (b) read 10th character
    file.open("test.txt", ios::in);
    file.seekg(9);
    char ch;
    file.get(ch);
    cout << "10th char: " << ch << endl;
    file.close();

    // (c) overwrite 5th character
    file.open("test.txt", ios::in | ios::out);
    file.seekp(4);
    file.put('X');
    file.close();

    // (d) file size
    file.open("test.txt", ios::in);
    file.seekg(0, ios::end);
    cout << "File size: " << file.tellg() << endl;

    // (e) last character
    file.seekg(-1, ios::end);
    file.get(ch);
    cout << "Last char: " << ch << endl;
    file.close();

    return 0;
}

///Q5 EXTRA
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("data.txt");
    fout << "This is a sample file for testing purpose.";
    fout.close();

    ifstream fin("data.txt");

    fin.seekg(10);
    cout << "Position: " << fin.tellg() << endl;

    char ch;
    while(fin.get(ch))
    {
        cout << ch;
    }

    fin.close();
    return 0;
}   

//Q6
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;

    file.open("hello.txt", ios::out);

    char str[] = "Hello World";

    
    for(int i = 0; str[i] != '\0'; i++)
    {
        file.put(str[i]);
        cout << "Position = " << file.tellp() << endl;
    }

    file.close();

    file.open("hello.txt", ios::in | ios::out);

    file.seekp(6);  
    file << "C++";

    file.close();

    return 0;
}
