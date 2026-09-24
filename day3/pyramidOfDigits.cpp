#include <iostream>
#include <iomanip>

int main(){
    int rows;
    std::cout << "enter no. of rows for the triangle : ";
    std::cin  >> rows;
    int num = 0;
    for(int i = 1; i <= rows; i++){
        for(int j = 0; j < rows + (i-1); j++){
            if(j < rows-i ){
                std::cout << std::left << std::setw(5) << "";
            }
            else{
                std::cout << std::left << std::setw(5) << ++num;
            }

        }
        std::cout << std::endl;
    }
    return 0;
}