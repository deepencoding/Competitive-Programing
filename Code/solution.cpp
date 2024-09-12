// deepencoding
#include <bits/stdc++.h>
using namespace std;

// Overloaded Operators
// Operator overload << (std::cout)
template <typename T>
ostream& operator<<(ostream& os, const vector<T>& v){
    for(unsigned i = 0; i < v.size(); i++){
        os << v[i];
        if (i != v.size()-1)
            os << " ";
    }
    return os;
}

template<typename A, typename B>
ostream& operator<<(ostream &os, const pair<A, B> &p) {
    return os << p.first << " " << p.second;
}

// Operator overload >> (std::cin)
template <typename T>
std::istream &operator>>(std::istream &is, std::vector<T> &v){
    for(unsigned i = 0; i < v.size(); i++)
    {
        is >> v[i];
    }
    return is;
}

// Debug
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifndef ONLINE_JUDGE
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

// Shortners
#define ll     int64_t
#define pb     push_back
#define all(v) (v).begin(), (v).end()
#define sz(a)  (size_t)(a).size()

// Containers
#define vi    vector<ll>
#define mii   map<ll,ll>
#define mmii  multimap<ll,ll>
#define mci   map<char,ll>
#define mmci  multimap<char,ll>
#define vvi   vector<vector<ll>>
#define vpii  vector<pair<ll, ll>>
#define vb    vector<bool>
#define vs    vector<string>
#define pii   pair<ll, ll>
#define si    set<ll>
#define sc    set<char>
#define msc   multiset<char>
#define pqmax priority_queue<ll> // max heap
#define pqmin priority_queue<ll,vi,greater<ll>> // min heap
#define msi   multiset<ll>


// Functionality
#define rep(i, begin, end)      for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define rep_j(i, begin, end, j) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += j - (2*j) * ((begin) > (end)))
#define setbits(x)              __builtin_popcountll(x) // count number of set bits
#define zerobits(x)             __builtin_ctzll(x) // count number of zero bits
#define ldzrobits(x)            __builtin_clzll(x) // count number of leading zero bits
#define trzrobits(x)            __builtin_ctzll(x) // count number of trailing zero bits
#define parity(x)               __builtin_parityll(x) // Returns 1 if the number has odd parity (odd number of set bits) else it returns 0
#define rng_init                mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define rng_seed(x)             mt19937 rng(x); // generate random numbers
template<typename S, typename T> void smax(S& a, const T& b) { if (a < b) a = b; }
template<typename S, typename T> void smin(S& a, const T& b) { if (a > b) a = b; }


// Constants
const ll M = 1e9+7;
const ll N = 2e5+5;
const ll inf = 1e18+7;

// Snip here

// Solution
static rng_init;
void solve() {
    int n; cin >> n;
    cout << n*2;
}

// Driver Code
int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
        cout << endl;
    }
    return 0;
}