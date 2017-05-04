#include "iostream"
#include "string"
using namespace std;
int main()
{
	int i, j, temp = 0;
	string s1, s2;
	cin >> s1 >> s2;
	for(i = 0; i < s1.size() && i < s2.size() ; i++)
	{
		if(s1[i] != s2[i])
		{
			temp = (int)(s1[i]-s2[i]);
			break;
		}
	}
	cout << temp;
	return 0;
}
