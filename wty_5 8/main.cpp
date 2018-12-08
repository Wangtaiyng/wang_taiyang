#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	cin>>a;
	cin>>b;
	for(d=1;d<=a-1;d++)
	{
		cin>>c;
		if(b>=c)
		{
			b=c;
		}
	}
	cout<<b<<endl;
	return 0;
}
