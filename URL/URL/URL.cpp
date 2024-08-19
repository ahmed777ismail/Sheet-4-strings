#include <bits/stdc++.h>
using namespace std;


int main()
{
	string s;
	cin >> s;

	string arr[5] = { "username","pwd","profile","role","key" };

	int index = 0;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '=') {
			cout << arr[index] << ": ";
			for (int j = i + 1; j < s.size(); j++) {
				if (s[j] == '&') {
					cout << endl;
					index++;
					break;
				}
				else {
					cout << s[j];
				}
			}
		}
	}

	return 0;
}