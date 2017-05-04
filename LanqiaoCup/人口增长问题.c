#include<stdio.h>
int main()
{
	int n, i;
	float x = 1, rate = 0.001;
	scanf("%f%d",&x,&n);

	for(i = 0; i < n; i++)
	{
		x *= (float)(1.0+rate);
	}
	printf("%.4f",x);
	return 0;
}
