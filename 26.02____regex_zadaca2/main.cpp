#include "calc.h"

int main()
{
    std::string str;

	std::cout << "enter input without spaces\n";
	
	std::regex reg{R"([\-]?((\d*[\.]?\d*)([+/*]|[\-]{1,2})(\d*[\.]?\d*))((([+/*]?)|[\-]{1,2})(\d*[\.]?\d*))*)"};
	
	do
	{
		std::getline(std::cin, str);
		
		if (str.empty()) 
		{
			std::cerr << "input is empty\n";
			continue;
		}

		if(sam::containsspaces(str, ' '))
		{
			std::cerr << "no spaces!\n";
			continue;
		}
		
		if(!std::regex_match(str, reg))
		{
			std::cerr << "regex\n";
			continue;
		}
		
			
		sam::proxodka(str);
		
		
	}while(str != "quit");


    return 0;
}
