#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n, m, i, j, k, l, x, y, z, temp,flag;

	cin>>n;
	for(x = 0; x < n; x++)
	{
		vector<vector <int> >v;
		cin>>m;
		for(y = 0; y < m; y++)
		{
			vector<int> t;
			for(z = 0; z < m; z++)
			{
				cin>>temp;
				t.push_back(temp);
			}
			v.push_back(t);
		}

		//左右对折
		flag = 0;
		for(k = 0; k < v.size(); j++)
		{
			for(i = 0,j = v[k].size()-1; i < v[k].size(), j >= 0; i++, j--)
			{
				if(v[k][i] != v[k][j])
				{
					cout<<"no"<<endl;
					flag = 1;
					break;
				}
			}	
		}
		//上下对折
		for(k = 0, l = v.size()-1; k < v.size(), l >= 0;k++, l--)
		{
			if(v[k] != v[l])
			{
				flag = 1;
				cout<<"no"<<endl;
				break;
			}
		}

		if(flag)cout<<"yes"<<endl;

	}

	//while(1);
	return 0;
}
