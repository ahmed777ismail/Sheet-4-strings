#include <iostream>
using namespace std;



int main()
{
	string s;
	cin >> s;
	int len = s.length();
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum += (s[i] - '0');
	}
	cout << sum << endl;

	return 0;
}

