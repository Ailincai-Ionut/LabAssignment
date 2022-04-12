#ifndef LABORATORY6_XBIRIS_FILTERPRICE_H
#define LABORATORY6_XBIRIS_FILTERPRICE_H
#include "DynamicArray.h"
#include "FilteringCriteria.h"
class FilterPrice:FilteringCriteria {
    float price;
public:
    DynamicArray filter(DynamicArray &da) override;
    FilterPrice();
    FilterPrice(float pr);
};


#endif //LABORATORY6_XBIRIS_FILTERPRICE_H
