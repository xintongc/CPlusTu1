//
// Created by xintong cheng on 2018-03-02.
//

#ifndef TU7_DAYOFYEAR_H
#define TU7_DAYOFYEAR_H


class DayOfYear {
public:
    DayOfYear(int monthValue, int dayValue);
    DayOfYear(int monthValue);
    DayOfYear();
    void input();
    void output();
    int getMonthNumber();
    int getDay();

private:
    int month;
    int day;
    void testDate();
};


#endif //TU7_DAYOFYEAR_H


//
// Created by xintong cheng on 2018-03-02.
//
#include <iostream>

using namespace std;

#include "DayOfYear.h"

DayOfYear::DayOfYear(int monthValue, int dayValue) : month(monthValue),day(dayValue)
{
    testDate();
}

DayOfYear::DayOfYear(int monthValue) : month(monthValue), day(1)
{
    testDate();
}

DayOfYear::DayOfYear(): month(1),day(1) {}

void DayOfYear::testDate()
{
    if((month< 1) ||(month > 12)){
        cout << "Illegal month value";
    }
}

#include <iostream>
#include "DayOfYear.h"

using namespace std;

class Holiday
{
public:
    Holiday();
    Holiday(int month, int day, bool theEnforcement);
    void output();

private:
    DayOfYear date;         //member variable of a class type
    bool parkingEnforcement;  //true if enforced
};

int main() {

    Holiday h(22,14,true);
    Holiday h1;
    cout << "Testing the class Holiday" << endl;

    return 0;
}

//invocations of constructors from the class DayOfYear

Holiday::Holiday() : date(1,1), parkingEnforcement(false) {}

Holiday::Holiday(int month, int day, bool theEnforcement): date(month, day), parkingEnforcement(theEnforcement) {}
