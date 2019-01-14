#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(a+b>c)
        {
       if(a*a+b*b!=c*c)
        cout<<"是直角";
    else
        cout<<"不是直";}
    else
        cout<<"不成立";

}
