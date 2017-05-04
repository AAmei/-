#include<iostream>

using namespace std;

int main()
{
	int sum = 0, c = 0;

	//读取数据直到遇到文件尾，计算所有读入值的和
	while(cin>>c)
		sum += c;
	


	cout<<"sum is : "<<sum<<endl;


	char cc = '0';


	while(cin>>cc)
		cout<<cc;

	cout<<"over";
	while(1);
	return 0;
}
