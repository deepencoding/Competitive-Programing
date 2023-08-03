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
	int n, k;
	cin >> n >> k;
	vi a(n);
	rep(i,0,n) cin >> a[i];
	sort(a.begin(), a.end());
	int maxval = 1;
	int i = 0;
	int j = 0;
	for(; j < n-1; j++){ //3, 1 3 5 12 12 17 17 20
		if (a[j+1] - a[j] <= k){
			continue;
		}else{
			maxval = max(maxval, j-i+1);
			i = j+1;
		}
	}
	maxval = max(maxval, j-i+1);
    cout << n - maxval << endl;
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
