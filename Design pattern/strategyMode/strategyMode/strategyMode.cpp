// strategyMode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Contex.h"
int _tmain(int argc, _TCHAR* argv[])
{

	CContex myContex(PRODUCTION);
	double price = myContex.reCash(100.0);
	std::cout<<"The final price is£º"<<price<<std::endl;
	getchar();
	return 0;
}

