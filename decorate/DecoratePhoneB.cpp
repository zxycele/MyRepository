///////////////////////////////////////////////////////////
//  DecoratePhoneB.cpp
//  Implementation of the Class DecoratePhoneB
//  Created on:      28-六月-2016 17:09:47
//  Original author: zxy
///////////////////////////////////////////////////////////

#include "DecoratePhoneB.h"
#include <iostream>
using namespace std;

DecoratePhoneB::DecoratePhoneB(Phone *phone):DecoratorPhone(phone){
}



DecoratePhoneB::~DecoratePhoneB(){

}





void DecoratePhoneB::AddDecorate()
{
	cout<<"加手机壳"<<endl;
}


void DecoratePhoneB::ShowDecorate()
{
	//DecoratorPhone::ShowDecorate();
	m_phone->ShowDecorate();
	this->AddDecorate();
}