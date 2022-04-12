#include <cassert>

#include "OfferTest.h"
#include "Date.h"

int OfferTest::test_create() {
    Offer o1;
    assert(o1.getId() == "0");
    assert(o1.getType().empty());
    assert(o1.getPrice() == 0);
    assert(o1.getDate() == Date());
    assert(o1.getDeparture().empty());
    assert(o1.getDestination().empty());

    Offer o2("1", "d1", "a1", "t1", 2, Date(1, 1, 2001));
    assert(o2.getId() == "1");
    assert(o2.getType() == "t1");
    assert(o2.getPrice() == 2);
    assert(o2.getDate() == Date(1, 1, 2001));
    assert(o2.getDeparture() == "d1");
    assert(o2.getDestination() == "a1");

    return 0;
}

int OfferTest::test_getPrice() {
    Offer o2("1", "d1", "a1", "t1", 2, Date(1, 1, 2001));
    assert(o2.getPrice() == 2);

    Offer o3("1", "d1", "a1", "t1", 12, Date(1, 1, 2001));
    assert(o3.getPrice() == 12);
    return 0;
}

int OfferTest::test_getDate() {
    Offer o2("1", "d1", "a1", "t1", 2, Date(1, 1, 2001));
    assert(o2.getDate() == Date(1, 1, 2001));

    Offer o3("1", "d1", "a1", "t1", 12, Date(5, 2, 2005));
    assert(o3.getDate() == Date(5, 2, 2005));
    return 0;
}

int OfferTest::test_getId() {
    Offer o2("1", "d1", "a1", "t1", 2, Date(1, 1, 2001));
    assert(o2.getId() == "1");

    Offer o3("2", "d1", "a1", "t1", 12, Date(5, 2, 2005));
    assert(o3.getId() == "2");
    return 0;
}

int OfferTest::test_getDeparture() {
    Offer o2("1", "d1", "a1", "t1", 2, Date(1, 1, 2001));
    assert(o2.getDeparture() == "d1");

    Offer o3("2", "d2", "a1", "t1", 12, Date(5, 2, 2005));
    assert(o3.getDeparture() == "d2");
    return 0;
}

int OfferTest::test_getDestination() {
    Offer o2("1", "d1", "a1", "t1", 2, Date(1, 1, 2001));
    assert(o2.getDestination() == "a1");

    Offer o3("2", "d2", "a2", "t1", 12, Date(5, 2, 2005));
    assert(o3.getDestination() == "a2");
    return 0;
}

int OfferTest::test_getType() {
    Offer o2("1", "d1", "a1", "t1", 2, Date(1, 1, 2001));
    assert(o2.getType() == "t1");

    Offer o3("2", "d2", "a2", "t2", 12, Date(5, 2, 2005));
    assert(o3.getType() == "t2");
    return 0;
}

int OfferTest::test_setDate() {
    Date d1(2, 3, 2002);
    Offer o1;
    o1.setDate(d1);
    assert(o1.getDate() == d1);
    return 0;
}

int OfferTest::test_setId() {
    Offer o1;
    o1.setId("i1");
    assert(o1.getId() == "i1");

    return 0;
}

int OfferTest::test_setDeparture() {
    Offer o1;
    o1.setDeparture("d1");
    assert(o1.getDeparture() == "d1");

    return 0;
}

int OfferTest::test_setDestination() {
    Offer o1;
    o1.setDestination("a1");
    assert(o1.getDestination() == "a1");

    return 0;
}

int OfferTest::test_setType() {
    Offer o1;
    o1.setType("t1");
    assert(o1.getType() == "t1");

    return 0;
}


int OfferTest::test_setPrice() {
    Offer o1;
    o1.setPrice(4);
    assert(o1.getPrice() == 4);

    return 0;
}


int OfferTest::test_Equals() {
    Offer o1;
    Offer o2;
    assert(o1 == o1);
    assert(o1 == o2);

    Offer o3("1", "d1", "a1", "t1", 2, Date(1, 1, 2001));
    Offer o4("1", "d1", "a1", "t1", 2, Date(1, 1, 2001));
    Offer o5("1", "d1", "a1", "t1", 3, Date(1, 1, 2002));
    Offer o6("1", "d1", "a2", "t1", 3, Date(1, 1, 2001));
    Offer o7("1", "d2", "a3", "t1", 3, Date(1, 1, 2001));
    Offer o8("1", "d3", "a3", "t1", 3, Date(1, 1, 2001));
    Offer o9("2", "d3", "a3", "t1", 3, Date(1, 1, 2001));

    assert(o3 == o4);
    assert(o3 == o3);
    assert(!(o3 == o1));
    assert(!(o4 == o5));
    assert(!(o5 == o6));
    assert(!(o6 == o7));
    assert(!(o7 == o8));
    assert(!(o8 == o9));

    return 0;
}

void OfferTest::runAllTests()
{
    test_create();
    test_getPrice();
    test_getDate();
    test_getId();
    test_getDeparture();
    test_getDestination();
    test_getType();
    test_setDate();
    test_setId();
    test_setDeparture();
    test_setDestination();
    test_setType();
    test_setPrice();
    test_Equals();
}
