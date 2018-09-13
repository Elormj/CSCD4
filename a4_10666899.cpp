#include <iostream>
using namespace std;
int euclid(int a, int b)
{
	while (a != b)
	{
		if(a>b)
		a=a-b;
		else
		b=b-a;
	}
	return a;
}
int main()
{
int a;
int b;
cout<< "Enter two numbers to check for their GCD\n";
cin>>a;
cin>>b;
cout<<"The GCD is "<<("euclid(%d, %d)= %d",a,b,euclid(a, b));
return 0;
}
