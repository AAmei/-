#include "iostream"
#include "cstdio"
#include "cstring"
using namespace std;

//D：删除一个字符，命令的方式为： D a 其中a为被删除的字符，
//例如：D s 表示删除字符 ’s’ ，若字符串中有多个 ‘s’，则删除第一次出现的。
void D(char* s)
{
	char c;
	getchar();
	scanf("%c", &c);
	for(int i = 0; i < strlen(s); i++)
	{
		if(s[i] == c)
		{
			for(; i < strlen(s); i++)
			{
				s[i] = s[i+1];
				if(s[i+1] == '\0')return;
			}
			 
		}
	}
}
//I：插入一个字符，命令的格式为：I a1 a2 其中a1表示插入到指定字符前面，a2表示将要插入的字符。
//例如：I s d 表示在指定字符 ’s’ 的前面插入字符 ‘d’ ，若原串中有多个 ‘s’ ，则插入在最后一个字符的前面。
void I(char* s)
{
	char c1, c2, tempc;
	getchar();
	scanf("%c %c", &c1,&c2);
	s[strlen(s)+1] = '\0';
	for(int i = strlen(s); i >= 0; i--)
	{
		s[i] = s[i-1];
		if(s[i] == c1)
		{
			s[i-1] = c2;
			return;
		}
	}
}
//R：替换一个字符，命令格式为：R a1 a2 其中a1为被替换的字符，a2为替换的字符，若在原串中有多个a1则应全部替换。
//编辑过程中，若出现被改的字符不存在时，则给出提示信息。
void R(char* s)
{
	char c1, c2, tempc;
	getchar();
	scanf("%c %c", &c1,&c2);
	for(int i = 0; i < strlen(s); i++)
	{
		if(s[i] == c1)
		{
			s[i] = c2;	 
		}
	}
} 

int main()
{
	char *s = new char[50];
	int i = 0;
	while((s[i] = getchar()) != '.')
	{
		i++;
	}
	s[i+1] = '\0';

	getchar();
	char c;
	scanf("%c", &c);
	switch(c)
	{
		case 'D':
			D(s);
			break;
		case 'I':
			I(s);
			break;
		case 'R':
			R(s);
			break;
	}

	printf("%s",s);
	return 0;
} 
