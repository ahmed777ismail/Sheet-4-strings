#include <iostream>
using namespace std;
#include <string>
int main()
{
	int pos = 0;
	string s, comparison = "hello", res = "";
	cin >> s;
	for (int i = 0; i < 5; i++)
	{
		for (int x = 0 + pos; x < s.size(); x++)
		{
			if (comparison[i] == s[x])
			{
				res += s[x];
				pos++;
				break;
			}
			pos++;
		}
	}
	(res == comparison) ? cout << "YES" : cout << "NO";
	return 0;
}
