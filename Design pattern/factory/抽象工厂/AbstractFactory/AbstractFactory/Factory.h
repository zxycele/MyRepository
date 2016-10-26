#pragma once
#include "MultiCore.h"
#include "SingleCore.h"
class CFactory
{
public:
	CFactory(void);
	virtual CSingleCore* createSingleCore()=0;
	virtual CMultiCore* createMultiCore()=0;
	~CFactory(void);
};

class CFactoryA :
	public CFactory
{
public:
	CFactoryA(void);
	CSingleCore* createSingleCore();
	CMultiCore* createMultiCore();
	~CFactoryA(void);
};

class CFactoryB :
	public CFactory
{
public:
	CFactoryB(void);
	CSingleCore* createSingleCore();
	CMultiCore* createMultiCore();
	~CFactoryB(void);
};
