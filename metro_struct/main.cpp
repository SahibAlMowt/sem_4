#include "metro.hpp"

int main()
{
    std::thread red_line_start(sam::red_line::start);

    red_line_start.join();

    return 0;
}