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
    int n, m;
    cin >> n >> m;
    vi a(n), b(m);
    rep(i, 0, n) cin >> a[i];
    rep(i, 0, m) cin >> b[i];
    /*
    vi temp(n);
    vi res(m);
    int xor_of_a = 0;
    rep(i, 0, m){
		rep(j, 0, n){
			temp[j] = a[j]|b[i];
		}
		rep(j,0,n){
			xor_of_a ^= temp[j];
		}
		res[i] = xor_of_a;
	}
	sort(all(res));
	cout << res[0] << ' ' << res[m] << endl;*/
	
	///*
    int xorr = 0;
    for(auto it:a) xorr^=it;
    int orr = 0;
    for(auto it:b) orr|=it;

    int a1=0,a2=0;

    if(n&1)
    {
        a2=xorr;
        for(int i=0;i<32;i++)
        {
            if( xorr&(int)(pow(2,i)) || orr&(int)(pow(2,i)) )
                a1|=((int)pow(2,i));
        }
    }
    else
    {
        a1=xorr;
        for(int i=0;i<32;i++)
        {
            if( (!(orr&(int)(pow(2,i)))) &&  (xorr&(int)(pow(2,i))) )
                a2|=((int)pow(2,i));
        }
    }
    cout<<a2<<" "<<a1<<endl;
    //*/
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
