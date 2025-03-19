#ifndef METRO_H
#define METRO_H

#include <iostream>
#include <fstream>
#include <thread>
#include <string>
#include <chrono>
#include <mutex>
#include <vector>

namespace sam
{
    namespace red_line
    {
        void start();
        void work(const size_t &number_of_train);
        void sleep(const size_t &add_minutes);
        void fill_structs();
        template <typename T>
        void sam::red_line::move(const T &a);
    }

    struct Bakmil;
    struct Nariman_Narimanov;
    struct Ganjlik;
    struct May_28;
    struct Sahil;
    struct Icherisheher;
}

#endif //METRO_H