#include <iostream>
#include <string>

#include "fractions.cpp"
#include "fractions.hh"

int main() {
    std::cout << "Welcome to the fractions calculator!" << std::endl << std::endl;
    while(1) {
        std::cout << " >>> ";
        
        String inp;
        std::getline(std::cin, inp);

        std::cout << calcAdds(inp) << std::endl;
    }
}

