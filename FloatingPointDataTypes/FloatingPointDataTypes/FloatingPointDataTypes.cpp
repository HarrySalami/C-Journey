

#include <iostream>
#include<float.h>
using std::cout;

int main()
{
    float a = 10.0 / 3; 
    double b;// E4 = 10^4
    long double c; 
    a = a * 100000000000000;
    cout << std::fixed << a << std::endl;
    cout << FLT_DIG << std::endl; 
}

