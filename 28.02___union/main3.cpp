#include <iostream>
#include <variant>

int main()
{
	std::variant<int, double> myExample;
	
	myExample = 11;
	myExample = 11.11;
	
	std::cout << std::get<double>(myExample) << "\n";
	
	return 0;
}
