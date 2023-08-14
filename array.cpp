#include<iostream>
using namespace std;

int main(){
    int arr[10];
    cout << arr << endl;
    cout << &arr << endl;

    int brr[5] = {1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout << brr[i] << " " << endl;
    }

    int crr[10];
    cout << "Enter the values " << endl;

    for(int i=0;i<5;i++){
        cin>>crr[i];
    }
    cout << "Doubles" << endl;
    for(int i=0;i<5;i++){
        cout << (2*crr[i]) << " ";
    }
    cout << "Hello madharchodo" << endl;

    //int drr[10];

    /*for(int i=0;i<10;i++){
        cin>> drr[i];
    }*/

}