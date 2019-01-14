#include <iostream>
using namespace std;
int main()
{
	int i,j,s;
	for(i=1;i<=5;i++)
	{
		s=1;
		for(j=1;j<=i;j++)
		{
			s=s*j;
		}
		cout<<s<<'\t';
	}
	return 0;
}
