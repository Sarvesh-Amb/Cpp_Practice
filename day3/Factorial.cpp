#include <iostream>

int main(){
    int num;
    std::cout << "enter the number you want the factorial of : ";
    std::cin  >> num;
    int result = 1;
    for(int i = 1; i<=num; i++){
        result = result*i;
    }
    std::cout << "the factorial of your number is : " << result << std::endl;
    return 0;
}