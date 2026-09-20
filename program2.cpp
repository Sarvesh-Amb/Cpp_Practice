#include <iostream>
#include <iomanip>
int main(){
    int a,b;
    std::cout << "Enter values for a and b ";
    std::cin >> a >> b;
    std::cout << "Standard matamatical operations " << std::endl;
    std::cout << std::left << std::setw(25) << "Addition" << a+b << std::endl;
    std::cout << std::left << std::setw(25) << "Subtrations(a-b)" << a-b << std::endl;
    std::cout << std::left << std::setw(25) << "Multiplication" << a*b << std::endl;
    if(a>b){
            std::cout << std::left << std::setw(25) << "Division (a/b)" << a/b << std::endl;
    }
    else {
            std::cout << std::left << std::setw(25) << "Division (b/a)" << b/a << std::endl;
    }
    return 0;
}