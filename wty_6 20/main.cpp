#include <iostream>
using namespace std;
int multiple(int,int);
int main()
{
    cout<<"please enter two integers a b:";
    int a,b=0;
    while (cin>>a>>b) {
        if(multiple(a, b)==true)
            cout<<"b��a�ı���."<<endl;
        else
            cout<<"b����a�ı���."<<endl;
        cout<<"please continue to enter:";
    }
}
int multiple(int x,int y)
{
    if (y%x==0)
        return true;
    else
        return false;
}
