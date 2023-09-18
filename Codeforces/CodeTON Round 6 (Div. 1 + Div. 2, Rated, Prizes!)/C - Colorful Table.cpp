// deepencoding

#include <bits/stdc++.h>
using namespace std;

// Macros

// Shortners
#define   M                    1e9+7
#define   endl                 "\n"
#define   int                  long long int
#define   pb                   push_back
#define   float                long double
#define   all(v)               v.begin(), v.end()
#define   sz(a)                (int)(a).size()
#define   inf                  1e18

// Containers
#define   vi                   vector<int>
#define   mii                  map<int,int>
#define   mmii                 multimap<int,int>
#define   umii                 unordered_map<int,int>
#define   mci                  map<char,int>
#define   mmci                 multimap<char,int>
#define   umci                 unordered_map<char,int>
#define   vvi                  vector<vector<int>>
#define   vb                   vector<bool>
#define   vs                   vector<string>
#define   pii                  pair<int, int>
#define   si                   set<int>
#define   usi                  unordered_set<int>
#define   msi                  multiset<int>
#define   sc                   set<char>
#define   msc                  multiset<char>
#define   usc                  unordered_set<char>
#define   pqmax                priority_queue<int> // max heap
#define   pqmin                priority_queue<int,vi,greater<int>> // min heap

// Functionality
#define   rep(var, l, r)       for (int var = l; var < r; var++) // Not inclusive on the right side
#define   revrep(var, r, l)    for (int var = r; var >= l; var--) // Inclusive
#define   setbits(x)           __builtin_popcountll(x)
#define   zerobits(x)          __builtin_ctzll(x)
#define   ldzrobits(x)         __builtin_clzll(x)
#define   trzrobits(x)         __builtin_ctzll(x)
#define   parity(x)            __builtin_parityll(x) // Returns 1 if the number has odd parity else it returns 0
#define   watch(x)             cerr << "\n" << (#x) << " is " << (x) << endl // print a var to stderr stream (invis to ONLINE JUDGE)

// Solution
void solve() { // 5 3 3
    int n, k;
    cin >> n >> k;
    vi a(n);
    rep(i, 0, n) cin >> a[i];
    
    /*
    // vvi b(n, vi(n));
    vvi col_pos(k, vi(4));
    rep(row, 0, k){
		col_pos[row][0] = n+1;
		col_pos[row][1] = -1;
		col_pos[row][2] = n+1;
		col_pos[row][3] = -1;
	}
    // int up = n+1, down = -1, left = n+1, right = -1;
    int sum = 0;
    rep(row, 0, n){
		rep(col, 0, n){
			// b[row][col] = min(a[row], a[col]);
			rep(i, 1, k+1){
				if (min(a[row], a[col]) == i){ // b[row][col]
					col_pos[i-1][0] = min(col_pos[i-1][0], row); // up
					col_pos[i-1][1] = max(col_pos[i-1][1], row); // down
					col_pos[i-1][2] = min(col_pos[i-1][2], col); // left
					col_pos[i-1][3] = max(col_pos[i-1][3], col); // right
				}
			}
		}
	}
	
	rep(i, 0, k){
		sum = (col_pos[i][1] - col_pos[i][0] + 1) + (col_pos[i][3] - col_pos[i][2] + 1);
		if (sum >= 0)
			cout << sum << ' ';
		else
			cout << 0 << ' ';
	}
	
	cout << '\n';
	*/
    
    // TLE
    //int up = n+1, down = -1, left = n+1, right = -1;
    //int sum = 0;
    
    //rep(i, 1, k+1){
		//rep(row, 0, n){
			//rep(col, 0, n){
				//if (b[row][col] == i){
					//up = min(up, row);
					//down = max(down, row);
					//left = min(left, col);
					//right = max(right, col);
				//}
			//}
		//}
		//sum = (down - up + 1) + (right - left + 1);
		//up = n+1, down = -1, left = n+1, right = -1;
		//if (sum >= 0)
			//cout << sum << ' ';
		//else
			//cout << 0 << ' ';
	//}
	
	// ReTry
    map<int,int> fir,sec;
    rep(i,0,n)
    {
        if(fir.find(a[i])==fir.end())
        fir[a[i]]=i;
    }
    revrep(i,n-1,0)
    {
        if(sec.find(a[i])==sec.end())
        sec[a[i]]=i;
    }
    sort(all(a));
    reverse(all(a));
    rep(i,0,n-1)
    {
        if(fir[a[i]]<=fir[a[i+1]])
        {
            fir[a[i+1]]=fir[a[i]];
        }
        if(sec[a[i]]>=sec[a[i+1]])
        {
            sec[a[i+1]]=sec[a[i]];
        }
    }
    vi ans;
    for(int i=1;i<=k;i++)
    {
        if(fir.find(i)==fir.end()) ans.pb(0);
        else ans.pb((sec[i]-fir[i]+1)*2);
    }
    rep(i, 0, (unsigned)ans.size()) cout<<ans[i]<<' ';
    cout << '\n';
}

// Driver Code
int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}
