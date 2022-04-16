#ifndef LABORATORY6_XBIRIS_FILTERTYPE_H
#define LABORATORY6_XBIRIS_FILTERTYPE_H
#include "DynamicArray.h"
#include "FilteringCriteria.h"
#include <iostream>

class FilterType : FilteringCriteria {
  std::string type;

public:
  DynamicArray<Offer> filter(DynamicArray<Offer> &da) override;
  FilterType();
  FilterType(std::string ty);
};

#endif // LABORATORY6_XBIRIS_FILTERTYPE_H
