//Length of the longest substring without repeating characters
#include <bits/stdc++.h>
using namespace std;

int longestUniqSubstr(string str)
{
	int n = str.size();
	int maxlen = 0; 

	for (int i = 0; i < n; i++)
	{

		vector<bool> traced(256);
			//vector traced's values are false by default

		for (int j = i; j < n; j++)
		{
			if (traced[str[j]] == true)
				break;
			else
			{
				maxlen = max(maxlen, j - i + 1);
				traced[str[j]] = true;
			}
		}

		traced[str[i]] = false;
	}
	return maxlen;
}

int main()
{
	char str[50];
	cout << "enter string\n";
	cin >> str;
	int length = longestUniqSubstr(str);
	cout << "The length of the longest non-repeating character substring is "<< length;
	return 0;
}
