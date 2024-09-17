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
    vector<string> a(n);

    for(ll i = 0; i < n; i++) {
        cin>>a[i];
    }    

    for(ll i = 1; i < n-1; i++) {
        if(a[i] == "sweet" && a[i-1] == "sweet") {
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
  

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