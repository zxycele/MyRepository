#include "StdAfx.h"
#include "FactoryCoreB.h"
#include "SingleCoreB.h"
CFactoryCoreB::CFactoryCoreB(void)
{
}
CSingleCore * CFactoryCoreB::createSingleCore()
{
	return new CSingleCoreB();
}
CFactoryCoreB::~CFactoryCoreB(void)
{
}
