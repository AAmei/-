#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool f(string::iterator first,string::iterator last)
{
	if(first==last || last<first)
		return true;
	else
	{
		if(*first==*last)
			return f(first+1,last-1);
		else
			return false;
	}

}
int main()
{
	string a;
	cin>>a;
	string::iterator d=a.begin();
	string::iterator l=a.end()-1;
	if(f(d,l))
		cout<<"yes!"<<endl;
	else
		cout<<"no!"<<endl;
	return 0;
}
