#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) x.begin(), x.end()
#define pb push_back
#define rot(x, k) x.begin(), x.begin() + k, a.end()

const ll MOD = 998244353;
const int INF = (int)4e18;
const ll n1 = 1e9 + 7;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

long long binpow(long long a, long long b, long long m) {
  a %= m;
  long long res = 1;
  while (b > 0) {
    if (b & 1)
      res = res * a % m;
    a = a * a % m;
    b >>= 1;
  }
  return res;
}

long long binomialcoefficient(long long n, long long k) {
  double res = 1;
  for (long long i = 1; i <= k; ++i)
    res = res * (n - k + i) / i;
  return (res + 0.01);
}

void factorial() {
  fac[0] = 1;
  for (int i = 1; i <= MAXN; i++) {
    fac[i] = fac[i - 1] * i % MOD;
  }
}

void inverses() {
  inv[MAXN] = exp(fac[MAXN], MOD - 2, MOD);
  for (int i = MAXN; i >= 1; i--) {
    inv[i - 1] = inv[i] * i % MOD;
  }
}

inline void test_case() {}

signed main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  ios::sync_with_stdio(0);
  cin.tie(0);
  int test_case_number = 1;
  cin >> test_case_number;
  while (test_case_number--)
    test_case();

  return 0;
}
