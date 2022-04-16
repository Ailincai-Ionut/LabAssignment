#ifndef LABORATORY6_XBIRIS_FILTERPRICE_H
#define LABORATORY6_XBIRIS_FILTERPRICE_H
#include "DynamicArray.h"
#include "FilteringCriteria.h"
class FilterPrice : public FilteringCriteria {
  float price;

public:
  DynamicArray<Offer> filter(DynamicArray<Offer> &da);
  FilterPrice();
  FilterPrice(float pr);
};

#endif // LABORATORY6_XBIRIS_FILTERPRICE_H
