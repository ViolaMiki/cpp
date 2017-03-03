#include <iostream>
using namespace std;
class Clock{
public:
    Clock(int newH, int newM, int newS);
    void setTime(int newH, int newM, int newS);
    void showTime();
private:
    int hour, minute, second;
};

Clock::Clock(int newH, int newM, int newS):hour(newH),minute(newM),second(newS){}
void Clock::showTime() {
    cout << hour << ':' << minute << ':' << second << endl;
}
int main() {
    Clock c();
    c.showTime();
    return 0;
}
