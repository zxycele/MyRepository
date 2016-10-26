#include "Phone.h"
#include "NokiaPhone.h"
#include "iPhone.h"
#include "DecoratorPhone.h"
#include "DecoratorPhoneA.h"
#include "DecoratePhoneB.h"

int main()
{

	Phone *myPhone = new iPhone("iphone 6s plus");
	Phone *aPhone = new DecoratorPhoneA(myPhone);
	Phone *bPhone = new DecoratePhoneB(aPhone);
	bPhone->ShowDecorate();
	delete bPhone;
	delete aPhone;
	delete myPhone;
	
	getchar();
	return 0;
}