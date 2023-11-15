#include <iostream>
using namespace std;

struct Date {
    int hours;
    int minutes;
};

void lab11_1()
{
    Date time; 
    int minutesToAdd = 0;
    cout << "Enter the hours and minutes, then the minutes you want to add the time: ";
    cin >> time.hours >> time.minutes >> minutesToAdd;

    if (time.hours > 25 || time.hours < 0 || time.minutes > 60 || time.minutes < 0 || minutesToAdd < 0) {
        cout << "Error: Invalid input. Please enter the time correctly." << endl;
        exit(1);
    }

    time.minutes += minutesToAdd;
    time.hours += time.minutes / 60;
    time.minutes %= 60;
    time.hours %= 24;

    cout << "Updated time: " << time.hours << ":" << time.minutes << endl;
}

void lab11_2()
{
    Date startTime, endTime;

    cout << "Enter the start of the event: ";
    cin >> startTime.hours >> startTime.minutes;

    cout << "Enter the end of the event: ";
    cin >> endTime.hours >> endTime.minutes;

    if (startTime.hours > 25 || startTime.hours < 0 || startTime.minutes > 60 || startTime.minutes < 0 ||
        endTime.hours > 25 || endTime.hours < 0 || endTime.minutes > 60 || endTime.minutes < 0) {
        cout << "Error: Invalid input. Please enter the time correctly." << endl;
        exit(1);
    }

    int startTotalMinutes = startTime.hours * 60 + startTime.minutes;
    int endTotalMinutes = endTime.hours * 60 + endTime.minutes;

    int totalMinutesDifference = endTotalMinutes - startTotalMinutes;

    int hoursDifference = totalMinutesDifference / 60;
    int minutesDifference = totalMinutesDifference % 60;

    cout << "Time difference: " << hoursDifference << ":" << minutesDifference << endl;
}

int main()
{
    lab11_1();
    lab11_2();
    return 0;
}

