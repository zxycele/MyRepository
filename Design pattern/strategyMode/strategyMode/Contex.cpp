#include "StdAfx.h"
#include "Contex.h"

CContex::CContex(STRATEGY_ENUM_TYPE szType)
{
	switch(szType)
	{
	case NORMAL:
		this->mCStrategy = new CStrategy();
		break;
	case DISCOUNT:
		this->mCStrategy = new CStrategyDiscount();
		break;
	case PRODUCTION:
		this->mCStrategy = new CStrategyReduction();
		break;
	default:
		this->mCStrategy = NULL;
		break;
	}
}

CContex::~CContex(void)
{
	if (mCStrategy)
	{
		delete mCStrategy;
	}
}
double CContex::reCash(double szPrice)
{
	return mCStrategy->cashReturn(szPrice);
}