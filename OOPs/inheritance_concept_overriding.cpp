#include <iostream>

using namespace std;

class Car 
{
public:
	int num_tyres;

	void virtual Drive() 
	{
		cout << "In Car\n";
	}
};

class Maruti : public Car 
{
public:
	void Drive() 
	{
		cout << "In Maruti\n";
	}
};

int main()
{
	//------------------------
	// Maruti m = new Car();
	// m.Drive();
	/**
	 * Getting error 
	 * conversion from ‘Car*’ to non-scalar type ‘Maruti’ requested
     *       Maruti m = new Car();
	**/
	//---------------------------

	//------------------------
	// Maruti* m = new Car();
	// m->Drive();
	/** 
	 * invalid conversion from ‘Car*’ to ‘Maruti*’ [-fpermissive]
     *       Maruti* m = new Car();
	**/
	//--------------------------

	// Car* c = new Maruti();
	// c->Drive(); //call method from child class
}