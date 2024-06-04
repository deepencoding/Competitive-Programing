// deepencoding

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

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
#define   umii                 gp_hash_table<int,int,chash> // instead of unordered_map for better performance
#define   umivi                gp_hash_table<int,vector<int>,chash> // instead of unordered_map for better performance
#define   umpi                 gp_hash_table<pii,int,chash> // instead of unordered_map for better performance
#define   mci                  map<char,int>
#define   mmci                 multimap<char,int>
#define   umci                 gp_hash_table<char,int,chash> // instead of unordered_map for better performance
#define   umcvi                gp_hash_table<char,vector<int>,chash> // instead of unordered_map for better performance
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
#define   rep(var, l, r)       for (int var = l; var < r; var++) // (i, 0, n) Not inclusive on the right side
#define   revrep(var, r, l)    for (int var = r; var >= l; var--) // (i, n, 0) Inclusive
#define   setbits(x)           __builtin_popcountll(x) // count number of set bits
#define   zerobits(x)          __builtin_ctzll(x) // count number of zero bits
#define   ldzrobits(x)         __builtin_clzll(x) // count number of leading zero bits
#define   trzrobits(x)         __builtin_ctzll(x) // count number of trailing zero bits
#define   parity(x)            __builtin_parityll(x) // Returns 1 if the number has odd parity (odd number of set bits) else it returns 0
#define   watch(x)             cerr << "\n" << (#x) << " is " << (x) << endl // print a var to stderr stream (invis to ONLINE JUDGE)
#define   rng_init             mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define   rng_seed(x)          mt19937 rng(x); // generate random numbers

template<typename S, typename T> void smax(S& a, const T& b) { if (a < b) a = b; }
template<typename S, typename T> void smin(S& a, const T& b) { if (a > b) a = b; }

// Overloaded Operators

// Custom Hashes
struct chash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }



    size_t operator()(int x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
    size_t operator()(char x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64((uint64_t)x + FIXED_RANDOM);
    }
    size_t operator()(pii x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64((uint64_t)(x.first* 31 + x.second) + FIXED_RANDOM);
    }
};


// Operator overload << (std::cout)
template <typename T>
ostream& operator<<(ostream& os, const vector<T>& v){
    for(unsigned i = 0; i < v.size(); i++){
        os << "{ ";
        os << v[i];
        if (i != v.size()-1)
            os << " ";
    }
    os << " }";
    return os;
}

template<typename A, typename B>
ostream& operator<<(ostream &os, const pair<A, B> &p) {
    return os << '(' << p.first << ", " << p.second << ')';
}

// Debug
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

// Operator overload >> (std::cin)
template <typename T>
std::istream &operator>>(std::istream &is, std::vector<T> &v){
    for(unsigned i =0;i < v.size();i++)
    {
        is >> v[i];
    }
    return is;
}

// Solution
void solve() {
    int n, k;
    cin >> n >> k;
    vi a(n);
    cin >> a;
    
    
    
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
