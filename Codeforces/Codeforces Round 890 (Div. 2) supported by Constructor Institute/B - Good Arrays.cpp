// deepencoding

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define float long double
#define all(v) v.begin(), v.end()
#define sz(a) (int)a.size()
#define M 1e9+7
#define endl "\n"
#define int long long int
#define vi vector<int>
#define vvi vector<vector<int>>
#define vb vector<bool>
#define vs vector<string>
#define pi pair<int, int>
#define si set<int>
#define rep(var, l, r) for (int var = l; var < r; var++)


void solve() {
    int n; cin >> n;
    vi a(n);
    int sum = 0;
    int count = 0;
    rep(i,0,n){
		cin >> a[i];
		sum += a[i];
		if (a[i] == 1) count++;
	}
	
	if (sum >= count + n && n > 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
