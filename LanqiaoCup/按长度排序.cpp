#include<iostream>
#include<string>
using namespace std;

void stringsort(string *s, int n)//按字符串长度排序，长度一样则按对应字符串字面值对应在int值大小排序
{
	int i, j;
	string temps;
	for(i = 1; i < n; i++)
	{
		for(j = i+1; j < n; j++)
		{
	
		}
	}
}

int main()
{
	int n, i;
	string *s;

	while(1)
	{
		cin>>n;
		if(n==0)break;
		
		s = new string[n];
		for(i = 0; i < n; i++)
		{
			cin>>s[i];
		}
		stringsort(s,n);
	}
	while(1);
	return 0;
}
