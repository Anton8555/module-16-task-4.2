#include <iostream>
#include <string>

int main() {
    int wholePart,fracPart;
    std::string text;
    double result;

    // data input
    std::cout << "Enter the whole part:";
    std::cin >> wholePart;
    do {
        std::cout << "Enter fractional part:";
        std::cin >> fracPart;
    }while( fracPart < 0 );

    // work
    text = std::to_string(wholePart) + '.' + std::to_string(fracPart);
    result = std::stod(text);

    // result output
    std::cout << result << std::endl;

    return 0;
}
