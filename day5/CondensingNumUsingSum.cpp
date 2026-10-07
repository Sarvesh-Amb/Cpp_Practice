#include<iostream>

int sumOfDigits(int64_t num){
    int sum = 0;
    while(num >0){
        sum = sum + num%10;
        num = num/10;
    }
    return sum;
}
int main(){
    int64_t num;
    int sum;
    std::cout << "enter a number of your choice to condence : ";
    std::cin  >> num;
    sum = sumOfDigits(num);
    if(sum > 10){
        while(sum >= 10){
            sum = sumOfDigits(sum);
        }
    }
    std::cout << "the condenced single digits is : " << sum << std::endl;
    return 0;
}