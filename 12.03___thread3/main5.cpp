#include <iostream>
#include <vector>
#include <cstdlib>
#include <thread>
#include <ctime>

int all_sum = 0;
std::vector<int> vec(0);

void vec_sum(int index)
{
 //   std::cout << "open\n";
    for(size_t i = index; i < 500'000 + index; i++)
    {
        all_sum += vec[i];
     //   std::cout << "sum " << vec[i] << "\n";
    }

 //   std::cout << "sum " << all_sum << "\n";
}

void vec_rand()
{
    std::srand(std::time(nullptr));
    for(size_t i = 0; i < 1'000'000; i++)
    {
     //   std::cout << (rand() % 10) << " ";
        vec.push_back(rand() % 10);
    }

    /*for(int e: vec)
    {
        std::cout << e << "\t";
    }*/
}

int main()
{

    vec_rand();

  //  std::cout << "-------------\n";

    std::thread t1(vec_sum, 0);
    std::thread t2(vec_sum, 500'000);

    t1.join();
    t2.join();

    std::cout << all_sum << "\n";

    return 0;
}