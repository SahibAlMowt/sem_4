#include <thread>
#include <iostream>
#include <atomic>

void add(int a, int b, std::atomic<int> *result)
{
    for(int i = a; i != b; i++)
    {
        result -> fetch_add(i);
    }
}

int main()
{
    std::atomic<int> shared = 0;
    std::thread addThread(add, 1, 5, &shared);

    while(!addThread.joinable())
    {
        std::cout << shared.load() << "\n";
    }

    addThread.join();

    std::cout << shared << "\n";
    
    return 0;
}