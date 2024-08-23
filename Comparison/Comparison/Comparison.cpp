#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	string word, sort_word, min_word;
	cin >> word;
	min_word = word;
	for (int i = 0; i < word.size() - 1; i++)
	{
		string x, y;
		for (int j = 0; j < word.size(); j++)
		{
			j <= i ? x += word[j] : y += word[j];
		}
		sort(x.begin(), x.end());
		sort(y.begin(), y.end());
		sort_word = x + y;
		min_word = min(min_word, sort_word);

	}
	cout << min_word << endl;


	return 0;
}