#ifndef __SHOES__
#define __SHOES__
#include <iostream>
// 鞋子抽象类
class Shoes
{
public:
    virtual ~Shoes() {}
    virtual void Show() = 0;
};
#endif 
