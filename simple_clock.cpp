#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main()
{
    while (true)
    {
        auto t = time(nullptr);
        string s_time = asctime(localtime(&t));
        s_time.pop_back();
        cout << "\r" << s_time.c_str() << flush;
        this_thread::sleep_for(chrono::milliseconds(1000));
    }
    return 0;
}
