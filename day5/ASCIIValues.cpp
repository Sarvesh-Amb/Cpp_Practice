#include<iostream>

int main(){
    for(int i = 0; i<265; i++){
        if(i!=26 && i!=29){
            std::cout << i << " = " << (char)i << std::endl;
        }
    }
    return 0;
}