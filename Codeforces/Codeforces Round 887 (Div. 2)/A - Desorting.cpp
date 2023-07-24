#include <iostream>
#include <vector>
#include <limits.h>
 
int notsort(std::vector<int>& nums)
{
	unsigned i = 0,
			 j = 1;
	int curr_op = 0;
	int min_op = INT_MAX;
	while(j < nums.size())
	{
		if (nums[j] - nums[i] < 0) { curr_op = 0; }
		else if (nums[j] - nums[i] == 0) { curr_op = 1; }
		else 
		{
			curr_op = ((nums[j] - nums[i]) / 2) + 1;
		}
		min_op = std::min(min_op, curr_op);
		i++;
		j++;
	}
	return min_op;
	
}
		
 
int main()
{
	int test;
	std::cin >> test;
	std::vector<int>a;
	for(; test != 0; test--)
	{
		int temp;
		long n;
		std::cin >> n;
		for (; n != 0; n--)
		{
			std::cin >> temp;
			a.push_back(temp);
		}
 
		int output = notsort(a);
		std::cout << output << "\n";
		a.clear();
	}
	return 0;
}
