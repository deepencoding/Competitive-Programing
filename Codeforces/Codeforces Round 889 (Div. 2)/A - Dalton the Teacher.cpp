#include <bits/stdc++.h>
using namespace std;

void happy(int n, vector<int>& p)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i] == i+1)
        {
            res++;
        }
    }
    cout << (res+1)/2 << "\n";
}

int main()
{
    int test;
    cin >> test;
    for (;test--;)
    {
        int n;
        cin >> n;
        vector<int> p;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            p.push_back(temp);
        }
        happy(n,p);
    }
    return 0;
}
