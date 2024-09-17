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
int previousStep[1000][1000];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
string stepDir = "URDL";

inline void test_case() {

    cin>>row_n>>col_n;
    pair<int, int> begin, end;
    for(int i = 0; i < row_n; i++) {
        for(int j = 0; j  <col_n; j++) {
            cin>>grid[i][j];
            visited[i][j] = false;
            if(grid[i][j] == 'A') {
                begin.first = i;
                begin.second = j;
            }else if(grid[i][j] == 'B') {
                end.first = i;
                end.second = j;
            }
        }
    }



    queue<pair<int, int>> q;
    q.push(begin);

    visited[begin.first][begin.second] = true;

    while(!q.empty()) {
        auto u = q.front();
        q.pop();

        for(int i = 0; i < 4; i++) { //four directions
            auto v = make_pair(u.first + dx[i], u.second + dy[i]);
            if(v.first < 0 || v.first >= row_n || v.second < 0 || v.second >= col_n || visited[v.first][v.second] == true || grid[v.first][v.second] == '#') {
                continue;
            }
            visited[v.first][v.second] = true;
            previousStep[v.first][v.second] = i;
            q.push(v);
        }
    }

    if(visited[end.first][end.second] == true) {
        cout << "YES" << endl;
        vector<int> steps;
        while(end != begin) {
            int p = previousStep[end.first][end.second];
            steps.pb(p);

            end = make_pair(end.first - dx[p], end.second - dy[p]);
        }
        reverse(all(steps));

        cout << steps.size() << endl;
        for (char c : steps) { cout << stepDir[c]; }

		cout << endl;
    }else {
        cout << "NO" << endl;
    }




  

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