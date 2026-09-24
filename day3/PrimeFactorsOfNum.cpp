#include <iostream>
bool isPrime(int n){
    for(int i=2; i<((n/2)+1); i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int num,count=0;
    std::cout << "Enter the a number : ";
    std::cin  >> num;
    for(int i = 2; i<num/2; i++){
        if(num%i == 0){
            if(isPrime(i)){
                std::cout << i << " is prime factor of " << num << std::endl;
                count = count + 1;
            }
        }
    }
    std::cout << "found " << count << " prime factor(s)" << std::endl;
    return 0;
}