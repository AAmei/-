#include "iostream"
using namespace std;
#define SIZE 1001
int main()
{
	int i = 0, j = 0;
	int k = 0;
	char s[SIZE];
	cin >> k >> s;
	
	char *phead = &s[0], *ptail = phead;
	int count_a = 0;
	while(*ptail != '\0')
	{
		count_a = 0;
		phead = ptail;
		while(*ptail != '\0' && *phead == *ptail++)
		{
			count_a++;
		}
		if(count_a >= k)
		{
			cout << *phead;
			break;
		}
	}
	if(count_a < k)cout << "No";
	return 0;
}
