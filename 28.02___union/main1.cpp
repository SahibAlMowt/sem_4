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
	Sam.age = 24;
	std::cout << "Sam.age: " << Sam.age << "\n";
	std::cout << "size: " << sizeof(Sam) << "\n";

	Sam.AverageScore = 2.5;
	std::cout << "Sam.AverageScore: " << Sam.AverageScore << "\n";
	std::cout << "size: " << sizeof(Sam) << "\n";
	
	Sam.name = "SahibAlMowt";
	std::cout << "Sam.name: " << Sam.name << "\n";
//	std::cout << "Sam.age: " << Sam.age << "\n"; //nelza tak , izza union
	std::cout << "size: " << sizeof(Sam) << "\n";
	
	return 0;
}
