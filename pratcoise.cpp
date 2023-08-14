#include<iostream>
using namespace std;

int main(){


    char arr[] = "aabbcccddd";
    int dat [4];
    for(int i=0;i<4;i++){
        dat[i] = 0;
    }
    int n=10;
    for(int i=0;i<n;i++){
        dat[arr[i]-'a']++;
    }
    for(int i=0;i<4;i++){
        cout<<dat[i]<<" "<<char(i+97)<<" \n";
    }
    
    return 0;

}