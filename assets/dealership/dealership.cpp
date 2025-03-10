#include "dealership.h"

void Dealership::addCar(const Car& car) {
	cars.push_back(car);
}
void Dealership::removeCar(const Car& car) {
	auto it = std::find(cars.begin(), cars.end(), car);
	if (it != cars.end()) {
		cars.erase(it);
	}
}

void Dealership::showCars() {
	for (const auto& car : cars) {
		std::cout << "Car id: " << car.id << std::endl;
		std::cout << "Car name: " << car.name << std::endl;
		std::cout << "Car year: " << car.year << std::endl;
		std::cout << "Car engine volume: " << car.engineVolume << std::endl;
		std::cout << "----------------------" << std::endl;
	}
}

void Dealership::showCarById(int id) {
	auto it = std::find_if(cars.begin(), cars.end(), [id](const Car& car) {
		return car.id == id;
		});
	if (it != cars.end()) {
		std::cout << "Car id: " << it->id << std::endl;
		std::cout << "Car name: " << it->name << std::endl;
		std::cout << "Car year: " << it->year << std::endl;
		std::cout << "Car engine volume: " << it->engineVolume << std::endl;
	}
}

void Dealership::findById(int id) {
	auto it = std::find_if(cars.begin(), cars.end(), [id](const Car& car) {
		return car.id == id;
		});
	if (it != cars.end()) {
		std::cout << "Car id: " << it->id << std::endl;
		std::cout << "Car name: " << it->name << std::endl;
		std::cout << "Car year: " << it->year << std::endl;
		std::cout << "Car engine volume: " << it->engineVolume << std::endl;
	}
}

void Dealership::findByName(const std::string& name) {
	auto it = std::find_if(cars.begin(), cars.end(), [name](const Car& car) {
		return car.name == name;
		});
	if (it != cars.end()) {
		std::cout << "Car id: " << it->id << std::endl;
		std::cout << "Car name: " << it->name << std::endl;
		std::cout << "Car year: " << it->year << std::endl;
		std::cout << "Car engine volume: " << it->engineVolume << std::endl;
	}
}

void Dealership::sortById() {
	std::sort(cars.begin(), cars.end(), [](const Car& car1, const Car& car2) {
		return car1.id < car2.id;
		});
}

void Dealership::sortByName() {
	std::sort(cars.begin(), cars.end(), [](const Car& car1, const Car& car2) {
		return car1.name < car2.name;
		});
}