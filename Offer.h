#pragma once
#include <iostream>
#include "Date.h"

/*
 * Class Offer:
 * std::string id;
 * std::string departure;
 * std::string destination;
 * float price;
 * Date date
 *
 * Class date:
 * day
 * month
 * year
 */

class Offer
{
    std::string id;
    std::string departure;
    std::string destination;
    std::string type;
    float price;
    Date date;

public:
    Offer();
    Offer(std::string i, std::string dep, std::string dest, std::string ty, float pr, Date d);

    float getPrice() const;
    Date getDate();
    std::string getId();
    std::string getDeparture();
    std::string getDestination();
    std::string getType();

    void setDate(Date);
    void setId(std::string);
    void setDeparture(std::string);
    void setDestination(std::string);
    void setType(std::string);
    void setPrice(float pr);
    friend std::ostream& operator<<(std::ostream& s, const Offer&);
    bool operator==(const Offer &other) const;
};

