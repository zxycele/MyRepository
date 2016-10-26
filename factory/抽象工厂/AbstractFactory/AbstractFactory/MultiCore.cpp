#include "StdAfx.h"
#include "MultiCore.h"
#include <iostream>
using namespace std;
CMultiCore::CMultiCore(void)
{
}

CMultiCore::~CMultiCore(void)
{
}

CMultiCoreA::CMultiCoreA(void)
{

}
void CMultiCoreA::show()
{
	cout<<"Multi Core A"<<endl;
}
CMultiCoreA::~CMultiCoreA(void)
{

}

CMultiCoreB::CMultiCoreB(void)
{

}

void CMultiCoreB::show()
{
	cout<<"Multi Core B"<<endl;
}
CMultiCoreB::~CMultiCoreB(void)
{

}