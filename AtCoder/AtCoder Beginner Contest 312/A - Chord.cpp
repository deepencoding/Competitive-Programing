#include <bits/stdc++.h>

using namespace std;

bool chord(string s)
{
	vector<string> word = {"ACE","BDF","CEG","DFA","EGB","FAC","GBD"};
	for (unsigned i = 0; i < word.size(); i++)
	{
		if (s == word[i]) { return true; }
	}
	return false;
	
}
		
 
int main()
{
	string s;
	cin >> s;
	if (chord(s)) { cout << "Yes"; }
	else { cout << "No"; }
	return 0;
}
