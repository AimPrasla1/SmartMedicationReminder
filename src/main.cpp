#include <iostream>
#include <thread>
#include "Medication.h"
#include "Reminder.h"

using namespace std;

int main() {
    loadMedications();
    thread reminderThread(checkReminders);
    reminderThread.detach();

    while (true) {
        cout << "\nSmart Medication Reminder\n";
        cout << "1. Add Medication\n2. View Medications\n3. Clear Medications\n4. Exit\nChoose an option: ";
        int choice;
        cin >> choice;
        if (choice == 1) addMedication();
        else if (choice == 2) viewMedications();
        else if (choice == 3) clearMedications();
        else break;
    }
    return 0;
}