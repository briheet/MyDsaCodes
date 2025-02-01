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

struct SegmentTree {
  struct Node {
    long long l, r, val;
    Node *next_left = nullptr;
    Node *next_right = nullptr;

    long long get_left() { return (l + r) / 2; }

    long long get_right() { return (l + r) / 2 + 1; }
  };

  Node *root = new Node;
  vector<long long> &arr;

  SegmentTree(vector<long long> &a) : arr(a) {
    root->l = 0;
    root->r = arr.size() - 1;
    build_tree(root);
  }

  void build_tree(Node *node) {
    if (node->l == node->r) {
      node->val = arr[node->l];
      return;
    }

    node->next_left = new Node;
    node->next_left->l = node->l;
    node->next_left->r = node->get_left();
    build_tree(node->next_left);

    node->next_right = new Node;
    node->next_right->l = node->get_right();
    node->next_right->r = node->r;
    build_tree(node->next_right);

    node->val = node->next_left->val + node->next_right->val;
  }

  long long _get(long long l, long long r, Node *node) {
    if (l == node->l && r == node->r) {
      return node->val;
    }
    long long res_l = (l <= node->get_left()
                           ? _get(l, min(node->get_left(), r), node->next_left)
                           : 0);
    long long res_r = (r >= node->get_right() ? _get(max(node->get_right(), l),
                                                     r, node->next_right)
                                              : 0);
    return res_l + res_r;
  }

  long long get(long long l, long long r) { return _get(l, r, root); }

  void _update(long long &i, long long &delta, Node *node) {
    node->val += delta;

    if (node->l == node->r)
      return;

    if (i <= node->get_left())
      _update(i, delta, node->next_left);
    else
      _update(i, delta, node->next_right);
  }

  void update(long long i, long long delta) { _update(i, delta, root); }
};

void setio(string name) {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  if (name.size()) {
    freopen((name + ".in").c_str(), "r", stdin);
    freopen((name + ".out").c_str(), "w", stdout);
  }
}

ll n, q;
vector<ll> arr;

void solve() {
  cin >> n >> q;
  arr.resize(n);
  range(i, 0, n) cin >> arr[i];
  SegmentTree st(arr);

  ll t, a, b;
  while (q--) {
    cin >> t >> a >> b;
    if (t == 1) {
      a--;
      ll delta = b - st.get(a, a);
      st.update(a, delta);
    } else {
      a--;
      b--;
      cout << st.get(a, b) << '\n';
    }
  }
}

int main() {
  setio("");
  ll t = 1;
  // cin >> t;
  while (t--)
    solve();
}
