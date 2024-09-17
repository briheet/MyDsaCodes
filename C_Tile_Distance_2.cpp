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

    ll sx, sy; cin>>sx>>sy;
    ll tx, ty; cin>>tx>>ty;

    if((sx+sy) % 2 == 1) {
        --sx;
    }

    if((tx+ty) % 2 == 1) {
        --tx;
    }

    ll dx = abs(sx-tx);
    ll dy = abs(sy-ty);

    cout << (dy + max(dx, dy))/2 << endl;
    
    



  

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