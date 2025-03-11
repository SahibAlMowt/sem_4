#include <iostream>
#include <thread>
#include <shared_mutex>
#include <mutex>
#include <chrono>

std::shared_mutex mtx;
int shared_data = 11;

void readData()
{
    std::shared_lock<std::shared_mutex> lock(mtx);
    std::cout << "thread " << std::this_thread::get_id() << ". " << shared_data << " entered mutex\n";

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "thread " << std::this_thread::get_id() << ". " << shared_data << " exited mutex\n";
}

void writeData(int n)
{
    std::unique_lock<std::shared_mutex> lock(mtx);
    shared_data = n;

    std::cout << "thread " << std::this_thread::get_id() << ".\n";
}

int main()
{
    std::thread t1(readData);
    std::thread t2(writeData, 42);
    std::thread t3(writeData, 111);
    std::thread t4(readData);

    t1.join();
    t2.join();
    t3.join();
    t4.join();

    return 0;
}