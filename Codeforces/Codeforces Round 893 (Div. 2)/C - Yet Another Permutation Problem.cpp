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
    int n;
    cin >> n;
    vi a(n);
    
    // TLE
    
    //rep(i, 0, n){
		//a[i] = i+1;
	//}
	//int maxscore = 0;
	//vi res(n);
	
	//do{
		//unordered_set<int> d;
		//rep(i, 1, n+1){
			//d.insert(__gcd(a[i-1], a[(i%n)]));
		//}
		//if (maxscore < (int) d.size()){
			//maxscore = (int) d.size();
			//res = a;
		//}
		
		//if(maxscore == (n/2)) break;
	//} while (next_permutation(all(a)));
	
	int curr = 0;
	for (int i = 1; i <= n; i += 2) {
		for (int j = i; j <= n; j *= 2) {
			a[curr++] = j;
		}
	}
    
    rep(i,0,n){
		cout << a[i] << " ";
	}
	cout << endl;
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
