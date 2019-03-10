#include <iostream>
using namespace std;
class Complex
{
public:
    Complex();
    void input();
     Complex operator  + (Complex &c);
    void display();
private:
    int a[2][3];
};
Complex::Complex()
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
           a[i][j]=0;
        }
    }
}
void Complex::input()
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
}
Complex Complex::operator +(Complex &c)
{
    Complex c1;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            c1.a[i][j]=a[i][j]+c.a[i][j];
        }
    }
    return c1;
}
 
 
void Complex::display()
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    Complex c,c1;
    c.input();
    c1.input();
    c=c+c1;
    c.display();
}
