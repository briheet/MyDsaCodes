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

ll ok[100005];

inline void test_case() {

    ll n; cin>>n;

    ll prod = 1;
    for(ll i = 1; i < n; i++) {
        if(__gcd(i, n) == 1) {
            ok[i] = 1;
            prod = (prod * i) % n;
        }
    }
    if(prod != 1) {
        ok[prod] = 0;
    }

    cout << count(ok+1, ok+n+1, 1) << endl;
    for(ll i = 1; i < n; i++) {
        if(ok[i]) {
            cout << i << " ";
        }
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