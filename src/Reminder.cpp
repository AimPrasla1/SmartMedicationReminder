#include "Reminder.h"
#include "Medication.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <ctime>

using namespace std;

void checkReminders() {
    while (true) {
        time_t now = time(nullptr);
        tm *localTime = localtime(&now);
        for (const auto &med : medications) {
            if (localTime->tm_hour == med.hour && localTime->tm_min == med.minute) {
                cout << "\n[Reminder] Time to take " << med.name << " (" << med.dosage << ")!\n";
            }
        }
        this_thread::sleep_for(chrono::minutes(1));
    }
}