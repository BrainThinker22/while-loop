// WHILE LOOP NUMBER CODE

#include <iostream>
#include <string>

int main() {

    int number = 0;

    while (number <= 0) {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }

    std::cout << "The written number is: " << number;

    return 0;

}