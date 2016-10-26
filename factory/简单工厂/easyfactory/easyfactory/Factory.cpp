#include "StdAfx.h"
#include "Factory.h"

CFactory::CFactory(void)
{
}
CSingleCore * CFactory::createSingle(CoreType mCoreType)
{
	if (mCoreType == CoreA)
	{
		return new CSingleCoreA();
	}
	else if (mCoreType == CoreB)
	{
		return new CSingleCoreB();
	}
	else
	{
		return NULL;
	}
}
CFactory::~CFactory(void)
{
}
