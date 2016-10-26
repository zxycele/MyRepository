#pragma once
#include "factory.h"

class CFactoryCoreB :
	public CFactory
{
public:
	CFactoryCoreB(void);
	CSingleCore * createSingleCore();
	~CFactoryCoreB(void);
};
