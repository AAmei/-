#include "iostream"
#include "cstring"
#define SIZE 100
using namespace std;

int myStrcmp(char *s1,char *s2)
{
	int i = 0, j = 0;
	while(s1[i] != '\0')
	{
		if((int)s1[i] > (int)s2[i] || s2[i] == '\0')
		{
			return 1; 
		}
		else if((int)s1[i] < (int)s2[i]) 
		{
			return -1;
		}
		i++;
	}
	if(s2[i] != '\0')return -1;
	
	return 0;
}
int main()
{
	char s1[SIZE], s2[SIZE];
	cin >> s1 >>s2;
	int cmp = myStrcmp(s1,s2);
	cout << cmp;
	return 0;
} 
