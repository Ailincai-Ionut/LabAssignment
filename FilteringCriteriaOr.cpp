#include "FilteringCriteriaOr.h"

DynamicArray<Offer> FilteringCriteriaOr::filter(DynamicArray<Offer> &daP) {
  DynamicArray<Offer> result = first->filter(daP);
  DynamicArray<Offer> ftSecond = second->filter(daP);
  for (int j = 0; j < ftSecond.getLength(); j++)
    result.append(ftSecond.get(j));
  return result;
}

FilteringCriteriaOr::FilteringCriteriaOr(FilteringCriteria *f,
                                         FilteringCriteria *s) {
  this->first = f;
  this->second = s;
}
