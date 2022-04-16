#pragma once

#include "DynamicArray.h"
#include "FilteringCriteria.h"

class FilteringCriteriaOr : public FilteringCriteria {
public:
  FilteringCriteriaOr(FilteringCriteria *f, FilteringCriteria *s);
  DynamicArray<Offer> filter(DynamicArray<Offer> &da);

private:
  FilteringCriteria *first;
  FilteringCriteria *second;
};
