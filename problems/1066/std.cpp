#include <bits/stdc++.h>

//#ifdef LOCAL
    //#include "debug_print.hpp"
    //#define debug(...) debug_print::multi_print(#__VA_ARGS__, __VA_ARGS__)
//#else
    //#define debug(...) (static_cast<void>(0))
//#endif

using namespace std;

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<long long>;
using vb = vector<bool>;
using vd = vector<double>;
using vc = vector<char>;
using vvi = vector<vector<int>>;
using vvll = vector<vector<long long>>;
using vvc = vector<vector<char>>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

template<typename T>
using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;
template<typename T>
using graph = vector<vector<pair<T, int>>>;    // pair of weight and vertex

template<typename T>
T pow_k(T a, T k) {
    T r { 1 };
    while (k) {
        if (k & 1) { r *= a; }
        a *= a;
        k >>= 1;
    }
    return r;
}
template<typename T>
constexpr bool chmax(T& a, const T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
template<typename T>
constexpr bool chmin(T& a, const T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

void solve_0() {

    int N;
    cin >> N;

    vector<vector<pii>> G(N);
    for (int i = 0; i < N; ++i) {
        int A;
        cin >> A;
        for (int j = 0; j < A; ++j) {
            int x, y;
            cin >> x >> y;
            --x;
            G[i].push_back({ x, y });
        }
    }

    int ans = -1;
    for (int bit = 0; bit < (1 << N); ++bit) {
        const int cand = __builtin_popcount(bit);

        // trial
        bool flag = true;
        for (int i = 0; i < N; ++i) {

            if (!flag) { break; }
            if (!((1 << i) & bit)) { continue; }

            for (const auto& [x, y] : G[i]) {
                const int z = (1 << x) & bit ? 1 : 0;
                if (z != y) {
                    flag = false;
                    break;
                }
            }
        }
        if (flag) { chmax(ans, cand); }
    }
    cout << ans << endl;
}
void solve_1() {
}
void solve_2() {
}
int main() {

    solve_0();
    // solve_1();
    // solve_2();
}
