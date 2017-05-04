#include "iostream"
#include "cstring"

#define SIZE 100
using namespace std;

int DelPack(char *s)
{
	int i = 0, j = 0, k = 0, h = 0, NUM[SIZE], boolean = 0;
	if(s == NULL || strlen(s) < 2)
	{
		for(i = 0; i != strlen(s); i++)
		{
			cout << s[i];
		}
		return 0;
	} 

	j = strlen(s);
	for(i = 0; i != j; i++)
	{
		boolean = 0;
		for(k = 0; k != j; k++)
		{
			if(s[i] == s[k] && i != k)
			 {
			 	boolean = 1;
			 }	
		}
		if(!boolean)
		{
			NUM[h++] = i;
		}
	}

	for(i = 0; i != h; i++)
	{
		cout << s[NUM[i]];
	}

	return 0;
}
int main()
{
	char s[SIZE];
	cin >> s;
	DelPack(s);
	return 0;
}
