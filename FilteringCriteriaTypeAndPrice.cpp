#include "FilteringCriteriaTypeAndPrice.h"

DynamicArray<Offer>
FilteringCriteriaTypeAndPrice::filter(DynamicArray<Offer> &daP) {
  DynamicArray<Offer> ftPrice = fp.filter(daP);
  DynamicArray<Offer> ftType = ft.filter(daP);
  DynamicArray<Offer> result;
  for (int i = 0; i < ftPrice.getLength(); i++) {
    bool is = false;
    for (int j = 0; j < ftType.getLength(); j++) {
      if (ftType.get(j) == ftPrice.get(i))
        is = true;
    }
    if (is)
      result.append(ftPrice.get(i));
  }
  return result;
}

FilteringCriteriaTypeAndPrice::FilteringCriteriaTypeAndPrice(std::string type,
                                                             float price) {
  this->ft = FilterType(type);
  this->fp = FilterPrice(price);
}
