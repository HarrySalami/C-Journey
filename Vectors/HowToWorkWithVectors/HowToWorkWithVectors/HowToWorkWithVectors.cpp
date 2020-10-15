 

#include <iostream>
#include<vector>

using namespace std;
int main()
{
    std::vector<int> data = { 1,2,3 };
    data.push_back(12);
    std::cout << data[3]<<std::endl;
    cout << data[data.size() - 1] << endl;
    data.pop_back();
    cout << data.size() << endl;


}

