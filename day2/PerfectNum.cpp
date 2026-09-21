#include <iostream>
#include <iomanip>

int main(){
    int64_t checknum = 0;
    int64_t num;
    std::cout << "-------- program to find perfect number -----------" << std::endl;
    std::cout << "Enter a number" << std::endl;
    std::cin >> num;
    for(int64_t i =1 ; i <= num/2; i++){
        if(num%i == 0)
        {
            checknum = checknum + i;
        }
    }
    if(checknum == num )
    {
        std::cout << "The number is a perfect number" << std::endl;
    }
    else
    {
        std::cout << "The number is not a perfect number" << std::endl;
    }
}