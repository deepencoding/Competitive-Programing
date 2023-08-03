#include <bits/stdc++.h>
using namespace std;


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
    int n = 8;
    vs a(n);
    rep(i, 0, n)
		cin >> a[i];
		
	string ans;
	 rep(i, 0, n){
		 rep(j, 0, n){
			 if (a[i][j] != '.')
				 ans += a[i][j];
		 }
	 }
	 
	 cout << ans << endl;
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
