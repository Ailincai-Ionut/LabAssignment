#include "FilterType.h"
#include "DynamicArray.h"

DynamicArray<Offer> FilterType::filter(DynamicArray<Offer> &da) {
  DynamicArray<Offer> result;
  for (int i = 0; i < da.getLength(); i++) {
    if (da.get(i).getType() == type)
      result.append(da.get(i));
  }
  return result;
}

FilterType::FilterType(std::string ty) { this->type = ty; }

FilterType::FilterType() { this->type = ""; }
