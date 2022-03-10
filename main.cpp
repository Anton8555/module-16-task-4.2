#include <iostream>
#include <string>

/*!
 * @brief A function to check if a string is an integer.
 * @param numb - the string being studied.
 * @return Returns true if the string contains an integer, false otherwise.
 */
bool isInteger(std::string numb)
{
    bool sign = false;
    bool digit = false;

    for(int i=0; i<numb.length(); i++)
    {
        char ch = numb[i];

        if( ((ch=='+') || (ch=='-')) && !sign && !digit )
            sign = true;
        else if( (ch>='0') && (ch<='9') )
            digit = true;
        else
            return false;
    }

    return digit;
}

int main() {
    std::string wholePart,fracPart;
    std::string text;
    double result;

    // data input
    do{
        std::cout << "Enter the whole part:";
        std::cin >> wholePart;
    }while( !isInteger(wholePart) );
    do{
        std::cout << "Enter fractional part:";
        std::cin >> fracPart;
    }while( !isInteger(fracPart) || (fracPart[0]=='-') );

    // work
    text = wholePart + '.' + (fracPart[0]=='+'?fracPart.substr(1):fracPart);
    result = std::stod(text);

    // result output
    std::cout << result << std::endl;

    return 0;
}
