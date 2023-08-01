#include <bits/stdc++.h>
using namespace std;

void func(int n, int k) {
    
    int ans = 0;
     
	for (int i = 1; i <= n; i++) {
		int second = n; //xth element where x is k
		int first = i; //fixing x-1th element where x is k-1
		bool valid_seq = true;
		for (int j = 0; j < k - 2; j++) {
			//for s_x and s_x-1, s_x-2 = s_x - s_x-1
			int fx = first;
			first = second - fx;
			second = fx;
			valid_seq = (first <= second) & (min(first, second) >= 0);
			if (!valid_seq) break;
		}
		if (valid_seq) ans++;
	}
	cout << ans << "\n";
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    
    while (T--) {
        int n,k;
        cin >> n >> k;
        func(n,k);
    }
    return 0;
}
