// Observer.cpp : 定义控制台应用程序的入口点。
//
#include "ConcrereSubject.h"
#include "ConcreteObserver.h"

int main()
{
	
	CConcrereSubject mSubject;
	CConcreteObserver aObserver(&mSubject,"zxy");
	CConcreteObserver bObserver(&mSubject,"hxh");
	CConcreteObserver cObserver(&mSubject,"cele");
	mSubject.AddObserver(&aObserver);
	mSubject.AddObserver(&bObserver);
	mSubject.AddObserver(&cObserver);
	mSubject.concrereSubjectState = "yes";
	mSubject.NotifyObserver();
	mSubject.RemoveObserver(&cObserver);
	mSubject.concrereSubjectState = "delete completed";
	mSubject.NotifyObserver();
	getchar();
	return 0;
}