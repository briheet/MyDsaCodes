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

    string s; cin>>s;

    string ans = "";

    for(ll i = 0; i < s.size(); i++) {
        if(s[i] == '|') {
            i++;
            while(s[i] != '|') i++;
        } else {
            ans += s[i];
        }
    }

    cout << ans << endl;
     
  

}


 

signed main() {
      
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case_number = 1;
    //cin >> test_case_number;
    while (test_case_number--)
        test_case();

    return 0;
}