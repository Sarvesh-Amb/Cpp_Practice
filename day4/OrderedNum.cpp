#include <iostream>

int main(){
    long n,s;
    long num;
    int temp;
    int arr[] = {0,0,0,0,0,0,0,0,0,0};
    std::cout << "enter a number : ";
    std::cin  >> n;
    num = n;
    while(num != 0){
        temp = num%10;
        num  = num/10;
        arr[temp] = arr[temp] + 1;
    }
    std::cout << "The ordered number is : ";
    for(int i =0; i<=9; i++){
        for(int j = 0; j<arr[i];j++){
            std::cout << i;
        }
    }
    std::cout << std::endl;
    return 0;
}