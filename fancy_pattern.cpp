#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int row=0;row<n;row=row+1){
        for(int col=0;col<+1+row;col=col+1){
            cout << row+1 ;
            if(col!= row){
                cout << "*";
            }
        }
        cout << endl;
    }


    for(int row=0;row<n;row=row+1){
        for(int col=0;col<n-row;col=col+1){
            cout << n-row ;
            if(col!= n-row-1){
                cout << "*";
            }
        }
        cout << endl;
    }
}