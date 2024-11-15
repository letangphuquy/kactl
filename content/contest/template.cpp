#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
using namespace std;
// R.I.P. zipdang04, Yucy, Phong, Vu. xq cute <3 (indeed!)
#define rep(i, a, b) for(int i = a; i < (b); ++i) 
#define all(x) begin(x), end(x) // better reading
#define sz(x) (int(size(x)))
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
template<class X, class Y> long long random(X l, Y r) {
	return uniform_int_distribution<long long>(l,r)(rng);
}
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cin.exceptions(cin.failbit);
}
