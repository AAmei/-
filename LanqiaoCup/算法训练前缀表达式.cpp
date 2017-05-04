#include "iostream"
using namespace std;
int add(int m, int n)
{
	return m+n;
}
int cut(int m, int n)
{
	return m-n;
}
int mul(int m, int n)
{
	return m*n;
}
int div(int m, int n)
{
	return m/n;
} 
 
int main()
{
	char op;
	int m = 0, n = 0;
	cin >> op >> m >> n;
	int res = 0;
	switch(op)
	{
		case '+':
			res = add(m, n);
			break;
		case '-':
			res = cut(m, n);
			break;
		case '*':
			res = mul(m, n);
			break;
		case '/':
			res = div(m ,n);
			break;
	}
	cout << res;
	return 0; 
} 
