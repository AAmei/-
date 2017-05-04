#include<stdio.h>
int main()
{
	int n, i;
	float sum = 0.0;
	scanf("%d",&n);
	for(i = 1; i <= n; i++)
	{
		if(i%2 ==0)
			sum -= (1/(float)i);
		else
			sum += (1/(float)i);
	}

	printf("%.4f",sum);

	while(1);
	return 0;
}
