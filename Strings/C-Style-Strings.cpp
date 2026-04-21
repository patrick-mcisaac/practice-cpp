#include <cstring>
#include <iostream>

void printStringInfo(char str[])
{
    // Print the string
    std::cout << str << std::endl;

    // Print the length of the string
    std::cout << strlen(str) << std::endl;

    // Print the character at index 4
    std::cout << str[4] << std::endl;

    // Modify the first character to 'X'
    str[0] = 'X';

    // Print the modified string
    std::cout << str << std::endl;
}

int main()
{
    char message[] = "Hello, World!";

    printStringInfo(message);

    std::cout << message << std::endl;
    return 0;
}