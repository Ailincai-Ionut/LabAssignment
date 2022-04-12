#include "Offer.h"


Offer::Offer() {
    this->id = "0";
    this->departure = "";
    this->destination = "";
    this->type = "";
    this->price = 0;
    this->date = Date();
}

Offer::Offer(std::string i, std::string dep, std::string dest, std::string ty, float pr, Date d) {
    this->id = i;
    this->departure = dep;
    this->destination = dest;
    this->type = ty;
    this->price = pr;
    this->date = d;
}


float Offer::getPrice() const {
    return this->price;
}

Date Offer::getDate()  {
    return this->date;
}

std::string Offer::getId() {
    return this->id;
}

std::string Offer::getDeparture() {
    return this->departure;
}

std::string Offer::getDestination() {
    return this->destination;
}

std::string Offer::getType() {
    return this->type;
}

bool Offer::operator==(const Offer &other) const {
    return this->type == other.type && this->destination == other.destination && this->departure == other.departure &&
            this->id == other.id && this->price == other.price;
}

void Offer::setDate(Date date1) {
    this->date = date1;
}

void Offer::setId(std::string st) {
    this->id = st;
}

void Offer::setDeparture(std::string st) {
    this->departure = st;
}

void Offer::setDestination(std::string st) {
    this->destination = st;
}

void Offer::setType(std::string st) {
    this->type = st;
}

void Offer::setPrice(float pr) {
    this->price = pr;
}

std::ostream& operator<<(std::ostream &s, const Offer& offer) {
    s<<"Offer " << offer.id << " from " << offer.departure << " to " << offer.destination << ", price: "
     << offer.price << " type: " << offer.type << " date: " << offer.date;
    return s;
}
