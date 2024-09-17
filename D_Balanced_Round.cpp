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

    ll n, k; cin>>n>>k;
    vector<ll> a(n, 0);
    for(auto &i: a) {
        cin>>i;
    }    

    sort(all(a));   
    ll count = 1;
    ll maxi = 0;
    bool th = true;
    for(ll i = 1; i < n; i++) {
        if(a[i] - a[i-1] <= k) {
            count++;
        }else {
            maxi = max(maxi, count);
            count = 1;
            th = false;
        }
    }
    maxi = max(maxi, count);

    if(th) {
        cout << 0 << endl;
        return;
    }

    cout << n - maxi << endl;
  

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