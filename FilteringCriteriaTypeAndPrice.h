#ifndef LABORATORY6_XBIRIS_FILTERINGCRITERIATYPEANDPRICE_H
#define LABORATORY6_XBIRIS_FILTERINGCRITERIATYPEANDPRICE_H

#include "FilterPrice.h"
#include "FilterType.h"
#include "FilteringCriteria.h"
#include "DynamicArray.h"
class FilteringCriteriaTypeAndPrice:FilteringCriteria{
public:
    FilteringCriteriaTypeAndPrice(std::string type, float price);
    DynamicArray filter(DynamicArray &da) override;
private:
    FilterPrice fp;
    FilterType ft;
};


#endif //LABORATORY6_XBIRIS_FILTERINGCRITERIATYPEANDPRICE_H
