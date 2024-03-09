#include "question2.h"

//using std::time;
using std::cout;

int get_hours(int seconds_since_1970)
{
    int hours = (seconds_since_1970 / 3600) % 24 % 365 % 54; // (seconds_since_1970 / 3600 seconds) % 24 hours % 365 days % 54 years
    //int hours_since_1970 = hours * 24 * 365 * 54;

    return hours;
}

int get_minutes(int seconds_since_1970)
{
    int minutes = (seconds_since_1970 / 60) % 24 % 365 % 54; // (seconds_since_1970 / 60 seconds) % 24 hours % 365 days % 54 years

    return minutes;
}

int get_seconds(int seconds_since_1970)
{
    int seconds = seconds_since_1970 % 24 % 365 % 54; // (seconds_since_1970 seconds) % 24 hours % 365 days % 54 years

    return seconds;
}