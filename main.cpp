#include "DynamicArrayTest.h"
#include "FilteringTest.h"
#include "OfferTest.h"

#include "DynamicArray.h"
#include "FilterPrice.h"
#include "FilterType.h"
#include "FilteringCriteriaAnd.h"
#include "Offer.h"

#include <iostream>

using std::cin;
using std::cout;
using std::string;

Offer readOffer() {
  string id;
  string depart;
  string dest;
  string type;
  float price;
  int yy;
  int mm;
  int dd;
  cout << "Id: ";
  cin >> id;
  cout << "Departure: ";
  cin >> depart;
  cout << "Destination: ";
  cin >> dest;
  cout << "Type: ";
  cin >> type;
  cout << "Price: ";
  cin >> price;
  cout << "Year: ";
  cin >> yy;
  cout << "Month: ";
  cin >> mm;
  cout << "Day: ";
  cin >> dd;
  Date d(dd, mm, yy);
  Offer o(id, depart, dest, type, price, d);
  return o;
}

void displayMenu() {
  string message = "Please select your option:\n";
  message += "A|a add an offer\n";
  message += "S|s show all offers\n";
  message += "P|p filter offers by price\n";
  message += "T|t filter offers by type\n";
  message += "B|b filter offers by type and price\n";
  message += "Q|q quit\n";

  cout << "\n\n" << message;

  bool running = true;
  char answer;

  DynamicArray<Offer> da(1);

  Date date1(2, 7, 2022);
  Offer offer1("1", "dep1", "dest1", "circuit", 5000, date1);
  da.append(offer1);

  Date date2(3, 7, 2022);
  Offer offer2("2", "dep2", "dest2", "circuit", 6000, date2);
  da.append(offer2);

  Date date3(4, 7, 2022);
  Offer offer3("3", "dep3", "dest3", "cruise", 2000, date3);
  da.append(offer3);

  Date date4(4, 4, 2022);
  Offer offer4("4", "dep4", "dest4", "circuit", 4000, date4);
  da.append(offer4);

  while (running) {
    cout << "\nOption: ";
    cin >> answer;
    if (answer == 'A' || answer == 'a') {
      Offer offer = readOffer();
      da.append(offer);
    } else if (answer == 'S' || answer == 's') {
      cout << da;
    } else if (answer == 'P' || answer == 'p') {
      float price;
      cout << "Price: ";
      cin >> price;
      FilterPrice fil(price);
      DynamicArray<Offer> da1 = fil.filter(da);
      cout << da1;
    } else if (answer == 'T' || answer == 't') {
      string type;
      cout << "Type: ";
      cin >> type;
      FilterType fil(type);
      DynamicArray<Offer> da1 = fil.filter(da);
      cout << da1;
    } else if (answer == 'B' || answer == 'b') {
      float price;
      cout << "Price: ";
      cin >> price;
      string type;
      cout << "Type: ";
      cin >> type;
      FilteringCriteria *fp = new FilterPrice(price);
      FilteringCriteria *ft = new FilterType(type);
      FilteringCriteriaAnd ftp(ft, fp);
      DynamicArray<Offer> da1 = ftp.filter(da);
      cout << da1;
    } else if (answer == 'Q' || answer == 'q') {
      cout << "Quitting...\n";
      running = false;
    } else {
      cout << "Invalid option\n";
    }
  }
}

int main() {

  OfferTest::runAllTests();
  FilteringTest::runAllTests();
  DynamicArrayTest::runAllTests();

  displayMenu();

  return 0;
}
