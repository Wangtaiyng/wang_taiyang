#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a+b>c)
        {
       if(a*a+b*b!=c*c)
        cout<<"��ֱ��";
    else
        cout<<"����ֱ";}
    else
        cout<<"������";

}