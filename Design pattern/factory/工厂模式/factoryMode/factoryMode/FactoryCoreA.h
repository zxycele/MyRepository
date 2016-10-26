#pragma once
#include "factory.h"

class CFactoryCoreA :
	public CFactory
{
public:
	CFactoryCoreA(void);
	CSingleCore * createSingleCore();
	~CFactoryCoreA(void);
};
