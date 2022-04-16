#include "FilteringCriteriaAnd.h"

DynamicArray<Offer> FilteringCriteriaAnd::filter(DynamicArray<Offer> &daP) {
  // DynamicArray<Offer> ftFirst = fp.filter(daP);
  // DynamicArray<Offer> ftSecond = ft.filter(daP);
  // DynamicArray<Offer> result;
  // for (int i = 0; i < ftFirst.getLength(); i++) {
  //   bool is = false;
  //   for (int j = 0; j < ftSecond.getLength(); j++) {
  //     if (ftSecond.get(j) == ftFirst.get(i))
  //       is = true;
  //   }
  //   if (is)
  //     result.append(ftFirst.get(i));
  // }
  DynamicArray<Offer> result;
  result = first->filter(daP);
  result = second->filter(result);
  return result;
}

FilteringCriteriaAnd::FilteringCriteriaAnd(FilteringCriteria *f,
                                           FilteringCriteria *s) {
  this->first = f;
  this->second = s;
}
