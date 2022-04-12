#include <cassert>

#include "FilteringTest.h"
#include "FilterType.h"
#include "FilterPrice.h"
#include "FilteringCriteriaTypeAndPrice.h"
#include "DynamicArray.h"

int FilteringTest::test_filterPrice() {
    DynamicArray daOffers(50);
    Date date1(2, 7, 2022);
    Offer offer1("1", "dep1", "dest1", "circuit", 5000, date1);
    daOffers.append(offer1);

    Date date2(3, 7, 2022);
    Offer offer2("2", "dep2", "dest2", "circuit", 6000, date2);
    daOffers.append(offer2);

    Date date3(4, 7, 2022);
    Offer offer3("3", "dep3", "dest3", "cruise", 2000, date3);
    daOffers.append(offer3);

    Date date4(4, 4, 2022);
    Offer offer4("4", "dep4", "dest4", "circuit", 4000, date4);
    daOffers.append(offer4);
    FilterPrice filter(4000);
    DynamicArray fil = filter.filter(daOffers);

    assert(fil.getLength() == 2);
    assert(fil.get(0).getId() == "3");
    assert(fil.get(1).getId() == "4");

    FilterPrice filter2(1000);
    DynamicArray fil2 = filter2.filter(daOffers);

    assert(fil2.getLength() == 0);
}

int FilteringTest::test_filterType() {
    DynamicArray daOffers(50);
    Date date1(2, 7, 2022);
    Offer offer1("1", "dep1", "dest1", "circuit", 5000, date1);
    daOffers.append(offer1);

    Date date2(3, 7, 2022);
    Offer offer2("2", "dep2", "dest2", "circuit", 6000, date2);
    daOffers.append(offer2);

    Date date3(4, 7, 2022);
    Offer offer3("3", "dep3", "dest3", "cruise", 2000, date3);
    daOffers.append(offer3);

    Date date4(4, 4, 2022);
    Offer offer4("4", "dep4", "dest4", "circuit", 4000, date4);
    daOffers.append(offer4);
    FilterType filter("circuit");
    DynamicArray fil = filter.filter(daOffers);

    assert(fil.getLength() == 3);
    assert(fil.get(0).getId() == "1");
    assert(fil.get(1).getId() == "2");
    assert(fil.get(2).getId() == "4");

    FilterType filter2("allInclusive");
    DynamicArray fil2 = filter2.filter(daOffers);

    assert(fil2.getLength() == 0);
}

int FilteringTest::test_filterPriceAndType() {
    DynamicArray daOffers(50);
    Date date1(2, 7, 2022);
    Offer offer1("1", "dep1", "dest1", "circuit", 5000, date1);
    daOffers.append(offer1);

    Date date2(3, 7, 2022);
    Offer offer2("2", "dep2", "dest2", "circuit", 6000, date2);
    daOffers.append(offer2);

    Date date3(4, 7, 2022);
    Offer offer3("3", "dep3", "dest3", "cruise", 2000, date3);
    daOffers.append(offer3);

    Date date4(4, 4, 2022);
    Offer offer4("4", "dep4", "dest4", "circuit", 4000, date4);
    daOffers.append(offer4);
    FilteringCriteriaTypeAndPrice filter("circuit", 5000);
    DynamicArray fil = filter.filter(daOffers);

    assert(fil.getLength() == 2);
    assert(fil.get(0).getId() == "1");
    assert(fil.get(1).getId() == "4");
}

void FilteringTest::runAllTests()
{
    test_filterPrice();
    test_filterType();
    test_filterPriceAndType();
}