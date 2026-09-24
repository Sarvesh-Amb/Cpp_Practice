#include <iostream>
#include <iomanip>

int main(){
    int n,num,even[100],odd[100],even_count = 0,odd_count = 0;
    std::cout << "Enter number of elements : ";
    std::cin  >> n;
    for(int i=0;i<n;i++){
        std::cout << "element no. " << i+1 << " : ";
        std::cin  >> num;
        if(num%2==0){
            even[even_count] = num;
            even_count++;
        }
        else{
            odd[odd_count] = num;
            odd_count++;
        }
    }
    std::cout << "the number of even numbers is " << even_count << ", The list of even numbers is : " << std::endl;
    if(even_count == 0){
        std::cout << "no elements availabe " << std::endl;
    }
    else{
        for(int i=0;i<even_count;i++){
            std::cout << std::left << std::setw(4) << even[i];
        }
        std::cout << std::endl;
    }
    std::cout << "the number of odd numbers is " << odd_count << ", The list of odd numbers is : " << std::endl;
    if(odd_count == 0){
        std::cout << "no elements availabe " << std::endl;
    }
    else{
        for(int i=0;i<odd_count;i++){
            std::cout << std::left << std::setw(4) << odd[i];
        }
        std::cout << std::endl;
    }
    return 0;
}