#include"iostream"
#include"string"
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i = 0;
	int tempi = 0;
	long long int temp = 1;
	long long int ten = 0;//最后的十进制数 
	for(i = s.size()-1; i >= 0; i--)
	{
		switch(s[i])
		{
	        case 'A': tempi = 10; break;  
	        case 'B': tempi = 11; break;  
	        case 'C': tempi = 12; break;  
	        case 'D': tempi = 13; break;  
	        case 'E': tempi = 14; break;  
	        case 'F': tempi = 15; break;  
	        default : tempi = s[i] - '0'; break;
		}
		ten += tempi*temp; 
		temp *= 16;
	}
	cout<<ten;
	
	
	return 0; 
} 
