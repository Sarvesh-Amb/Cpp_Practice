#include <iostream>
#include <cmath>
//any composite number will always have a factor (which is not 1 or 2)  between 0 and the square root of the number
bool isprime(int num){
    if(num <=1){
        return false;
    }
    if(num == 2 || num == 3){
        return true;
    }
    float limit = std::sqrt(num);
    for(int i=2; i<=limit ; i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;

}
int main(){
    int range;
    std::cout << "enter the range to check for twin prime (starting from 0) : ";
    std::cin >> range;
    int idx =0, num =0, numcount = 0;
    for(int i = 1; i< range; i+= 2){
        if(isprime(i)){
            if(idx > 0){
                if(i - num == 2){
                    std::cout << num << " and " << i << " are twin prime " << std::endl;
                    numcount++;
                }
            }
            idx++;
            num = i;
        }       
    }
    std::cout << "there are " << numcount << " twin primes in the range (0 - " << range << ") " << std::endl;
    return 0;   
}