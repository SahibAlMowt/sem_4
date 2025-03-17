#include <iostream>
#include <thread>
#include <chrono>

void print_hello()
{
    std::cout << "Hello\n";
}

int main()
{
    std::jthread j_normal_thread(print_hello);
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
 // net joina for thread
    return 0;

}