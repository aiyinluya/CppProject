//装饰模式
//参考：https://blog.csdn.net/NEXUS666/article/details/115672452
#include <iostream>
class Food
{
public:
	Food(){}
	virtual ~Food(){}

	virtual void myInterface() = 0; // 为后续的各种装饰操作提供一个统一的接口
	void setPrice(double s) { mPrice = s; }
	double getPrice() { return mPrice; }

private:
	double mPrice;    // 食物价格
};

// 米饭类
class FoodRice :public Food
{
public:
	FoodRice() {
		setPrice(2.5);
	}

	~FoodRice() {}

	virtual void myInterface()
	{
		std::cout << "米饭";
	}
};

// 面条类
class FoodNoodle :public Food
{
public:
	FoodNoodle()
	{
		setPrice(6.6);
	}

	~FoodNoodle() {}

	virtual void myInterface()
	{
		std::cout << "面条";
	}
};

class Decorator :public Food
{
public:
	Decorator(Food* food)
	{
		mFood = food;
	}

	virtual ~Decorator(){}

	virtual void myInterface()
	{
		this->mFood->myInterface();
	}

	Food* getFood()              // 父类的私有成员mFood 在子类中调用get()方法获取
	{
		return this->mFood;
	}

	void setFood(Food* food)     // 父类的私有成员mFood 在子类中调用set()方法设置
	{
		this->mFood = food;
	}

private:
	Food* mFood = nullptr;  // 关键：装饰类中维护一个被装饰对象的基类指针
};

// 装饰类（加鸡蛋）
class EggDecorator :public Decorator
{
public:
	EggDecorator(Food* food): Decorator(food) // 通过装饰类的构造函数传入被装饰对象
	{
		// this->setFood(food);
	}

	virtual ~EggDecorator(){}

	virtual void myInterface()
	{
		this->getFood()->myInterface(); // getFood()返回的是从构造函数中传入的被装饰对象，故此处调用的是被装饰对象的myInterface()函数
		doDecorator();                  // 进行装饰操作
	}

private:
	// 装饰操作：加鸡蛋并重新计算价格
	void doDecorator()
	{
		std::cout << "+鸡蛋";
		setPrice(this->getFood()->getPrice() + 0.5); // this->getFood()->getPrice() 返回的是加鸡蛋之前的价格
	}                                                // this->setPrice(double) 设置的是加入鸡蛋后的价格
};


// 装饰类（加牛肉）
class BeefDecorator :public Decorator
{
public:
	BeefDecorator(Food* food) : Decorator(food)
	{
		this->setFood(food);
	}

	virtual ~BeefDecorator() {}

	virtual void myInterface()
	{
		this->getFood()->myInterface();
		doDecorator();
	}

private:
	void doDecorator()
	{
		std::cout << "+牛肉";
		setPrice(this->getFood()->getPrice() + 10);
	}
};


// 装饰类（加火腿）
class HamDecorator :public Decorator
{
public:
	HamDecorator(Food* food) : Decorator(food)
	{
		this->setFood(food);
	}

	virtual ~HamDecorator() {}

	virtual void myInterface()
	{
		this->getFood()->myInterface();
		doDecorator();
	}

private:
	void doDecorator()
	{
		std::cout << "+火腿";
		setPrice(this->getFood()->getPrice() + 5);
	}
};


int main(int argc, char *argv[])
{
	// 搭配方案1 (面条6.6 + 鸡蛋0.5 = 7.1元)
	std::cout << "搭配方案1：";
	Food* aaa1 = new FoodNoodle();
	Food* bbb1 = new EggDecorator(aaa1);
	bbb1->myInterface();
	std::cout << "=" << bbb1->getPrice() << '\n' << '\n';


	// 搭配方案2 （米饭2.5 + 鸡蛋0.5 + 牛肉10 + 火腿5 = 18元）
	std::cout << "搭配方案2：";
	Food* aaa2 = new FoodRice();            // aaa2
	Food* bbb2 = new EggDecorator(aaa2);    // 装饰1（aaa2 + bbb2）
	Food* ccc2 = new BeefDecorator(bbb2);   // 装饰2（aaa2 + bbb2 + ccc2）
	Food* ddd2 = new HamDecorator(ccc2);    // 装饰3（aaa2 + bbb2 + ccc2 + ddd2）

	// 此处的ddd2->myInterface()其实是一个链式调用。
	// 链式调用过程：HamDecorator::myInterface() ——> BeefDecorator::myInterface() ——> EggDecorator::myInterface() ——> FoodRice::myInterface()
	// 在每个装饰类的myInterface函数中又加入了具体的装饰操作，所以，装饰顺序与链式调用顺序正好相反。
	ddd2->myInterface();  
	std::cout <<"=" << ddd2->getPrice() << '\n' << '\n';
	

	//搭配方案3 （面条6.6 + 牛肉10 + 火腿5 = 21.6元）
	std::cout << "搭配方案2：";
	Food* aaa3 = new FoodNoodle();
	Food* bbb3 = new BeefDecorator(aaa3);
	Food* ccc3 = new HamDecorator(bbb3);
	ccc3->myInterface();
	std::cout << "=" << ccc3->getPrice() << '\n' << '\n';

    return 0;
}


