#include "FilterType.h"
#include "DynamicArray.h"

DynamicArray FilterType::filter(DynamicArray &da) {
    DynamicArray result;
    for(int i = 0; i<da.getLength(); i++)
    {
        if(da.get(i).getType() == type)
            result.append(da.get(i));
    }
    return result;
}

FilterType::FilterType(std::string ty) {
    this->type = ty;
}

FilterType::FilterType() {
    this->type = "";
}
