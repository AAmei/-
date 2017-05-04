#include<stdio.h>
int main()
{
	int n, i, m, co;
	float sum_money = 0.0;
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
		scanf("%d",&m);
		if(m > 70 && (co = m / 70))
		{
			sum_money += (co/10.0);
		}
	}
	sum_money += (n/10.0);
	printf("%.1f", sum_money);
	while(1);
	return 0;
}
