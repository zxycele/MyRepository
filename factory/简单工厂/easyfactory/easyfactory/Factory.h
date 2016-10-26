#pragma once
#include "SingleCore.h"
#include "SingleCoreA.h"
#include "SingleCoreB.h"
class CFactory
{
public:
	CFactory(void);
	CSingleCore * createSingle(CoreType mCoreType);
	~CFactory(void);
};
