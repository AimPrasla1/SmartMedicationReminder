#include "Medication.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

vector<Medication> medications;
const string DATA_FILE = "data/medications.txt";

void saveMedications() {
    ofstream file(DATA_FILE);
    for (const auto &med : medications) {
        file << med.name << "," << med.dosage << "," << med.hour << "," << med.minute << endl;
    }
    file.close();
}

void loadMedications() {
    ifstream file(DATA_FILE);
    if (!file) return;
    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        Medication med;
        char comma;
        ss >> med.name >> comma >> med.dosage >> comma >> med.hour >> comma >> med.minute;
        medications.push_back(med);
    }
    file.close();
}

void addMedication() {
    Medication med;
    cout << "Enter medication name: "; cin >> med.name;
    cout << "Enter dosage: "; cin >> med.dosage;
    cout << "Enter hour (24-hour format): "; cin >> med.hour;
    cout << "Enter minute: "; cin >> med.minute;
    medications.push_back(med);
    saveMedications();
    cout << "Medication added successfully!\n";
}

void viewMedications() {
    if (medications.empty()) {
        cout << "No medications added.\n";
        return;
    }
    cout << "\nMedication List:\n";
    for (const auto &med : medications) {
        cout << "- " << med.name << " (" << med.dosage << ") at " << med.hour << ":" << med.minute << "\n";
    }
}

void clearMedications() {
    medications.clear(); // Clear in memory
    ofstream file(DATA_FILE, ofstream::trunc); // Clear file
    file.close();
    cout << "All medications have been cleared!\n";
}
