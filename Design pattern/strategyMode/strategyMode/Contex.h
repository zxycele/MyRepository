#pragma once
#include "Strategy.h"
typedef enum 
{
	NORMAL,
	DISCOUNT,
	PRODUCTION 
}STRATEGY_ENUM_TYPE;
class CContex
{
public:
	CContex(STRATEGY_ENUM_TYPE szType);
	~CContex(void);
	double reCash(double szPrice);
private:
	CStrategy *mCStrategy;
};
