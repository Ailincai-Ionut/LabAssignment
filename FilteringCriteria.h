#pragma once
#include "DynamicArray.h"
#include "Offer.h"
// you can add all your filtering classes in this module
class FilteringCriteria {
  virtual DynamicArray<Offer> filter(DynamicArray<Offer> &da);
};
