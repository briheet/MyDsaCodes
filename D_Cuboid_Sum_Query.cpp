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

    ll n; cin>>n;  
    vector a(n, vector(n, vector(n, 0)));
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            for(ll k = 0; k < n; k++) {
                cin>>a[i][j][k];
            }
        }
    }

    vector sum(n+1, vector(n+1, vector(n+1, 0LL)));

    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            for(ll k = 0; k < n; k++) {
                    sum[i + 1][j + 1][k + 1] =
                    sum[i][j + 1][k + 1] + sum[i + 1][j][k + 1] +
                    sum[i + 1][j + 1][k] - sum[i][j][k + 1] - sum[i][j + 1][k] -
                    sum[i + 1][j][k] + sum[i][j][k] + a[i][j][k];
            }
        }
    }

    ll q; cin>>q;

    for(ll i = 0; i < q; i++) {
        ll lx, rx, ly, ry, lz, rz; cin>>lx>>rx>>ly>>ry>>lz>>rz;
        lx--; ly--; lz--;
                cout << sum[rx][ry][rz] - sum[lx][ry][rz] - sum[rx][ly][rz] -
                    sum[rx][ry][lz] + sum[lx][ly][rz] + sum[lx][ry][lz] +
                    sum[rx][ly][lz] - sum[lx][ly][lz]
             << "\n";
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