#pragma once
#include "SingleCore.h"
enum CORETYPE {CoreA,CoreB};
class CFactory
{
public:
	CFactory(void);
	virtual ~CFactory(void);
	virtual CSingleCore * createSingleCore()=0;
};
