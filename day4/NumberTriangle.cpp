#include <iostream>
#include <iomanip>

int main(){
    int rows;
    std::cout << "enter the number of rows you want in the trianlge : ";
    std::cin  >> rows;
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j<= i; j++){
            std::cout << std::left << std::setw(5) << i;
        }
        std::cout << std::endl;
    }
    return 0;
}