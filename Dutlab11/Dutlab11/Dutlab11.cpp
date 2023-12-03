#include <iostream>
using namespace std;

struct Time {
    int hours, minutes;
};

void lab11_1()
{
    Time time; 
    int minutesToAdd = 0;
    cout << "Enter the hours and minutes, then the minutes you want to add the time: ";
    cin >> time.hours >> time.minutes >> minutesToAdd;

    if (time.hours > 24 || time.hours < 0 || time.minutes > 59 || time.minutes < 0 || minutesToAdd < 0) {
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
    Time startTime, endTime;

    cout << "Enter the start of the event: ";
    cin >> startTime.hours >> startTime.minutes;

    cout << "Enter the end of the event: ";
    cin >> endTime.hours >> endTime.minutes;

    if (startTime.hours > 24 || startTime.hours < 0 || startTime.minutes > 59 || startTime.minutes < 0 ||
        endTime.hours > 24 || endTime.hours < 0 || endTime.minutes > 59 || endTime.minutes < 0) {
        cout << "Error: Invalid input. Please enter the time correctly." << endl;
        exit(1);
    }

    int startTotalMinutes = startTime.hours * 60 + startTime.minutes;
    int endTotalMinutes = endTime.hours * 60 + endTime.minutes;

    int totalMinutesDifference = endTotalMinutes - startTotalMinutes;

    if (totalMinutesDifference < 0) {
        totalMinutesDifference += 24 * 60;
    }

    int hoursDifference = totalMinutesDifference / 60;
    int minutesDifference = totalMinutesDifference % 60;

    cout << "Time difference: " << hoursDifference << ":" << minutesDifference << endl;
}

int main()
{
    lab11_2();
    return 0;
}

