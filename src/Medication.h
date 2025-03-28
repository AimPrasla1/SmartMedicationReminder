#ifndef MEDICATION_H
#define MEDICATION_H

#include <string>
#include <vector>

struct Medication {
    std::string name;
    std::string dosage;
    int hour;
    int minute;
};

extern std::vector<Medication> medications;

void loadMedications();
void saveMedications();
void addMedication();
void viewMedications();
void clearMedications(); // New function to clear medications

#endif