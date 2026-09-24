#include <iostream>
#include <iomanip>

int fibo(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    else{
        return fibo(n - 1) + fibo(n - 2);
    }
}
int main(){
    int num;
    std::cout << "how many numbers of the fibonacce series do you want ? ";
    std::cin  >> num;
    for(int i=0 ; i<= num; i++){
        std::cout << fibo(i) << std::endl;
    }
    return 0;
}