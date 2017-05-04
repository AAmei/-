#include<stdio.h>

int main()
{
	int n, i;
	float x, sumPoly = 1.0, poly = 1.0;

	scanf("%f%d",&x,&n);

	for(i = 0; i < n; i++)
	{
		poly *=x;
		sumPoly += poly;
	}

	printf("%.2f",sumPoly);

	while(1);
	return 0;
}
