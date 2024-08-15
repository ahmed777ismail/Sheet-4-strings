#include <iostream>
#include<string>
using namespace std;

int main()
{
	string str;

	getline(cin, str);

	int wordsCounter = 0;
	for (int i = 0; i < str.size(); i++) {
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
			if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == ',') {
				wordsCounter++;
			}
		}
	}

	cout << wordsCounter;

	return 0;
}

