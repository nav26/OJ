#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define fto(i, s, e) for(int i = (s); i <= (e); ++i)
#define fto1(i, s, e) for(int i = (s); i < (e); ++i)
#define fdto(i, s, e) for(int i = (s); i >= (e); --i)
#define fit(it, a) for(auto it = (a).begin(); it != (a).end(); ++it)
#define fat(i, a) for(auto i : (a))

#define bc __builtin_popcountll
#define y1 ansdj
#define endl '\n'

#define ll long long
#define ii pair<int, int>
#define pll pair<ll, ll>
#define x first
#define y second
#define sz(v) int((v).size())
#define all(v) (v).begin(), (v).end()

template<class T, class Cmp = less<T>> using oss = tree<T, null_type, Cmp, rb_tree_tag, tree_order_statistics_node_update>;

template<class T1, class T2> ostream& operator<<(ostream &os, pair<T1, T2> const &v) {
	return os << '(' << v.x << ", " << v.y << ')';
}

template<typename Type>
void bug(Type const &var) { cout << var << endl; }

template<typename Type, typename... Args>
void bug(Type const &var, Args const &... args) {
	cout << var << ' ';
	bug(args...);
}

double const pi = acos(-1);
#define oo 1000000007
#define OO 1000000000000000003LL
int const maxn = 3e3+3;

int n;
int a[maxn];
int cnt[maxn][maxn];

void _main() {
	cin >> n;
	fto (i, 1, n) fto (j, 1, n) cnt[i][j] = 0;
	fto (i, 1, n) cin >> a[i];
	ll ans = 0;
	fto (i, 1, n) {
		fto (j, i+1, n) ans += cnt[a[i]][a[j]];
		fto (j, 1, i-1) ++cnt[a[j]][a[i]];
	}
	bug(ans);
}

int main() {
	#ifdef KITTENS
		freopen("main.inp", "r", stdin);
		freopen("main.out", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

	int t = 1;
	cin >> t;
	while (t--) {
		_main();
	}

	#ifdef KITTENS
		cerr << 0.001*clock() << endl;
	#endif
	return 0;
}
