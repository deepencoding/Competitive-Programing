// deepencoding

#include <bits/stdc++.h>
using namespace std;

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
    int n, c;
    cin >> n >> c;
    // vi s(n);
    long double sum = 0, arsq = 0;
    rep(i, 0 , n){
		int temp;
		cin >> temp; // s[i];
		sum += temp;
		arsq += temp*temp;
	}
	int w = (-4 * sum + sqrtl(16 * sum * sum + 16 * n * (c - arsq))) / (8 * n);
	cout << w << endl;	
}

int32_t main() {
    // ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
