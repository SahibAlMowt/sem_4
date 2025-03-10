#include <iostream>
#include <thread>

void foo(int z)
{
	for(int i = 0; i != z; i++)
	{
		std::cout << "thread is running\n";
	}
}

class Thread_obj
{
public: 	
	void operator()(int z)
	{
		for(int i = 0; i != z; i++)
		{
			std::cout << "thread using read_obj\n";
		}
	}
};

class Base
{
public: 
	void foo()
	{
		std::cout << "thread using member function foo()\n";
	}
	
	static void fool()
	{
		std::cout << "thread using member function fool()\n";
	}
};

int main()
{
	std::thread th1(foo, 3);
	std::thread th2(Thread_obj(), 3);
	
	auto f = [](int x)
	{
		for(int i = 0; i != x; i++)
		{
			std::cout << "thread using lambda\n";
		}
	};
	
	std::thread th3(f, 3);
	
	Base b;
	std::thread th4(&Base::foo, &b);
	std::thread th5(&Base::fool);
	
	th1.join();
	th2.join();
	th3.join();
	th4.join();
	th5.join();
	
	
	return 0;
}
	
