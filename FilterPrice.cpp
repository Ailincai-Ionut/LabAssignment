#include "FilterPrice.h"
#include "DynamicArray.h"

DynamicArray FilterPrice::filter(DynamicArray &da) {
    DynamicArray result;
    for(int i = 0; i<da.getLength(); i++)
    {
        if(da.get(i).getPrice() <= price)
            result.append(da.get(i));
    }
    return result;
}

FilterPrice::FilterPrice(float pr) {
    this->price = pr;
}

FilterPrice::FilterPrice() {
    this->price = 0;
}
