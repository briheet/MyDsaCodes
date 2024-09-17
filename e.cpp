#include <bits/stdc++.h>
using namespace std;

#define ll        long long
#define all(x)    x.begin(), x.end()
#define pb        push_back
#define rot(x,k)  x.begin(), x.begin()+k, a.end()

const ll MOD = 998244353;
const int INF = (int)4e18;
const int n1 = 1e9 + 7;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

ll maxi = 0;

inline void test_case() {
    
    ll n, m; cin>>n>>m;

    vector<vector<ll>> a(n, vector<ll>(m));
    vector<vector<bool>> visited(n, vector<bool>(m));
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            cin>>a[i][j];
        }
    }

    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            if(!visited[i][j]) {
                ll count = 0;
                conectedcomp(a, visited, count);
            }
        }
    }

    


   

}


 

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif        
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case_number = 1;
    cin >> test_case_number;
    while (test_case_number--)
        test_case();

    return 0;
}