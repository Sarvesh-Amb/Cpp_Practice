#include <iostream>
#include <iomanip>

int main(){
    int num;
    std::cout << "enter the number you want table of ";
    std::cin  >> num;
    for(int i = 1; i <=10; i++){
        std::cout << num << " * " << i << " = " << num*i << std::endl;
    }
    return 0;
}