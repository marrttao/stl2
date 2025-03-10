#ifndef DEALERSHIP
#define DEALERSHIP
#include "Idealership.h"

class Dealership : public Idealership {
	std::vector<Car> cars;
public:
	Dealership() = default;
	~Dealership() = default;
	void addCar(const Car& car) override;
	void removeCar(const Car& car) override;
	void showCars() override;
	void showCarById(int id) override;
	void findById(int id) override;
	void findByName(const std::string& name) override;
	void sortById() override;
	void sortByName() override;
};

#endif // !DEALERSHIP
