#include <iostream>
using namespace std;


int main()
{
	string s;
	cin >> s;
	int len = s.length();
	int farr[125] = {};
	for (int i = 0; i < len; i++)
	{
		farr[s[i]]++;
	}

	for (int i = 'a'; i <= 'z'; i++)
	{
		if (farr[i] != 0)
		{
			cout << (char)i << " : " << farr[i] << endl;
		}
	}
		return 0;

}