#include <iostream>

int main() {
    std::string name;

    std::getline(std::cin, name);  // Read the whole line

    std::cout << "Hello, " << name << "!" << std::endl;
}