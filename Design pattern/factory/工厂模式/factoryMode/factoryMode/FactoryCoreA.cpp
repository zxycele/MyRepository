#include "StdAfx.h"
#include "FactoryCoreA.h"
#include "SingleCoreA.h"
CFactoryCoreA::CFactoryCoreA(void)
{
}
CSingleCore * CFactoryCoreA::createSingleCore()
{
	return new CSingleCoreA();
}
CFactoryCoreA::~CFactoryCoreA(void)
{
}
