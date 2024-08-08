#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	string s;
	while (t--)
	{
		cin >> s;
		int len = s.length();
		bool falg = 0;
		for (int i = 1; i < len - 1; i++)
		{
			if (s[i] == '0' && s[i - 1] == '1' && s[i + 1] == '1')
			{
				cout << "Good" << endl;
				falg = 1;
				break;
			}
			else if (s[i] == '1' && s[i - 1] == '0' && s[i + 1] == '0')
			{
				cout << "Good" << endl;
				falg = 1;
				break;
			}
		}
		if (falg == 0)
		{
			cout << "Bad" << endl;
		}
	}
	return 0;
}

