#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int main()
{
	string value;
	int flag = 0;
	while (cin >> value)
	{
		reverse(value.begin(), value.end());
		if (flag)
		{
			cout << " ";
		}
		flag = 1;
		cout << value;
	}
}


