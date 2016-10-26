///////////////////////////////////////////////////////////
//  DecoratorPhone.cpp
//  Implementation of the Class DecoratorPhone
//  Created on:      28-ÁùÔÂ-2016 17:09:47
//  Original author: zxy
///////////////////////////////////////////////////////////

#include "DecoratorPhone.h"


DecoratorPhone::DecoratorPhone(Phone *phone){
	this->m_phone = phone;
}



DecoratorPhone::~DecoratorPhone(){

}





void DecoratorPhone::ShowDecorate(){
	m_phone->ShowDecorate();
}