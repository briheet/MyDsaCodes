#include <bits/stdc++.h>
#include <vector>
using namespace std;

using P = pair<int, int>;
using ll = long long;
#define all(x) x.begin(), x.end()
#define MOD 1000000007
#define rep(i, n) for (int i = 0; i < (n); ++i)

int timer = 0;

void dfs(int node, vector<vector<int>> &graph, vector<int> &tout,
         vector<bool> &vis) {
  vis[node] = true;
  for (int u : graph[node]) {
    if (vis[u])
      continue;
    dfs(u, graph, tout, vis);
  }

  tout[node] = timer;
  timer++;
}

inline void test_case() {
  int n, k;
  cin >> n >> k;
  vector<vector<int>> a(k, vector<int>(n, 0));
  for (int i = 0; i < k; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
      a[i][j] -= 1;
    }
  }

  vector<vector<int>> graph(k);
  graph.assign(n + 1, {});
  for (int i = 0; i < k; i++) {
    for (int j = 1; j < n - 1; j++) {
      graph[a[i][j]].push_back(a[i][j + 1]);
    }
  }

  vector<int> tout(n, -1);
  vector<bool> vis(n);

  for (int i = 0; i < n; i++) {
    if (tout[i] == -1) {
      dfs(i, graph, tout, vis);
    }
  }

  for (int i = 0; i < k; i++) {
    for (int j = 1; j < n - 1; j++) {
      if (tout[a[i][j]] < tout[a[i][j + 1]]) {
        cout << "NO" << endl;
        return;
      }
    }
  }

  cout << "YES" << endl;
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
