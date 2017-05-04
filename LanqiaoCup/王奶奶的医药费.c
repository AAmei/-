#include<stdio.h>
int main()
{
	int n, i;
	float sum = 0, money;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%f",&money);
		sum += money;
	}
	printf("%.2f",sum);
	while(1);
	return 0;
}
