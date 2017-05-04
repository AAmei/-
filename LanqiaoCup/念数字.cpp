#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
	string num[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int x, y;
	int flag;
	stack <int> st;

	cin>>x;
	if(x >= 0)
		flag = 1;
	else
	{
		flag = 0;
		x = -x;
	}

	while(x > 0)
	{
		y = x % 10;
		st.push(y);
		x /= 10;
	}

	if(st.empty())
	{
		cout<<"ling"<<endl;
	}
	else
	{
		if(flag == 0)
		{
			cout<<"fu ";
		}
		while(!st.empty())
		{
			cout<<num[st.top()]<<" ";
			st.pop();
		}
	}
	return 0;
}
