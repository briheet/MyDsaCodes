#include<iostream>
using namespace std;
int  main(){
    int array[] = {1,0,0,0,0,1,1,1,0};
    int size = 9;
    int numzero = 0;
    int numone = 0;

    cout << "Enter the key to search " << endl;
    for(int i=0;i<size;i++){
       if(array[i]==0){
         numzero++;
       }
       if(array[i]==1){
        numone++;
       }
    }

    cout << "The number of zeros are " << numzero << endl;
    cout << "The number of one are " << numone << endl;
} 