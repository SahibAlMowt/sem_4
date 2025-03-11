#include <iostream>
#include <mutex>

std::mutex mtx;

void task_1()
{
    std::lock_guard<std::mutex> lock(mtx);

    std::cout << "captured resource\n";
}

void task_2()
{
    std::unique_lock<std::mutex> lock(mtx);

    std::cout << "captured resource\n";

    lock.unlock();
}

void task_3()
{
    std::unique_lock<std::mutex> lock(mtx, std::defer_lock);

    lock.lock();
    lock.unlock();
}