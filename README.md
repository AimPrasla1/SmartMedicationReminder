# SmartMedicationReminder
This C++ application helps users manage their medication schedules by providing reminders for when to take specific medications. The program allows users to:

Add new medications with the name, dosage, and time.

View a list of all scheduled medications.

Clear all saved medications from both memory and the data file.

The application runs a background thread to check the current time and notify the user when it's time to take their medication.

Getting Started: 

To get started, make sure you have the necessary tools installed. For the backend (written in C++), you need a C++ compiler like g++ or Visual Studio. For the frontend, you just need a modern web browser, and optionally, Python if you want to run a local server.

Running the Backend: 

First, open your terminal and navigate to the project directory where the C++ files are located. Compile the C++ code with your compiler, and once compiled, run the backend. This will start the backend and allow you to interact with it through the command-line interface to add, view, or clear medication reminders.

Compile the C++ code using the following command:

g++ -o med_reminder src/main.cpp src/Medication.cpp src/Reminder.cpp src/Utils.cpp -pthread -std=c++11

Once compiled, run the backend with:

./med_reminder

Running the Frontend: 

To view the frontend, navigate to the directory where the index.html file is located. You can open the file directly in your web browser, or if you want to run a local server.