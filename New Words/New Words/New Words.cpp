#include <iostream>
#include <string>
#include<climits>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int freq[26] = {};
	for (int i = 0; i < s.size(); i++)
	{
		s[i] = tolower(s[i]);
		freq[int(s[i]) - 97]++;
	}
	int ans = INT_MAX;
	for (int i = 0; i < 26; i++)
	{
		if (char(i + 97) == 'e' or char(i + 97) == 'g' or char(i + 97) == 'y' or char(i + 97) == 'p' or char(i + 97) == 't')
		{
			ans = min(ans, freq[i]);
		}
	}
	cout << ans;
}