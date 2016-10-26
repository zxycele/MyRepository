#pragma once
enum CoreType{CoreA,CoreB};
class CSingleCore
{
public:
	CSingleCore(void);
	virtual void show()=0;
	virtual ~CSingleCore(void);
};
