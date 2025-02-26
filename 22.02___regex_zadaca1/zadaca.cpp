#include "zadaca.h"

int main()
{
    std::string str;
    std::getline(std::cin, str);
    
    if(reg(str))
    {
        std::cout << "bye\n";
    }
    else
    {
        std::cout << "it's not ok\n";
    }

    return 0;
}