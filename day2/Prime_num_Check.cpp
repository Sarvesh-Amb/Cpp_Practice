#include <iostream>
#include <iomanip>

int main(){
    int num;
    bool isprime = true;
    std::cout << "Enter any integer number number" << std::endl;
    std::cin >> num;
    for(int i = 2; i < num/2 ; i++){
        if(num%i == 0){
            isprime = false;
        }
    }
    if(isprime)
    {
        std::cout << "The number is prime " << std::endl;
    }
    else
    {
        std::cout << "The number is not prime" << std::endl;
    }
    return 0;
}