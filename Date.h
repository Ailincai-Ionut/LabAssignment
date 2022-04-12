#ifndef LABORATORY6_XBIRIS_DATE_H
#define LABORATORY6_XBIRIS_DATE_H
#include <iostream>

class Date {
public:
    Date();
    Date(int, int, int);

    int getDay() const;
    int getMonth() const;
    int getYear() const;

    static bool dateOk(int d, int m, int y) ;
    bool operator==(const Date& other) const;
    friend std::ostream& operator<<(std::ostream& s, const Date&);
private:
    int day;
    int month;
    int year;
};


#endif //LABORATORY6_XBIRIS_DATE_H
