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
    if(n == 1) {
        cout << 1 << endl;
        cout << 1 << " " << 2 << endl;
        return;
    }    

    //cout << n-1 << endl;
    ll l = 1; ll r = 3*n;
    cout << n/2 + n%2 << endl;
    while(l < r) {
        cout << l << " " << r << endl;
        l += 3;
        r -= 3;
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