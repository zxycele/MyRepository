#include "StdAfx.h"
#include "Factory.h"

CFactory::CFactory(void)
{
}

CFactory::~CFactory(void)
{
}



CFactoryA::CFactoryA(void)
{
}
CSingleCore * CFactoryA::createSingleCore()
{
	return new CSingleCoreA();
}
CMultiCore * CFactoryA::createMultiCore()
{
	return new CMultiCoreA();
}
CFactoryA::~CFactoryA(void)
{
}



CFactoryB::CFactoryB(void)
{
}
CSingleCore * CFactoryB::createSingleCore()
{
	return new CSingleCoreB();
}
CMultiCore * CFactoryB::createMultiCore()
{
	return new CMultiCoreB();
}
CFactoryB::~CFactoryB(void)
{
}
