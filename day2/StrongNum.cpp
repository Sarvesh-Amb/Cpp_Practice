#include <iostream>
#include <iomanip>

int fact(int num){
    int factorial = 1;
    for(int i=1;i<=num;i++)
    {
        factorial = factorial*i;
    }
    return factorial;
}
int main(){
    int num;
    int checksum = 0;
    int temp;
    int savenum;
    std::cout << "Enter a positive integer number : ";
    std::cin >> num;
    savenum = num;
    while(savenum > 0){
        temp = savenum%10;
        savenum = savenum/10;
        checksum = checksum + fact(temp);
    }
    if(checksum == num){
        std::cout << "The number " << num << " is a strong number ! " << std::endl;
    }
    else{
        std::cout << "The number " << num << " is not a strong number ! " << std::endl;
    }
    return 0;
}