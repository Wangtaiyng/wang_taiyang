#include <iostream>
using namespace std;
void perfect(int);
int main()
{
    cout<<"1-1000之间的完美数有:"<<endl;
    for (int i=1; i<=1000; i++) {
        perfect(i);
    }
}
void perfect(int n)
{
    int a[1000],j=0,sum=0;
    for (int i=n-1; i>=1; i--) {
        if (n%i==0) {
            a[j]=i;
            j++;
        }
    }
    for (int k=0; k<=j-1; k++) {
        sum+=a[k];
    }
    if (sum==n) {
        cout<<n<<endl;
        cout<<"因子为:";
        for (int t=0; t<=j-1; t++) {
            cout<<a[t]<<" ";
        }
        cout<<endl;
    }
}
