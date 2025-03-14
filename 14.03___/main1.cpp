#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <chrono>
#include <string>

std::mutex m;
std::condition_variable cv;
std::string data;
bool ready = false;
bool processsed = false;

void worker_thread()
{
    std::cout << "Worker thread started\n";
    std::unique_lock<std::mutex> lk(m);
    cv.wait(lk, []{return ready;});

    std::cout << "Worker thread is processing\n";
    data += " after processing";
    processsed = true;

    std::cout << "Worker thread signals processing complete\n";
    lk.unlock();
    cv.notify_one();
}

void master_thread()
{
    std::cout << "Master thread start\n";
    data = "Example data";
    {
        std::lock_guard lk(m);
        ready = true;
        std::cout << "Master thread signals data ready for processing";
    }

    cv.notify_one();
    {
        std::unique_lock lk(m);
        cv.wait(lk, []{return processsed;});
    }

    std::cout << "In Master thread "
}

int main()
{


    return 0;
}