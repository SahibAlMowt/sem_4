#include <iostream>
#include <vector>
#include <cstdlib>
#include <thread>
#include <ctime>

int main()
{
    std::vector<int> vec(1'000'000);
    std::srand(std::time(nullptr));
    for(size_t i = 0; i < 1'000'000; i++)
    {
        vec.push_back(rand() % 10);
    }

    int all_sum = 0;

    for(size_t i = 0; i < 1'000'000; i++)
    {
        all_sum += vec[i];
    }

    std::cout << all_sum << "\n";

    return 0;
}