//2 Dimensional Array
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int> >arr;
// entering elements of vector
    vector<int> a{1,2,3};
    vector<int> b{4,5,6,11};
    vector<int> c{7,8,9};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for(int i=0; i<arr.size();i++){
        for(int j=0; j<arr[i].size(); j++){ // arr[i].size() always use i, remember
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    vector<vector<int>> brr (5, vector<int>(5, -8));
     for(int i=0; i<brr.size();i++){
        for(int j=0; j<brr[i].size(); j++){  
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }


    cout<< brr[2][3];// does not work 

}