#ifndef LABORATORY6_XBIRIS_FILTERINGCRITERIATYPEANDPRICE_H
#define LABORATORY6_XBIRIS_FILTERINGCRITERIATYPEANDPRICE_H

#include "DynamicArray.h"
#include "FilterPrice.h"
#include "FilterType.h"
#include "FilteringCriteria.h"
class FilteringCriteriaTypeAndPrice : FilteringCriteria {
public:
  FilteringCriteriaTypeAndPrice(std::string type, float price);
  DynamicArray<Offer> filter(DynamicArray<Offer> &da) override;

private:
  FilterPrice fp;
  FilterType ft;
};

#endif // LABORATORY6_XBIRIS_FILTERINGCRITERIATYPEANDPRICE_H
