#ifndef __ABSF__
#define __ABSF__
#include "AbstractProduct.h"
class ShoesFactory
{
public:
    virtual Shoes *CreateShoes() = 0;
    virtual ~ShoesFactory() {}
};
#endif