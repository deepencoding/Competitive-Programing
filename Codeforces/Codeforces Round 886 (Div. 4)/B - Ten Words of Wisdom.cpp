#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int winner(vector<int>& a, vector<int>& b)
{
	int max_quality = INT_MIN;
	int max_quality_index = 0;
	for (unsigned i = 0; i < a.size(); i++)
	{
		if (a[i] <= 10)
		{
			if (b[i] > max_quality)
			{
				max_quality = b[i];
				max_quality_index = i;
			}
		}
	}
	return max_quality_index + 1;
	
}

int main()
{
	int test;
	cin >> test;
	

	while (test != 0)
	{
		vector<int> a;
		vector<int> b;
		int responses;
		cin >> responses;
		while (responses != 0)
		{
			int temp1;
			int temp2;
			cin >> temp1;
			a.push_back(temp1);
			cin >> temp2;
			b.push_back(temp2);
			responses--;
		}
		int output = winner(a,b);
		cout << output << "\n";
		test--;
	}
	return 0;
}
