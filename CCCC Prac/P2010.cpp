#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <cmath>
struct dateSt {
    int year;
    int month;
    int day;
};
dateSt resolveRate(long date) {
    dateSt res;
    res.day = date % 100;
    res.month = ((date - res.day) / 100) % 100;
    res.year = (((date - res.day) / 100) - res.month) / 100;
    //std::cout << res.year << "/" << res.month << "/" << res.day << std::endl;
    return res;
}
dateSt addAday(dateSt date, int maxDayOfMo) {
    if (date.day == maxDayOfMo) {
        date.day = 0;
        date.month++;
    }else {
        date.day += 1;
    }
    if (date.month == 13) {
        date.year++;
        date.month = 1;
    }
    return date;
}

long dateFromStruct(dateSt date) {
    long result = date.year * 10000;
    result += date.month * 100;
    result += date.day;
    return result;
}

long addDate(long date) {
    dateSt dateStruct = resolveRate(date);
    switch (dateStruct.month) {
        case 1:
            dateStruct = addAday(dateStruct, 31);
        break;
        case 3:
            dateStruct = addAday(dateStruct, 31);

        break;
        case 5:
            dateStruct = addAday(dateStruct, 31);

        break;
        case 7:
            dateStruct = addAday(dateStruct, 31);

        break;
        case 8:
            dateStruct = addAday(dateStruct, 31);

        break;
        case 10:
            dateStruct = addAday(dateStruct, 31);

        break;
        case 12:
            dateStruct = addAday(dateStruct, 31);

        break;
        case 2:
            if ((dateStruct.year % 4 == 0 && dateStruct.year % 100 != 0) || dateStruct.year % 400 == 0) {
                dateStruct = addAday(dateStruct, 29);
            }else {
                dateStruct = addAday(dateStruct, 28);
            }
        break;
        default:
            dateStruct = addAday(dateStruct, 30);
        break;
    }
    return dateFromStruct(dateStruct);
}
bool check(long date) {
    std::string tmp= std::to_string(date);
    for (int i = 0; i <= 3; i++) {
        if (tmp[i] != tmp[7 - i]) {
            return false;
        }
    }
    return true;
}
int main() {
    long date1 = 0, date2 = 0, result = 0;

    std::cin >> date1 >> date2;
    long temp = date1;
    while (temp <= date2) {
        if (check(temp)){ result++;
            //std::cout << temp << std::endl;
        }
        temp = addDate(temp);
    }
    std::cout << result << std::endl;

    return 0;
}