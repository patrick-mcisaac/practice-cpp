#include <iostream>

void swap(int &a, int &b){
    int c = a;
    a=b;
    b=c;
}

void addTax(double &price, double rate)
{
    price += price * rate;
}

int countVowels(const std::string &str)
{
    int count = 0;
    for(char s : str){
        switch(s){
            case 'a':
                count++;
                break;
            case 'e':
                count++;
                break;
            case 'i':
                count++;
                break;
            case 'o':
                count++;
                break;
            case 'u':
                count++;
                break;
            default:
                break;
        }
    }
    return count;
}


int main(){

    int first = 1;
    int second = 2;

    swap(first, second);

    double price = 10;

    addTax(price, 0.2);

    std::cout << price << std::endl;

    std::cout << first << " "<< second << std::endl;

    int strCount = countVowels("hello");

    std::cout << strCount << std::endl;
    return 0;
}