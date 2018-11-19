#include <iostream>
using namespace std;
int even(int);
int main()
{
    cout<<"please enter an integer a:";
    int a=0;
    while (cin>>a) {
        if(even(a)==true)
            cout<<"a是偶数:"<<endl;
        else
            cout<<"a不是偶数"<<endl;
        cout<<"please continue to enter:";
    }
}
int even(int x)
{
    if (x%2==0)
        return true;
    else
        return false;
}
