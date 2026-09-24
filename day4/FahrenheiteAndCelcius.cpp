#include <iostream>

int menu(){
    int val;
    std::cout << "make your choice : " << std::endl;
    std::cout << "1. Fahrenheite to Celsius" << std::endl;
    std::cout << "2. Celsius to Fahrenheite" << std::endl;
    std::cout << "choice : ";
    std::cin  >> val;
    return val;
}

int main(){
    int getChoice;
    float ConvertedTemp;
    getChoice = menu();
    if(getChoice == 1){
        float Fahrenheite;
        std::cout << "enter you temperature in Fahrenheite : ";
        std::cin  >> Fahrenheite;
        ConvertedTemp = (Fahrenheite - 32)*5/9;
        std::cout << "Temperature in Celsius is : " << ConvertedTemp << std::endl;
    }
    else if(getChoice == 2){
        float Celsius;
        std::cout << "enter you temperature in Celsius : ";
        std::cin  >> Celsius;
        ConvertedTemp = (Celsius*9/5) + 32;
        std::cout << "Temperature in Fahrenheite : " << ConvertedTemp << std::endl;
    }
    else{
        std::cout << "invalid choice ! ";
    }
    return 0;
}