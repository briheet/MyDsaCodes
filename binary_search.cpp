#include<iostream>
#include<vector>
#include<limits>
using namespace std;

int binarySearch(int arr[],int size ,int target){

    int start = 0;
    int end = size -1;
    int mid = (start + end )/2;

    while(start<=end){
        int element = arr[mid];

        if(element == target){
            return mid;
        }
        else if(target < element){
          end = mid - 1;
        }
        else {
            start = mid + 1;
        }
        mid = ( start + end )/2;
    }
    return -1;

}

int main(){

    int arr[] = {2,4,6,8,10,12,16};
    int size = sizeof(arr)/sizeof(int);
    cout << "Enter the number you want to find out " << endl;
    int n;
    cin>>n;
    int target = n;

    int indexoftarget = binarySearch(arr,size,target);

    if(indexoftarget == -1){
        cout << "Target not found" << endl;

    }
    else{
        cout << "Target found at " << indexoftarget << endl;
    }

    

}



#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int arr[] = {1,4,5,6,7,8};

    if(binary_search(arr,arr+6,19)){
        cout << "Found" << endl;

    }
    else{
        cout << "NOt found" << endl;
    }

    cout << binary_search(arr,arr+6,7) << endl; // bool values return karta hain
}


//Odd element in Array

#include <iostream>
#include<vector>
using namespace std;

int solve(vector<int> arr) {
  int s = 0;
  int e = arr.size() - 1;
  int mid = s + (e-s)/2;

  while(s <= e) {
    if(s == e) {
      //single element
      return s;
    }

    //2 cases -> mid - even or mid - odd
    if(mid%2 == 0 ) {
      if(arr[mid] == arr[mid + 1] ) {
        s = mid + 2;
      }
      else {
        e = mid;
      }
    }
    else {
        if(arr[mid] == arr[mid-1]) {
          s = mid + 1;
        }
        else {
          e = mid - 1;
        }
    }
    mid = s + (e-s)/2;
  }
  return -1;
}

int main() {
  vector<int> arr{1,1,2,2,1};
  int ans = solve(arr);
  cout << "index is " << ans << endl;
  cout << "value is " << arr[ans] << endl;

  return 0;
}