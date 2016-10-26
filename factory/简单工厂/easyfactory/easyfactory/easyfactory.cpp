// easyfactory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Factory.h"

int _tmain(int argc, _TCHAR* argv[])
{

	CFactory *mFactory = new CFactory();
	CSingleCore * mSingle =mFactory->createSingle(CoreB);
	if (mSingle)
	{
		mSingle->show();
		delete mSingle;
	}
	delete mFactory;
	getchar();
	return 0;
}

