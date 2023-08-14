#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    int ans = sizeof(arr)/sizeof(int);
    cout << ans << endl; 
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;
    arr.push_back(5);
      
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
}