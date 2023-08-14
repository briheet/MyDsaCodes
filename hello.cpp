//Simple Hello world program

#include<iostream> //including iostream 
using namespace std;

int main(){
    cout << "Hello world" << endl; //cout for printing, endl for next line
    //" " == Is a string
    cout << '2' << endl;

    char ch = 'a';// a is stored by its ascii value
    cout << ch << endl;

    bool flag = true;// true = 1,false = 0
    cout << flag << endl;

    float f = 1.2;// decimal value, 4 byte
    cout << f << endl;

    double c = 1.2; // 8 byte, used for large numbers
    cout << c << endl;

    int b = 10;
    cout << sizeof(b) << endl;//size acquired by b variable

    char ap = 97;// integer got typecast into character
    cout << ch << endl;
    }