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

   ll n, m; cin>>n>>m;
    vector<vector<ll>> adj(n+1);
    vector<ll> dist(n+1, LLONG_MAX);
    vector<ll> parent(n+1, 0);

    for(ll i = 0; i < m; i++) {
        ll a, b; cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    
    queue<ll> q;
    dist[1] = 0;
    q.push(1);
    while(!q.empty()) {
        auto v = q.front();
        q.pop();

        for(auto t: adj[v]) {
            if(dist[t] == LLONG_MAX) {
                dist[t] = dist[v] + 1;
                parent[t] = v;
                q.push(t);
            }
        }
    }

    if(dist[n] == LLONG_MAX) {
        cout << "IMPOSSIBLE" << endl;
        return;
    }


    cout << dist[n] + 1 << endl;
    vector<ll> v{n};
    while(v.back() != 1) {
        v.pb(parent[v.back()]);
    }
    reverse(all(v));
    for(auto i: v) {
        cout << i << " ";
    }
    cout << endl;

  

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