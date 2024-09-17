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

int N, M_G, M_H;
vector<vector<int>> G_adj, H_adj, cost;

long long calculate_cost(vector<int>& P) {
    long long total_cost = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int Gi_j = G_adj[i][j];
            int Hi_j = H_adj[P[i]][P[j]];
            
            if (Gi_j != Hi_j) {
                total_cost += cost[P[i]][P[j]];  // Add the cost of modifying the edge
            }
        }
    }
    return total_cost;
}

inline void test_case() {
    cin >> N >> M_G;
    G_adj.assign(N, vector<int>(N, 0));
    H_adj.assign(N, vector<int>(N, 0));
    cost.assign(N, vector<int>(N, 0));

    for (int i = 0; i < M_G; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;  // zero-indexed
        G_adj[u][v] = G_adj[v][u] = 1;
    }

    cin >> M_H;
    for (int i = 0; i < M_H; i++) {
        int a, b;
        cin >> a >> b;
        a--, b--;  // zero-indexed
        H_adj[a][b] = H_adj[b][a] = 1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> cost[i][j];
        }
    }


    vector<int> P(N);
    iota(P.begin(), P.end(), 0);  // Initialize with 0, 1, ..., N-1
    long long min_cost = INF;

    do {
        long long current_cost = calculate_cost(P);
        min_cost = min(min_cost, current_cost);
    } while (next_permutation(P.begin(), P.end()));

    cout << min_cost << endl;


  

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