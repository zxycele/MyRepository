#pragma once

class CStrategy
{
public:
	CStrategy(void);
	virtual double cashReturn(double price);
	~CStrategy(void);
};

class CStrategyDiscount: public CStrategy
{
public:
	CStrategyDiscount(void);
	virtual double cashReturn(double price);
	~CStrategyDiscount(void);
};

class CStrategyReduction :
	public CStrategy
{
public:
	CStrategyReduction(void);
	virtual double cashReturn(double price);
	~CStrategyReduction(void);
};
