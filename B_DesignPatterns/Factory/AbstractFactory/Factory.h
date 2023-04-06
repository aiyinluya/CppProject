#ifndef __F
#define __F
#include "Product.h"
// 总厂
class Factory
{
public:
    virtual Shoes *CreateShoes() = 0;
	virtual Clothe *CreateClothe() = 0;
    virtual ~Factory() {}
};

// 耐克生产者/生产链
class NiKeProducer : public Factory
{
public:
    Shoes *CreateShoes()
    {
        return new NiKeShoes();
    }
	
	Clothe *CreateClothe()
    {
        return new NiKeClothe();
    }
};
#endif