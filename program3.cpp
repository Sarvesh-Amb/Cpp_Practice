#include <iostream>
#include <iomanip>

int main(){
    int a,b,c;
    std::cout << "Enter three interger numbers " << std::endl;
    std::cin >> a >> b >> c;
    int greatest = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);
    std::cout << "The greatest of the three numbers is " << greatest << std::endl;
    return 0;
}