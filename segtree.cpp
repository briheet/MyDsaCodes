#include <bits/stdc++.h>
using namespace std;

using P = pair<int, int>;
using ll = long long;
#define all(x) x.begin(), x.end()
#define MOD 1000000007
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define int long long
constexpr int MAXN = 2e5 + 5;
int n, t[4 * MAXN];

void build(vector<ll> &a, int v, int tl, int tr) {
  if (tl == tr) {
    t[v] = a[tl];
  } else {
    int tm = (tl + tr) / 2;
    build(a, v * 2, tl, tm);
    build(a, v * 2 + 1, tm + 1, tr);
    t[v] = t[v * 2] + t[v * 2 + 1];
  }
}

int sum(int v, int tl, int tr, int l, int r) {
  if (l > r)
    return 0;
  if (l == tl && r == tr) {
    return t[v];
  }
  int tm = (tl + tr) / 2;
  return sum(v * 2, tl, tm, l, min(r, tm)) +
         sum(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);
}

void update(int v, int tl, int tr, int pos, int new_val) {
  if (tl == tr) {
    t[v] = new_val;
  } else {
    int tm = (tl + tr) / 2;
    if (pos <= tm)
      update(v * 2, tl, tm, pos, new_val);
    else
      update(v * 2 + 1, tm + 1, tr, pos, new_val);
    t[v] = t[v * 2] + t[v * 2 + 1];
  }
}

inline void test_case() {
  ll n, q;
  cin >> n >> q;
  vector<ll> a(n);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }

  build(a, 1, 0, n - 1);
  for (ll i = 0; i < q; i++) {
    ll l;
    cin >> l;
    if (l == 1) {
      ll x, y;
      cin >> x >> y;
      x--;
      update(1, 0, n - 1, x, y);
    } else {
      ll x, y;
      cin >> x >> y;
      x--;
      y--;
      cout << sum(1, 0, n - 1, x, y) << endl;
    }
  }
}

signed main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int test_case_number = 1;
  // cin >> test_case_number;
  while (test_case_number--)
    test_case();
  return 0;
}
