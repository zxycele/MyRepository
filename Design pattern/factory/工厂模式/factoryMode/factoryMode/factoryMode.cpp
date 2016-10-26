// factoryMode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "FactoryCoreA.h"
#include "FactoryCoreB.h"
#include "SingleCoreA.h"
#include "FactoryCoreB.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CFactoryCoreA *mFactoryCoreA = new CFactoryCoreA();
	CSingleCore * mSingleCoreA=  mFactoryCoreA->createSingleCore();
	mSingleCoreA->show();
	delete mSingleCoreA;
	delete mFactoryCoreA;
	getchar();
	return 0;
}

