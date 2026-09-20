#include <iostream>
#include <iomanip>

int main(){
    int range;
    std::cout << "program to find average of first n even numbers " << std::endl;
    std::cout << "enter the number of even numbers you want avg of : " << std::endl;
    std::cin >> range;
    int avg = range+1;
    std::cout << "the average of first " << range << " even numbers is " << avg << std::endl;
    return 0;
}