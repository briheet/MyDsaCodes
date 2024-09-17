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

const int MAX_N = 50;
int row_n, col_n;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};


bool valid(int i, int j) {
    return (i >= 0 && i < row_n && j >= 0 && j < col_n);
}

inline void test_case() {

    cin>>row_n>>col_n;
    vector <vector <char>> grid(row_n, vector <char> (col_n));
    //cout << row_n << col_n << endl;

    for(int i = 0; i < row_n; i++) {
        for(int j = 0; j < col_n; j++) {
            cin>>grid[i][j];
        }
    }
  
    for(int i = 0; i < row_n; i++) {
        for(int j = 0; j < col_n; j++) {
            if(grid[i][j] == 'B') {
                for(int k = 0; k < 4; k++) {
                    auto v = make_pair(i+dx[k], j+dy[k]);
                    if(valid(v.first, v.second) && grid[v.first][v.second] == '.') {
                        grid[v.first][v.second] = '#';
                    }
                }
            }
        }
    }    



    queue<pair<int, int>> q;
    bool visited[row_n + 5][col_n + 5];
    memset(visited, false, sizeof(visited));
    if (grid[row_n-1][col_n-1] == '.') {
      q.push({row_n-1, col_n-1});
      visited[row_n-1][col_n-1] = true;
    }

    while(!q.empty()) {
        auto v = q.front();
        q.pop();

        for(int k = 0; k < 4; k++) {
            auto u = make_pair(v.first + dx[k], v.second + dy[k]);
            if(valid(u.first, u.second) && !visited[u.first][u.second] && grid[u.first][u.second] != '#') {
                q.push(u);
                visited[u.first][u.second] = true;
            }
        }
    }

    bool flag = true;
    for(int i = 0; i < row_n; i++) {
        for(int j = 0; j < col_n; j++) {
            if((grid[i][j] == 'G' && !visited[i][j]) or (grid[i][j] == 'B' && visited[i][j])) {
                flag = false;
                break;
            }
        }
    }

    if(flag == true) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }


  

}


 

signed main() {
      
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case_number = 1;
    cin >> test_case_number;
    while (test_case_number--)
        test_case();

    return 0;
}