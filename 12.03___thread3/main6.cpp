#include <iostream>
#include <vector>
#include <cstdlib>
#include <thread>
#include <ctime>

std::vector<int> vec(0);

void vec_sum(int &all_sum)
{
    for(size_t i = 0; i < 10'000'000; i++)
    {
        all_sum += vec[i];
    }
}

int main()
{
    
    std::srand(std::time(nullptr));
    for(size_t i = 0; i < 10'000'000; i++)
    {
        vec.push_back(rand() % 10);
    }

    int all_sum = 0;

    vec_sum(all_sum);

    std::cout << all_sum << "\n";

    return 0;
}