#include <iostream>
#include <vector>
#include <cstdlib>
#include <thread>
#include <ctime>

std::vector<int> vec(1'000'000);

void vec_sum(int index, int &part_sum)
{
    for(size_t i = index; i < 500'000 + index; i++)
    {
        part_sum += vec[i];
    }
}

int main()
{
    std::srand(std::time(nullptr));
    for(size_t i = 0; i < 1'000'000; i++)
    {
        vec.push_back(rand() % 10);
    }

    int sum1 = 0;
    int sum2 = 0;

    std::thread t1(vec_sum, 0, std::ref(sum1));
    std::thread t2(vec_sum, 500'000, std::ref(sum2));

    t1.join();
    t2.join();


    int all_sum = sum1 + sum2;

    std::cout << all_sum << "\n";

    return 0;
}