#include <bits/stdc++.h>
using namespace std; // Hello zipdang04, Yucy, lnba and xquin
#define rep(i, a, b) for(int i = a; i < (b); ++i) 
#define all(x) begin(x), end(x) // better reading
#define sz(x) (int(size(x)))
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
template<class X, class Y> long long random(X l, Y r) {
	return uniform_int_distribution<long long>(l,r)(rng);
}
