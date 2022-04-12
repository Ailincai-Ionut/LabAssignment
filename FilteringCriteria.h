#pragma once
#include "DynamicArray.h"
// you can add all your filtering classes in this module
class FilteringCriteria
{
    virtual DynamicArray filter(DynamicArray &da);
};

