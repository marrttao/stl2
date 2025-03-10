#ifndef IDEALERSHIP
#define IDEALERSHIP
#include "../car/car.h"

class Idealership {

public:

	virtual~Idealership() = default;
	virtual void addCar(const Car& car) = 0;
	virtual void removeCar(const Car& car) = 0;
	virtual void showCars() = 0;
	virtual void showCarById(int id) = 0;
	virtual void findById(int id) = 0;
	virtual void findByName(const std::string& name) = 0;
	virtual void sortById() = 0;
	virtual void sortByName() = 0;

};


#endif // !IDEALERSHIP
