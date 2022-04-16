#ifndef LABORATORY6_XBIRIS_FILTERINGCRITERIATYPEANDPRICE_H
#define LABORATORY6_XBIRIS_FILTERINGCRITERIATYPEANDPRICE_H

#include "DynamicArray.h"
#include "FilteringCriteria.h"
class FilteringCriteriaAnd : public FilteringCriteria {
public:
  // NOTE: It could be eazy if it takes strings other than pointers
  FilteringCriteriaAnd(FilteringCriteria *f, FilteringCriteria *s);
  DynamicArray<Offer> filter(DynamicArray<Offer> &da) override;

private:
  FilteringCriteria *first;
  FilteringCriteria *second;
};

#endif // LABORATORY6_XBIRIS_FILTERINGCRITERIATYPEANDPRICE_H
