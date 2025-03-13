#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <fstream>

std::mutex mtx_Icherisheher;
std::mutex mtx_Sahil;
std::mutex mtx_28_May;
std::mutex mtx_Ganjlik;
std::mutex mtx_Nariman_Narimanov;
std::mutex mtx_Bakmil;

std::mutex mtx_Xodjasan;
std::mutex mtx_Avtovogzal;
std::mutex mtx_Memar_Adjemi;
std::mutex mtx_8_Noyabr;

void station(int id, const std::string &str, std::ofstream &faylik)
{
    faylik << id << " in " << str << " station\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
}

//-----------------------------------------------------
// red line

void Icherisheher(int id, std::ofstream &file_red_line)
{
    file_red_line << id << " in way Icherisheher\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Icherisheher";
    std::unique_lock<std::mutex> lock(mtx_Icherisheher);
    station(id, str, file_red_line);
    lock.unlock();
}

void Sahil(int id, std::ofstream &file_red_line)
{
    file_red_line << id << " in way Sahil\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Sahil";
    std::unique_lock<std::mutex> lock(mtx_Sahil);
    station(id, str, file_red_line);
    lock.unlock();
}

void May_28(int id, std::ofstream &file_red_line)
{
    file_red_line << id << " in way 28 May\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "28 May";
    std::unique_lock<std::mutex> lock(mtx_28_May);
    station(id, str, file_red_line);
    lock.unlock();
}

void Ganjik(int id, std::ofstream &file_red_line)
{
    file_red_line << id << " in way Ganjlik\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Ganjlik";
    std::unique_lock<std::mutex> lock(mtx_Ganjlik);
    station(id, str, file_red_line);
    lock.unlock();
}

void Nariman_Narimanov(int id, std::ofstream &file_red_line)
{
    file_red_line << id << " in way Nariman Narimanov\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Nariman Narimanov";
    std::unique_lock<std::mutex> lock(mtx_Nariman_Narimanov);
    station(id, str, file_red_line);
    lock.unlock();
}

void Bakmil(int id, std::ofstream &file_red_line)
{
    file_red_line << id << " in way Bakmil\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Bakmil";
    std::unique_lock<std::mutex> lock(mtx_Bakmil);
    station(id, str, file_red_line);
    lock.unlock();
}

//---------------------------------------------------------
//  violet line

void Xodjasan(int id, std::ofstream &file_violet_line)
{
    file_violet_line << id << " in way Xodjasan\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Xodjasan";
    std::unique_lock<std::mutex> lock(mtx_Xodjasan);
    station(id, str, file_violet_line);
    lock.unlock();
}

void Avtovogzal(int id, std::ofstream &file_violet_line)
{
    file_violet_line << id << " in way Avtovogzal\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Avtovogzal";
    std::unique_lock<std::mutex> lock(mtx_Avtovogzal);
    station(id, str, file_violet_line);
    lock.unlock();
}

void Memar_Adjemi(int id, std::ofstream &file_violet_line)
{
    file_violet_line << id << " in way Memar Adjemi\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Memar Adjemi";
    std::unique_lock<std::mutex> lock(mtx_Memar_Adjemi);
    station(id, str, file_violet_line);
    lock.unlock();
}

void Noyabr_8(int id, std::ofstream &file_violet_line)
{
    file_violet_line << id << " in way 8 Noyabr\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "8 Noyabr";
    std::unique_lock<std::mutex> lock(mtx_8_Noyabr);
    station(id, str, file_violet_line);
    lock.unlock();
}

//---------------------------------------------------------


void train_red(int id, std::ofstream file_red_line)
{
    while(1)
    {
        std::this_thread::sleep_for(std::chrono::seconds(5));
        Icherisheher(id, file_red_line);
        Sahil(id, file_red_line);
        May_28(id, file_red_line);
        Ganjik(id, file_red_line);
        Nariman_Narimanov(id, file_red_line);
        Bakmil(id, file_red_line);
        std::this_thread::sleep_for(std::chrono::seconds(5));
        Nariman_Narimanov(id, file_red_line);
        Ganjik(id, file_red_line);
        May_28(id, file_red_line);
        Sahil(id, file_red_line);
    }
}

void train_violet(int id, std::ofstream &file_violet_line)
{
    while(1)
    {
        std::this_thread::sleep_for(std::chrono::seconds(5));
        Xodjasan(id, file_violet_line);
        Avtovogzal(id, file_violet_line);
        Memar_Adjemi(id, file_violet_line);
        Noyabr_8(id, file_violet_line);
        std::this_thread::sleep_for(std::chrono::seconds(5));
        Memar_Adjemi(id, file_violet_line);
        Avtovogzal(id, file_violet_line);
    }
}

void void_red_train()
{
    std::ofstream file_red_line("output_red_line.txt");

    std::vector<std::thread> train_red_vec;

    int num;

    for(size_t i = 0; i != 10; i++)
    {
        std::srand(std::time(nullptr));

        num = rand() % 1000;
        num += 1000;

        std::thread t_r(train_red, num, std::move(file_red_line));

        train_red_vec.push_back(std::move(t_r));
        
        std::this_thread::sleep_for(std::chrono::seconds(5));
    }

    for(auto &tr: train_red_vec)
    {
        tr.join();
    }
}

void void_violet_line()
{
    std::ofstream file_violet_line("output_violet_line.txt");

    std::vector<std::thread> train_violet_vec;

    int num;

    for(size_t i = 0; i != 8; i++)
    {
        std::srand(std::time(nullptr));

        num = rand() % 1000;
        num += 1137;
        num %= 1000;
        num += 1000;

        std::thread t_v(train_violet, num, std::ref(file_violet_line));

        train_violet_vec.push_back(std::move(t_v));
        
        std::this_thread::sleep_for(std::chrono::seconds(5));
    }

    for(auto &tr: train_violet_vec)
    {
        tr.join();
    }
}

int main()
{
    std::thread red_line(void_red_train);
    std::thread violet_line(void_violet_line);

    red_line.join();
    violet_line.join();

    return 0;
}