#include <bits/stdc++.h>

#define range(it, a, b) for (ll it = a; it < b; it++)
#define all(x) begin(x), end(x)
#define ll long long
#define ull unsigned long long
#define INF64 ((ll)1 << 60)
#define INF32 (1 << 30)
#define uset unordered_set
#define umap unordered_map
#define pqueue priority_queue

using namespace std;

void setio(string name) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  if (name.size()) {
    freopen((name + ".in").c_str(), "r", stdin);
    freopen((name + ".out").c_str(), "w", stdout);
  }
}

struct MinSegmentTree {
  struct Node {
    ll l, r, val;
    Node *next_left;
    Node *next_right;

    ll get_left() { return (l + r) / 2; }
    ll get_right() { return get_left() + 1; }
  };

  Node *root = new Node();
  vector<ll> &arr;

  MinSegmentTree(vector<ll> &a) : arr(a) {
    root->l = 0;
    root->r = a.size() - 1;
    build_tree(root);
  }

  void build_tree(Node *node) {
    if (node->l == node->r) {
      node->val = arr[node->l];
      return;
    }

    node->next_left = new Node();
    node->next_left->l = node->l;
    node->next_left->r = node->get_left();
    build_tree(node->next_left);

    node->next_right = new Node();
    node->next_right->l = node->get_right();
    node->next_right->r = node->r;
    build_tree(node->next_right);

    node->val = min(node->next_left->val, node->next_right->val);
  }

  ll _get(ll l, ll r, Node *node) {
    if (node->l == l && node->r == r)
      return node->val;

    ll r1 = (l <= node->get_left()
                 ? _get(l, min(node->get_left(), r), node->next_left)
                 : INF64);
    ll r2 = (r >= node->get_right()
                 ? _get(max(node->get_right(), l), r, node->next_right)
                 : INF64);
    return min(r1, r2);
  }

  ll get(ll l, ll r) { return _get(l, r, root); }
};

ll n, q;
vector<ll> a;

void solve() {
  cin >> n >> q;
  a.resize(n);
  range(i, 0, n) cin >> a[i];
  MinSegmentTree st(a);

  ll l, r;
  while (q--) {
    cin >> l >> r;
    l--;
    r--;
    cout << st.get(l, r) << '\n';
  }
}

int main() {
  setio("");
  ll t = 1;
  // cin >> t;
  while (t--)
    solve();
}
