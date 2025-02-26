#include <iostream>
#include <regex>
#include <string>

int str_to_int(const std::string str)
{   
    int num = 0;
    for(char c: str)
    {
        if(c >= '0' && c <= '9')
        {
            num = num * 10 + (c - '0');
        }
    }
    return num;
}

bool ok_b(const std::smatch strs)
{
    /*int num = 0;

    int day = 0;
    int month = 0;
    for(char c: str)
    {
        if(c >= '0' && c <= '9')
        {
            num = num * 10 + (c - '0');
        }

    }*/
    int i = 0;
    for(auto a: strs)
    {
        std::cout << a << " ";
        std::cout << " i = " << i << " "; 
        i++;
    }

    int day = str_to_int(strs[1]);
    int month = str_to_int(strs[2]);
    int year = str_to_int(strs[3]);

    int hour = str_to_int(strs[4]);
    int minutes = str_to_int(strs[5]);

  /*  std::cout << day << "\n";
    std::cout << month << "\n";
    std::cout << year << "\n";
    std::cout << hour << "\n";
    std::cout << minutes << "\n";
  */  
    if(day > 31 || day < 1)
    {
        return false;
    }
    if(month > 12 || month < 1)
    {
        return false;
    }
    if(year < 2026 || year < 0)
    {
        return false;
    }
    if(hour > 24 || hour < 0)
    {
        return false;
    }
    if(minutes > 60 || minutes < 0)
    {
        return false;
    }

    return true;
}

void pr(std::string str, std::smatch res, std::regex reg)
{
    if(std::regex_search(str, res,  reg))
    {
        int i = 0;
        for(auto a: str)
        {
            std::cout << " i = " << i << "\t" << a << "\n"; 
            i++;
        }
    }
    
}


bool reg(std::string str)
{
    std::regex reg{"(0[1-9]|[12]\\d|3[01])\\.(0[1-9]|1[0-2])\\.(0\\d{3}|1\\d{3}|200\\d|201\\d|202[0-5]) (0\\d|1\\d|2[0-3]):([0-5]\\d)"};

    std::smatch res;

    if(std::regex_search(str, res, reg))
    {
        int i = 0;
        for(auto a: str)
        {
            std::cout << " i = " << i << "\t" << a << "\n"; 
            i++;
        }

        return true;
    }
    
    return false;
}
