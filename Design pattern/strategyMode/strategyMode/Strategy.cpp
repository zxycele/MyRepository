#include "StdAfx.h"
#include "Strategy.h"
#include <iostream>
CStrategy::CStrategy(void)
{
}

CStrategy::~CStrategy(void)
{
}
double CStrategy::cashReturn(double price)
{
	std::cout<<"���Ż�"<<std::endl;
	return price;
}

CStrategyDiscount::CStrategyDiscount(void)
{

}
CStrategyDiscount::~CStrategyDiscount(void)
{

}
double CStrategyDiscount::cashReturn(double price)
{
	std::cout<<"�����Ż�"<<std::endl;
	if (price > 0)
	{
		return 0.9*price;
	}
	else
	{
		return 0;
	}
}
CStrategyReduction::CStrategyReduction(void)
{
}

CStrategyReduction::~CStrategyReduction(void)
{
}

double CStrategyReduction::cashReturn(double price)
{
	std::cout<<"�����Ż�"<<std::endl;
	if (price>=100)
	{
		return price-20;
	}
	else
	{
		return price;
	}
}