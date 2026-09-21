#include <iostream>
#include <iomanip>
#include <cmath>

int NumPowDigit(int num, int totalDigits){
    int value = 1;
    for(int i=0;i<totalDigits;i++){
        value = value*num;
    }
    return value;
}

int NumLength(int num){
    int length = (num == 0) ? 1 : std::log10(num) + 1;
    return length;
}

int main(){
    int num;
    int temp;
    std::cout << "Enter an integer number : ";
    std::cin  >> num;
    int totalDigits = NumLength(num);
    int numforloop = num;
    int checksum = 0;
    while(numforloop != 0){
        temp       = numforloop%10;
        numforloop = numforloop/10;
        checksum   = checksum + NumPowDigit(temp,totalDigits);
    }
    if(checksum == num){
        std::cout << "this number is an armstrong number!" << std::endl;
    }
    else{
        std::cout << "this number is not an armstrong number!" << std::endl;
    }
    return 0;
}