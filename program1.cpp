#include <iostream>
#include <iomanip>
int main(){
    std::cout << std::left << std::setw(25) << "This is a c++ program " << std::endl;
    std::cout << std::left << std::setw(25) << "datatype" << "Size" << std::endl;
    std::cout << std::left << std::setw(25) << "int" << "16" << std::endl;
    std::cout << std::left << std::setw(25) << "float" <<"32" << std::endl;
    return 0;
}