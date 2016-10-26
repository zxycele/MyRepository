///////////////////////////////////////////////////////////
//  iPhone.cpp
//  Implementation of the Class iPhone
//  Created on:      28-ÁùÔÂ-2016 17:09:47
//  Original author: zxy
///////////////////////////////////////////////////////////

#include "iPhone.h"
#include <iostream>
using namespace std;
iPhone::iPhone(string name)
{
	this->m_name = name;
}



iPhone::~iPhone(){

}





void iPhone::ShowDecorate()
{
	cout<<m_name<<"µÄ×°ÊÎ"<<endl;
}