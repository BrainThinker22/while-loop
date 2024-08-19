// DO WHILE LOOP CODE

#include <iostream>
#include <string>

int main() {

    int number;

    do {
        std::cout << "Enter a number: ";
        std::cin >> number;
    } while (number <= 0);

    std::cout << "The written number is: " << number;

    return 0;
}