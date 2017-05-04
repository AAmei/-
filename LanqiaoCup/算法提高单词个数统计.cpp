#include "iostream"
#include "cstdio"
#include "cstring"
using namespace std;
#define SIZE 100
int main() 
{
	int i, j, len, num = 0;
	char s[SIZE];
	gets(s);
	len = strlen(s);
	if(s[0] == ' ')
	{
		printf("%d",num);
		return 0;	
	}
	for(i = 0; i < len; i++)
	{
		if(s[i] == ' ' && (i+1) != len)num++;
	}
	num++;
	printf("%d",num);
	return 0;
}
