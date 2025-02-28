#include <iostream>

union student
{
	int age;
	float AverageScore;
	char* name;
};

int main()
{
	student Sam;
	
	std::cout << "Address 1: " << &Sam.age << "\n";
	std::cout << "Address 2: " << &Sam.AverageScore << "\n";
	std::cout << "Address 3: " << &Sam.name << "\n";
	 
	std::cout << "size: " << sizeof(Sam) << "\n";
	
	return 0;
}
