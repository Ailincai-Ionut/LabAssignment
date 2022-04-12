#ifndef LABORATORY6_XBIRIS_FILTERTYPE_H
#define LABORATORY6_XBIRIS_FILTERTYPE_H
#include <iostream>
#include "DynamicArray.h"
#include "FilteringCriteria.h"

class FilterType:FilteringCriteria {
    std::string type;
public:
    DynamicArray filter(DynamicArray &da) override;
    FilterType();
    FilterType(std::string ty);
};



#endif //LABORATORY6_XBIRIS_FILTERTYPE_H
