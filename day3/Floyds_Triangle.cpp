#include <iostream>

int main(){
    int num;
    int itter = 1;
    std::cout << "enter a number of line of the Floyds Triangle ";
    std::cin  >> num;
    for(int i=1;i<=num;i++){
        for(int j=1; j<=i;j++){
            std::cout << std::left << std::setw(4) <<itter;
            itter = itter + 1;
        }
        std::cout << std::endl;
    }
    return 0;
}