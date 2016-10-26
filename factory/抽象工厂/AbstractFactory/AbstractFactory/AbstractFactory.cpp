// AbstractFactory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MultiCore.h"
#include "SingleCore.h"
#include "Factory.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CFactory * mFactoryA = new CFactoryA();
	CSingleCore * mSingleCoreA = mFactoryA->createSingleCore();
	CMultiCore *mMultiCoreA = mFactoryA->createMultiCore();
	CFactory * mFactoryB = new CFactoryB();
	CSingleCore * mSingleCoreB = mFactoryB->createSingleCore();
	CMultiCore * mMultiCoreB = mFactoryB->createMultiCore();
	mSingleCoreA->show();
	mMultiCoreA->show();
	mSingleCoreB->show();
	mMultiCoreB->show();
	delete mMultiCoreB;
	delete mSingleCoreB;
	delete mFactoryB;
	delete mMultiCoreA;
	delete mSingleCoreA;
	delete mFactoryA;
	getchar();
	return 0;
}

