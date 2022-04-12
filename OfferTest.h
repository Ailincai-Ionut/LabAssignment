#pragma once
#include "Offer.h"

class OfferTest
{
    static int test_create();
    static int test_getPrice();
    static int test_getDate();
    static int test_getId();
    static int test_getDeparture();
    static int test_getDestination();
    static int test_getType();

    static int test_setDate();
    static int test_setId();
    static int test_setDeparture();
    static int test_setDestination();
    static int test_setType();
    static int test_setPrice();
    static int test_Equals();

public:
	static void runAllTests();
};

