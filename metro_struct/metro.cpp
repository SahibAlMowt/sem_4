#include "metro.hpp"



struct sam::Bakmil
{
    size_t number_of_train;
    std::string previous;
    std::string next;
    std::string color;
}bakmil;

struct sam::Nariman_Narimanov
{
    size_t number_of_train;
    std::string next;
    std::string previous;
    std::string color;
}nariman_narimanov;

struct sam::Ganjlik
{
    size_t number_of_train;
    std::string next;
    std::string previous;
    std::string color;
}ganjlik;

struct sam::May_28
{
    size_t number_of_train;
    std::string next;
    std::string previous;
    std::string color;
}may_28;

struct sam::Sahil
{
    size_t number_of_train;
    std::string next;
    std::string previous;
    std::string color;
}sahil;

struct sam::Icherisheher
{
    size_t number_of_train;
    std::string next;
    std::string previous;
    std::string color;
}icherisheher;

void sam::red_line::start()
{
    std::vector<std::thread> vec;

    for(size_t i = 0; i != 20; i++)
    {
        std::thread train(work);

        vec.push_back(std::move(train));

        sam::red_line::sleep(5);
    }

    for(auto &trains: vec)
    {
        trains.join();
    }
}

template <typename T>
void sam::red_line::move(const T &a)
{
    std::cout << "train with id " << a.number_of_train << "\t" << a.previous << " ---> " << a.next << "\n";
}

void sam::red_line::work(const size_t &number_of_train)
{
    bakmil.number_of_train = number_of_train;
    sam::red_line::move(bakmil);
}   

void sam::red_line::sleep(const size_t &add_minutes)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(add_minutes));
}


void sam::red_line::fill_structs()
{
    bakmil.next = "Nəriman Nərimanov";
    bakmil.previous = "Depo";
    bakmil.color = "red";

    nariman_narimanov.next = "Gənclik";
    nariman_narimanov.previous = "Bakmil";
    nariman_narimanov.color = "red";
    
    ganjlik.next = "28 May";
    ganjlik.previous = "Nəriman Nərimanov";
    ganjlik.color = "red";

    may_28.next = "Sahil";
    may_28.previous = "Gənclik";
    may_28.color = "red";

    sahil.next = "İçərişəhər";
    sahil.previous = "28 May";
    sahil.color = "red";

    icherisheher.next = "Sahil";
    icherisheher.previous = "Sahil";
    icherisheher.color = "red";
}