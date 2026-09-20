#include <iostream>
#include <iomanip>

int main(){
    int range;
    std::cout << "enter the number of odd numbers you want : ";
    std::cin >> range;
    std::cout << " ----------- List of odd numbers -------------" << std::endl;
    for (int i = 0; i < range; i++ ){
        std::cout << 2*i + 1 << std::endl; 
    }
    return 0;
}