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

    char sa, sb, sc;
    ll a = 0, b = 0, c = 0; cin>>sa>>sb>>sc;

    if(sa == '<') {
        b++;
    } else {
        a++;
    }

    if(sb == '<') {
        c++;
    } else {
        a++;
    }

    if(sc == '<') {
        c++;
    } else {
        b++;
    }

    if (a == 1) {
        cout << "A" << endl; 
    } else if (b == 1) {
        cout << "B" << endl; 
    } else {
        cout << "C" << endl;
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