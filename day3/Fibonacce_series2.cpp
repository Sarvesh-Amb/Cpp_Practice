#include <iostream>

int main(){
    int num;
    std::cout << "enter how many lines of the fibonacce series do you want ? ";
    std::cin  >>  num;    
    int f1 = 1,f2 = 1,F;
    std::cout << f1 << std::endl << f2 << std::endl;
    for(int i = 0; i<num-2; i++)
    {
        F=f1+f2;
        f1 = f2;
        f2 = F;
        std::cout << F << std::endl;
    }
}