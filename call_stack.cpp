#include<iostream>
using namespace std;
int getsum(int a, int b){
    
    return a+b;
}
int main(){
    int a,b;
    cin >> a >> b;

    int sum = getsum(a,b);
    cout << sum;
    return 0;
}