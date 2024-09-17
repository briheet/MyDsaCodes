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

    ll num; cin>>num;

    set<ll> st = {	0, 1, 2, 7, 11, 101, 111, 1001, 2201, 10001, 10101, 11011, 100001, 101101, 110011, 1000001, 1001001, 1100011, 10000001, 10011001, 10100101, 11000011, 100000001, 100010001, 100101001, 101000101, 110000011, 1000000001, 1000110001};
    ll ans = 0;
    for(auto i: st) {
        if(i*i*i <= num) {
            ans = i;
        } else {
            break;
        }
    }

    cout << ans*ans*ans << endl;

  

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