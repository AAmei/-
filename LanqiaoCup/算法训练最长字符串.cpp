#include "iostream"
#include "string"
using namespace std;
int main()
{
	int maxsize = 0, ssize, tempi;
	string s[5];
	for(int i = 0; i < 5; i++)
	{
		cin >> s[i];
	}
	for(int i = 0; i < 5; i++)
	{
		ssize = s[i].size();
		if(maxsize < ssize)
		{
			maxsize = ssize;
			tempi = i;
		}
	}
	cout << s[tempi];
	
	return 0;
}
