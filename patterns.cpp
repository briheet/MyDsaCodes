//loops
//#include<iostream>
//using namespace std;
//int main(){
    //int n;
    //cin>>n;

    //outer loop = row
    //for(int row=0;row<3;row=row+1){
        //inner loop = coloumn
        //for(int col=0;col<5;col=col+1){
          //  cout << " * ";
        //}
        //cout<< endl;
        
    //}
//} 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int row=0;row<n;row=row+1){
        for(int col=0;col<n;col=col+1){
            cout<< " * ";
        }
        cout << endl;

    }
   return 0;
}