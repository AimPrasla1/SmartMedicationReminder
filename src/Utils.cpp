#include "Utils.h"
#include <ctime>
#include <sstream>

using namespace std;

string getCurrentTime() {
    time_t now = time(nullptr);
    tm *localTime = localtime(&now);
    stringstream ss;
    ss << localTime->tm_hour << ":" << localTime->tm_min;
    return ss.str();
}