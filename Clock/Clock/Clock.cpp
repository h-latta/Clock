// Clock.cpp
//by Harrison Latta

#include <iostream>
#include <string>
using namespace std;

//Function to display main menu
void mainMenu() {

    cout << endl;
    cout << "**************************" << endl;
    cout << "*   1- Add One Hour      *" << endl;
    cout << "*   2- Add One Minute    *" << endl;
    cout << "*   3- Add One Second    *" << endl;
    cout << "*   4- Exit Program      *" << endl;
    cout << "**************************" << endl;

}

void clockTop() {

    cout << "**************************    **************************" << endl;
    cout << "*     12 Hour Clock      *    *      24 Hour Clock     *" << endl;


}

void clockBottom() {
    cout << "**************************    **************************" << endl;
}

// Function to display the clock times
void clockTimes(int hour, int min, int sec) {
    // Variables to convert 24 hour to 12 hour clock
    int tHour;
    string amPm = "AM";

    // If statement to convert 24 hour to 12 hour
    if (hour == 0) {
        tHour = 12;
    }
    else if (hour == 12) {
        tHour = hour;
        amPm = "PM";
    }
    else if (hour > 12) {
        tHour = hour - 12;
        amPm = "PM";
    }
    else {
        tHour = hour;
    }

    cout << "*     " << tHour << ":" << min << ":" << sec << " " << amPm << "       *    *      " << hour << ":" << min << ":" << sec << "          *" << endl;
}

// Function to allow choices in the main menu
void menuChoice(int& userInput, int& hour, int& minute, int& second) {

    cout << "Select an option: (1-4)" << endl;
    cin >> userInput;
        switch (userInput) {
        case 1:
            if (hour < 23) {
                ++hour;
            }
            else {
                hour = 00;
            }
        case 2:
            if (minute < 59) {
                ++minute;
            }
            else {
                minute = 00;
            }
        case 3:
            if (second < 59) {
                ++second;
            }
            else {
                second = 00;
            }
        case 4:
            cout << "See you later!" << endl;
        default:
            cout << "Not a valid option. Please enter 1-4." << endl;
            userInput = 0;
        }

}

int main()
{
    int userInput = 0;
    int setHr = 00;
    int setMin = 00;
    int setSec = 00;

    clockTop();
    clockTimes(setHr, setMin, setSec);
    clockBottom();
    mainMenu();
    menuChoice(userInput, setHr, setMin, setSec);
}


