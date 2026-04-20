/*
### 3. String Reversal in Place
Reverse a C-style string (`char*`) in place using two pointers walking toward
each other.
*/
#include <iostream>
#include <string>
void reverse(char arr[], int size)
{
    char *l = arr;
    char *r = arr + size - 1;

    while (l < r)
    {
        char temp = *l;

        *l = *r;
        *r = temp;

        l += 1;
        r -= 1;
    }
}

int main()
{
    char greeting[] = "hello how are you";
    std::cout << greeting << std::endl;
    int size = sizeof(greeting) / sizeof(greeting[0]) - 1;
    reverse(greeting, size);
    std::cout << greeting << std::endl;
    return 0;
}