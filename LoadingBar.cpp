#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
#include <iomanip>

using namespace std;

void LoadingBar(int Progress, int Total) {
    int BarWidth = 50;
    float Percentage = (float)Progress / Total;
    int Pos = BarWidth * Percentage;

    cout << "[";
    for (int i = 0; i < BarWidth; ++i) {
        if (i < Pos)
            cout << "=";
        else if (i == Pos)
            cout << ">";
        else
            cout << " ";
    }
    cout << "] " << int(Percentage * 100.0) << " %\r";
    cout.flush();
}

int main() {
    int Total = 100;

    for (int i = 0; i <= Total; ++i) {
        LoadingBar(i, Total);
        this_thread::sleep_for(chrono::milliseconds(50));
    }

    cout << "\nPress Enter to Exit...";
    cin.get();
    return 0;
}