#include <iostream>
#include <cmath>

void hundreds(int num3digits){
    int n,temp;
    char zero2ten[10][10] = {"one", "two", "Three", "four", "five", "six", "seven", "eight", "nine"};
    char ten2twenty[10][10] = { "eleven", "twelve", "thirteen", "Fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char tens[10][10] = {"ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    
    int h = num3digits/100;
    int t = (num3digits/10)%10;
    int o = num3digits%10;
    if(h == 0){
        std::cout << " ";
    }
    else{
        std::cout << zero2ten[h-1] << " Hundred ";
    }
    if(t == 0){
        if( o  == 0){
            std::cout << "";
        }
        else{
            std::cout << zero2ten[o-1];
        }
    }
    else if(t==1){
        if( o == 0){
            std::cout << tens[t -1];
        }
        else{
            std::cout << ten2twenty[o-1] << " ";
        }
    }
    else{
        std::cout << tens[t-1] << " ";
        if (o == 0){
            std::cout << "";
        }
        else{
            std::cout << zero2ten[o-1];
        }
    }
}

int main(){
    int64_t num, temp;
    int digits = 0;
    char tenPowThrees [10][10] = {"", " Thousand", " Million", " Billion", " Trillion"};
    std::cout << "Enter a number (less than a Gazillion) : ";
    std::cin  >> num;
    temp = num;
    digits = log10(num) + 1;
    int tenPowThreeDigit = 0;
    int chunks[10] = {0};
    int chunkcount = 0;
    temp = num;
    while(temp > 0){
        chunks[chunkcount] = temp%1000;
        chunkcount++;
        temp = temp/1000;
    }
    if(num == 0 ){
        std::cout << "Zero ";
    }
    else{
        for(int i = chunkcount -1; i>=0 ; i--){
            temp = chunks[i];
            hundreds(temp);
            std::cout << tenPowThrees[i] << " ";
            tenPowThreeDigit++;
        }
    }
    std::cout << std::endl;
}