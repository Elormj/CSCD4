#include <iostream>
using namespace std;
int primeCheck(int);
int main()
{
	int number;
	cout<<" Enter a positive integer: ";
	cin>> number;
	if(primeCheck(number)== 0)
	cout<< number << " is a prime number";
	else
	cout<< number <<" is not a prime numer";
	return 0;
}
int primeCheck(int number)
{
	bool flag= false;
	for(int i =2; i<= number/2; ++i)
	{
		if(number%i==0)
		{
		flag=true;
        break;
		}
	}
	return flag;
}
