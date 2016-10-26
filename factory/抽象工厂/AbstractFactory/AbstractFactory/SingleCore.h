#pragma once

class CSingleCore
{
public:
	CSingleCore(void);
	virtual void show()=0;
	~CSingleCore(void);
};

class CSingleCoreA :
	public CSingleCore
{
public:
	CSingleCoreA(void);
	void show();
	~CSingleCoreA(void);
};

class CSingleCoreB :
	public CSingleCore
{
public:
	CSingleCoreB(void);
	void show();
	~CSingleCoreB(void);
};
