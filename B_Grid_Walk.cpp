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


inline void test_case() {

    vector<string> s;
    ll n, m; cin>>n>>m;
    ll x, y; cin>>x>>y;

    for(ll i = 0; i < n; i++) {
        string temp; cin>>temp;
        s.push_back(temp);
    }    
    string seq; cin>>seq;
        //cout << x << y << endl;
        x--; y--;
        // cout << seq << endl;
    for(ll i = 0; i < seq.size(); i++) {
        if(seq[i] == 'L' && y > 0 && s[x][y-1] != '#') {
            y--;
        } else if (seq[i] == 'R' && y + 1 < m && s[x][y+1] != '#') {
            y++;
        } else if (seq[i] == 'U' && x > 0 && s[x-1][y] != '#') {
            x--;
        } else if (seq[i] == 'D' && x + 1 < n && s[x+1][y] != '#') {
            x++;
        }
    }

    cout << x+1 << " " << y+1 << endl;


  

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