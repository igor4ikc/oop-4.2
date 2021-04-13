#include <iostream>
#include "Child.h"

using namespace std;

int main()
{
	Child a("Ostap", "Ostapovich");

	a.PrintName();

	Father* A = new Child();

	cout << typeid(A).name() << endl;
	cout << typeid(*A).name() << endl;

	Father* N[1];

	N[0] = &a;

	N[0]->PrintName();


	return 0;
}