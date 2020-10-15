

#include <iostream>
using namespace std; // using directive -- always prefix 
using std::cout; // using declaration ... we are only using cout , reduces naming conflicts 
using std::cin;
int main()
{
    int slices; // declaration and initialization of slices 
    cout << "Yo fatty input how many pizza you want";
    cin >> slices;
    cout << "You have " << slices << " slices of pizza" << std::endl;
    return 0;  
}

