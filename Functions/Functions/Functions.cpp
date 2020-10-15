

#include <iostream>
#include  <cmath>
using std::cout;
using std::cin;


double power(double base, int exponent) // declaration of  power function 
{
	double result = 1; 
	for (int i = 0; i < exponent; i++)
	{
		result = result * base;
	}
	return result;
}



void print_pow(double base , int exponent )
{
	
	
	double myPower = power(base, exponent); //using power function and assigning it to myPower to be outputted 
	
	cout << base << " raised to the " << exponent << " power is " << myPower << ".\n";
}
int main()
{
	int exponent;
	double base;
	cout << "What is the base ";
	cin >> base;
	cout << "What is the exponent";
	cin >> exponent;
	print_pow(base, exponent);

}

