#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

std::mutex mtx_file;
std::mutex mtx_station_light_green;

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

std::mutex mtx_Ulduz;
std::mutex mtx_Koroglu;
std::mutex mtx_Gara_Garayev;
std::mutex mtx_Neftchiler;
std::mutex mtx_Xalqlar_Dostlugu;
std::mutex mtx_Ahmedli;
std::mutex mtx_Hazi_Aslanov;

std::mutex mtx_Cafar_Cabbarli;
std::mutex mtx_Xatai;

void station(int id, const std::string &str)
{
    std::lock_guard<std::mutex> lock(mtx_file);
    std::cout << id << " in " << str << " station\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
}

void station_light_green(int id, const std::string &str)
{
    std::lock_guard<std::mutex> lock(mtx_station_light_green);
    std::cout << id << " in " << str << " station\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
}

//-----------------------------------------------------
// red line 1

void Icherisheher(int id)
{
    std::cout << id << " in way Icherisheher\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Icherisheher";
    std::unique_lock<std::mutex> lock(mtx_Icherisheher);
    station(id, str);
    lock.unlock();
}

void Sahil(int id)
{
    std::cout << id << " in way Sahil\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Sahil";
    std::unique_lock<std::mutex> lock(mtx_Sahil);
    station(id, str);
    lock.unlock();
}

void May_28(int id)
{
    std::cout << id << " in way 28 May\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "28 May";
    std::unique_lock<std::mutex> lock(mtx_28_May);
    station(id, str);
    lock.unlock();
}

void Ganjlik(int id)
{
    std::cout << id << " in way Ganjlik\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Ganjlik";
    std::unique_lock<std::mutex> lock(mtx_Ganjlik);
    station(id, str);
    lock.unlock();
}

void Nariman_Narimanov(int id)
{
    std::cout << id << " in way Nariman Narimanov\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Nariman Narimanov";
    std::unique_lock<std::mutex> lock(mtx_Nariman_Narimanov);
    station(id, str);
    lock.unlock();
}

void Bakmil(int id)
{
    std::cout << id << " in way Bakmil\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Bakmil";
    std::unique_lock<std::mutex> lock(mtx_Bakmil);
    station(id, str);
    lock.unlock();
}

//---------------------------------------------------------
//  red line 2

void Ulduz(int id)
{
    std::cout << id << " in way Ulduz\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Ulduz";
    std::unique_lock<std::mutex> lock(mtx_Ulduz);
    station(id, str);
    lock.unlock();
}

void Koroglu(int id)
{ 
    std::cout << id << " in way Koroglu\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Koroglu";
    std::unique_lock<std::mutex> lock(mtx_Koroglu);
    station(id, str);
    lock.unlock();
}

void Gara_Garayev(int id)
{
    std::cout << id << " in way Gara Garayev\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Gara Garayev";
    std::unique_lock<std::mutex> lock(mtx_Gara_Garayev);
    station(id, str);
    lock.unlock();
}

void Neftchiler(int id)
{
    std::cout << id << " in way Neftchiler\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Neftchiler";
    std::unique_lock<std::mutex> lock(mtx_Neftchiler);
    station(id, str);
    lock.unlock();
}

void Xalqlar_Dostlugu(int id)
{
    std::cout << id << " in way Xalqlar Dostlugu\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Xalqlar Dostlugu";
    std::unique_lock<std::mutex> lock(mtx_Xalqlar_Dostlugu);
    station(id, str);
    lock.unlock();
}

void Ahmedli(int id)
{
    std::cout << id << " in way Ahmedli\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Ahmedli";
    std::unique_lock<std::mutex> lock(mtx_Ahmedli);
    station(id, str);
    lock.unlock();
}

void Hazi_Aslanov(int id)
{
    std::cout << id << " in way Hazi Aslanov\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Hazi Aslanov";
    std::unique_lock<std::mutex> lock(mtx_Hazi_Aslanov);
    station(id, str);
    lock.unlock();
}


//---------------------------------------------------------
//  violet line

void Xodjasan(int id)
{
    std::cout << id << " in way Xodjasan\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Xodjasan";
    std::unique_lock<std::mutex> lock(mtx_Xodjasan);
    station(id, str);
    lock.unlock();
}

void Avtovogzal(int id)
{
    std::cout << id << " in way Avtovogzal\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Avtovogzal";
    std::unique_lock<std::mutex> lock(mtx_Avtovogzal);
    station(id, str);
    lock.unlock();
}

void Memar_Adjemi(int id)
{
    std::cout << id << " in way Memar Adjemi\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Memar Adjemi";
    std::unique_lock<std::mutex> lock(mtx_Memar_Adjemi);
    station(id, str);
    lock.unlock();
}

void Noyabr_8(int id)
{
    std::cout << id << " in way 8 Noyabr\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "8 Noyabr";
    std::unique_lock<std::mutex> lock(mtx_8_Noyabr);
    station(id, str);
    lock.unlock();
}

//---------------------------------------------------------
//  light green line

void Cafar_Cabbarli(int id)
{
    std::cout << id << " in way Cafar Cabbarli\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Cafar Cabbarli";
    std::unique_lock<std::mutex> lock(mtx_Cafar_Cabbarli);
    station_light_green(id, str);
    lock.unlock();
}

void Xatai(int id)
{
    std::cout << id << " in way Xatai\n";
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::string str = "Xatai";
    std::unique_lock<std::mutex> lock(mtx_Xatai);
    station_light_green(id, str);
    lock.unlock();
}

//---------------------------------------------------------


void train_red(int id)
{
    int i = 0;
    while(i < 100)
    {
        std::this_thread::sleep_for(std::chrono::seconds(5));
        Icherisheher(id);
        Sahil(id);
        May_28(id);
        Ganjlik(id);
        Nariman_Narimanov(id);
        if(i % 10 == 0)
        { 
            Bakmil(id);
            std::this_thread::sleep_for(std::chrono::seconds(5));
            Nariman_Narimanov(id);
            Ganjlik(id);
            May_28(id);
            Sahil(id);
            continue;
        }
        Ulduz(id);
        Koroglu(id);
        Gara_Garayev(id);
        Neftchiler(id);
        Xalqlar_Dostlugu(id);
        Ahmedli(id);
        Hazi_Aslanov(id);
        std::this_thread::sleep_for(std::chrono::seconds(5));
        Ahmedli(id);
        Xalqlar_Dostlugu(id);
        Neftchiler(id);
        Gara_Garayev(id);
        Koroglu(id);
        Ulduz(id);
        Nariman_Narimanov(id);
        Ganjlik(id);
        May_28(id);
        Sahil(id);
        i++;
    }
}


void train_violet(int id)
{
    int i = 0;
    while(i < 70)
    {
        std::this_thread::sleep_for(std::chrono::seconds(5));
        Xodjasan(id);
        Avtovogzal(id);
        Memar_Adjemi(id);
        Noyabr_8(id);
        std::this_thread::sleep_for(std::chrono::seconds(5));
        Memar_Adjemi(id);
        Avtovogzal(id);
        i++;
    }
}

void train_light_green(int id)
{
    int i = 0;
    while(i < 40)
    {
        std::this_thread::sleep_for(std::chrono::seconds(5));
        Xatai(id);
        Cafar_Cabbarli(id);
        i++;
    }
}

void void_red_train()
{
    std::vector<std::thread> train_red_vec;

    int num;

    for(size_t i = 0; i != 20; i++)
    {
        std::srand(std::time(nullptr));

        num = rand() % 1000;
        num += 1000;

        std::thread t_r(train_red, num);

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
    std::vector<std::thread> train_violet_vec;

    int num;

    for(size_t i = 0; i != 8; i++)
    {
        std::srand(std::time(nullptr));

        num = rand() % 1000;
        num += 1137;
        num %= 1000;
        num += 1000;

        std::thread t_v(train_violet, num);

        train_violet_vec.push_back(std::move(t_v));
        
        std::this_thread::sleep_for(std::chrono::seconds(5));
    }

    for(auto &tr: train_violet_vec)
    {
        tr.join();
    }
}

void void_light_green_line()
{
    std::vector<std::thread> train_light_green_vec;

    int num;

    for(size_t i = 0; i != 2; i++)
    {
        std::srand(std::time(nullptr));

        num = rand() % 1000;
        num += 1259;
        num %= 1000;
        num += 1000;

        std::thread t_g_l(train_light_green, num);

        train_light_green_vec.push_back(std::move(t_g_l));
        
        std::this_thread::sleep_for(std::chrono::seconds(5));
    }

    for(auto &tr: train_light_green_vec)
    {
        tr.join();
    }
}

int main()
{
    std::thread red_line(void_red_train);
    std::thread violet_line(void_violet_line);
    std::thread light_green_line(void_light_green_line);

    red_line.join();
    violet_line.join();
    light_green_line.join();

    return 0;
}