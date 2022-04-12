#include "Date.h"

Date::Date() {
    this->day = 1;
    this->month = 1;
    this->year = 2022;
}

Date::Date(int d, int m, int y) {
    this->day = d;
    this->month = m;
    this->year = y;
    if(dateOk(d, m, y))
    {
        this->day = d;
        this->month = m;
        this->year = y;
    }
    else
    {
        this->day = 1;
        this->month = 1;
        this->year = 2022;
    }
}

int Date::getDay() const {
    return this->day;
}

int Date::getMonth() const {
    return this->month;
}

int Date::getYear() const {
    return this->year;
}

bool Date::operator==(const Date &other) const {
    return this->year == other.year && this->day == other.day && this->month == other.month;
}

bool Date::dateOk(int d, int m, int y) {
    if(d <= 0 || m<=0 || y<0)
        return false;
    if(d > 31 || m>12)
        return false;
    if(m == 4 || m== 6 || m==9 || m == 11)
        if(d > 30)
            return false;
    if(m == 2){
        if((y%4==0) && (y%100!=0) || y%400==0) {
            if (d > 29)
                return false;
        }
        else
            if(d > 28)
                return false;
    }
    return true;
}

std::ostream &operator<<(std::ostream &s, const Date &d) {
    s<<"("<<d.getDay()<<"."<<d.getMonth()<<"."<<d.getYear()<<")";
    return s;
}
