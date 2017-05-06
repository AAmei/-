/** 
基础练习 十进制转十六进制  
时间限制：1.0s   内存限制：512.0MB
提交此题   锦囊1   锦囊2
问题描述
　　十六进制数是在程序设计时经常要使用到的一种整数的表示方式。
    它有0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F共16个符号，分别表示十进制数的0至15。
	十六进制的计数方法是满16进1，
	所以十进制数16在十六进制中是10，而十进制的17在十六进制中是11，
	以此类推，十进制的30在十六进制中是1E。
　　给出一个非负整数，将它表示成十六进制的形式。
输入格式
　　输入包含一个非负整数a，表示要转换的数。0<=a<=2147483647
输出格式
　　输出这个整数的16进制表示
样例输入
30
样例输出
1E
*/ 

#include <cstdio>
#include <cstring> 
using namespace std;
int main()
{
	int a, temp, i;
	scanf("%d", &a);
	if(a == 0)
	{
		printf("0");
		return 0;
	}
	char c[9];
	memset(c, '0', sizeof(char)*9);
	i = 8;
	c[i] = '\0';
	while(a)
	{
		i--;
		temp = a%16;
		if(temp < 10)
			c[i] = temp + '0';	
		else 
		{
			switch(temp)
			{
				case 10:
					c[i] = 'A';
					break;
				case 11:
					c[i] = 'B';
					break;
				case 12:
					c[i] = 'C';
					break;
				case 13:
					c[i] = 'D';
					break;
				case 14:
					c[i] = 'E';
					break;
				case 15:
					c[i] = 'F';
					break;
			}
		}
		a /= 16;
	}
	char tempc;
	char cl[9];
	i = 0;
	while(c[i] == '0')
	{
		i++;
	}
	int j = 0;
	while(c[i] != '\0')
	{
		cl[j] = c[i];	
		i++;
		j++;
	}
	cl[j] = '\0';
	printf("%s",cl);
	return 0;
}
