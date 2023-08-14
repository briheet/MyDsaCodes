#include <iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& arr, int s, int e, int& key) {
  //base case

  if(s > e) 
    return -1;
  
  int mid = (s+e)/2;
  if(arr[mid] == key)
    return mid;

  if(arr[mid] < key) {
    int ans =  binarySearch(arr,mid+1,e, key );
    return ans;
  }
  else {  
    int ans =  binarySearch(arr,s,mid-1, key);
    return ans;
  }

}

int main() {
  vector<int> v{10,20,40,60,70,90,99};
  int target = 99;

  int n = v.size();
  int s = 0;
  int e = n-1;
  int ans = binarySearch(v, s, e, target );

  cout << "Answer is: " << ans << endl;

  return 0;
}