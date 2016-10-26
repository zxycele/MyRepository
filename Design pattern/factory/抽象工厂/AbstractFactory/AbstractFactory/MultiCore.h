#pragma once

class CMultiCore
{
public:
	CMultiCore(void);
	virtual void show()=0;
	~CMultiCore(void);
};

class CMultiCoreB:public CMultiCore
{
public:
	CMultiCoreB(void);
	 void show();
	~CMultiCoreB(void);
};

class CMultiCoreA:public CMultiCore
{
public:
	CMultiCoreA(void);
	void show();
	~CMultiCoreA(void);
};
