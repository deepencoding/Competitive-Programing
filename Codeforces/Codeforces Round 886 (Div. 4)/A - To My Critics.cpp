#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool ismorethanten(vector<int>& n)
{
	for (unsigned i = 0; i < n.size(); i++)
	{
		for (unsigned j = i + 1; j < n.size(); j++)
		{
			if (n[i] + n[j] >= 10) { return true; }
		}
	}
	return false;
	
}

int main()
{
	int test;
	cin >> test;
	vector<int> a;
	while (test != 0)
	{
		int temp;
		for (int i = 0; i < 3; i++)
		{
			cin >> temp;
			a.push_back(temp);
		}
		bool output = ismorethanten(a);
		if (output) { cout << "YES" << "\n"; }
		else { cout << "NO" << "\n"; }
		a.clear();
		test--;
	}
	return 0;
}
