#include<iostream>
using namespace std;
int print(int n){
    for(int i=0;i<n;i++){
        cout << "LOve babbar" << endl;
    }
    return 0;
}

int main(){
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    print(n);
}