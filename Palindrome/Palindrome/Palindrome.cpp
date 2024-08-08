#include <iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int len = s.length();
	for (int i = 0, j = len - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}

