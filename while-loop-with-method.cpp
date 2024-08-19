// SIMPLE WHILE LOOP CODE WITH INSERTED METHOD IN IT

#include <iostream>
#include <string>


int main()
{

    std::string name;

    while (name.empty()) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Your name is: " << name;

    return 0;
}