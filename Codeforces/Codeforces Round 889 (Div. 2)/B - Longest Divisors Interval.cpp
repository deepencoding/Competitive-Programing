// TLE
#include <bits/stdc++.h>
using namespace std;

void div(long long n)
{
    if (n%2 != 0)
    {
        cout << 1 << "\n";
        return;
    }
    long long window = 1;
    vector <long long> result;
    long long i = 1;
    while(i*i <= n) {
        if(n % i == 0) {
            result.push_back(i);
            if(n/i != i) {
                result.push_back(n/i);
            }
        }
        i++;
    }
    sort(result.begin(), result.end());
    i = 0;
    for (int j = 1; j < result.size(); j++)
    {
        window = max(window, j-i);
        if (result[j-1]+1 == result[j])
        {
            continue;
        }
        i = j;
    }
    cout << window << "\n";
}

int main()
{
    int test;
    cin >> test;
    for (;test--;)
    {
        long long n;
        cin >> n;
        div(n);
    }
    return 0;
}
