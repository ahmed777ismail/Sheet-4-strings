#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s, t;
		cin >> s >> t;
		int maxLength = max(s.size(), t.size());

		for (int i = 0; i < maxLength; ++i)
		{
			if (s.size() - 1 >= i)
				cout << s[i];
			if (t.size() - 1 >= i)
				cout << t[i];
		}
		cout << endl;
	}
}