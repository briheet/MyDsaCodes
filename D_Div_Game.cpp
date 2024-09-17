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
    ll ans = 0;
    for(ll i = 2; i * i <= n; i++) {
        ll num = 0;
        while(n % i == 0) {
            num++;
            n /= i;
        }
        for(ll j = 1; ; j++) {
            if(num >= j) {
                num -= j;
                ans++;
            } else break;
        }
    }   

    if(n != 1) ans++;
    cout << ans << endl; 
    
  

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