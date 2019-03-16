#include <iostream>

using namespace std;

class Matrix
{
	public:
		friend Matrix operator +(Matrix &,Matrix &);
		void input();
		void display();
	private:
		int mat[2][2];
};
Matrix operator +(Matrix &a,Matrix &b)
{
	Matrix c;
	for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
            c.mat[i][j]=a.mat[i][j]+b.mat[i][j];
    }
	return c;
}
void Matrix::input()
{
	cout<<"input value of matrix:"<<endl;
	for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
            cin>>mat[i][j];
    }
}
void Matrix::display()
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
			cout<<mat[i][j]<<" ";
		cout<<endl;
	}
}

int main()
{
	Matrix a,b;
	a.input();
	b.input();
	cout<<"Matrix a:"<<endl;
	a.display();
	cout<<"Matrix b:"<<endl;
	b.display();

}
