#include <bits/stdc++.h>
using namespace std;

#define ll        long long
#define all(x)    x.begin(), x.end()
#define pb        push_back
#define rot(x,k)  x.begin(), x.begin()+k, a.end()

#define PI        3.141592653589793238
#define INF       LONG_LONG_MAX
#define MOD       1000000007


mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
const int MAX_N = 1000;
char grid[MAX_N][MAX_N];
bool visited[MAX_N][MAX_N];
int row_n, col_n;
int curr_size = 0;

void floodfill (int i, int j) {
    if(i < 0 || i >= row_n || j < 0 || j >= col_n || visited[i][j] == true || grid[i][j] != '.') {
        return;
    }

    visited[i][j] = true;

    floodfill(i+1, j);
    floodfill(i-1, j);
    floodfill(i, j+1);
    floodfill(i, j-1);

    return;
}


inline void test_case() {

    cin>>row_n>>col_n;

    for(int i = 0; i < row_n; i++) {
        for(int j = 0; j  <col_n; j++) {
            cin>>grid[i][j];
            visited[i][j] = false;
        }
    }

    for(int i = 0; i < row_n; i++) {
        for(int j = 0; j < col_n; j++) {
            if(!visited[i][j] && grid[i][j] == '.') {
                curr_size++;
                floodfill(i, j);
            }
        }
    }

    cout << curr_size << endl;


  

}


 

signed main() {
      
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case_number = 1;
 //   cin >> test_case_number;
    while (test_case_number--)
        test_case();

    return 0;
}