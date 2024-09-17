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

bool customComparator(const pair<ll, ll>& a, const pair<ll, ll>& b) {
    if (a.first == b.first) {
        return a.second > b.second;  // Sort by the second element if the first elements are equal
    }
    return a.first > b.first;  // Otherwise, sort by the first element
}

inline void test_case() {

    	ll n, x, y;
	cin >> n >> x >> y;
	vector<ll> a(n), b(n);
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) cin >> b[i];
	sort(a.begin(), a.end(), greater<>());
	sort(b.begin(), b.end(), greater<>());
	int c1 = 0, c2 = 0;
	ll sx = 0, sy = 0;
	for (int i = 0; i < n; i++) {
		sx += a[i];
		c1++;
		if (sx > x) break;
	}
	for (int i = 0; i < n; i++) {
		sy += b[i];
		c2++;
		if (sy > y) break;
	}
	cout << min(c1, c2) << '\n';

    
    
  

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