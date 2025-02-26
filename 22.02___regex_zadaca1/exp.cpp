#include <iostream>
#include <regex>
#include <string>

int main()
{
    std::string str = "asda 22.12 asa aoaoaooa";
    std::regex reg {"\\d{2}"};

    std::smatch smat;
    int day = 17;
    if (std::regex_search(str, smat, reg))
    {
        day = std::stoi(smat[1]);
    }

    std::cout << day << "\n";

    return 0;

}