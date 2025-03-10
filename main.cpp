#include "assets/dealership/dealership.h"

int main() {

	Dealership dealership;
	Car car1{ "BMW", 2020, 2 };
	Car car2{ "Audi", 2019, 3 };
	Car car3{ "Mercedes", 2018, 4 };
	Car car4{ "Toyota", 2017, 5 };
	Car car5{ "Nissan", 2016, 6 };
	Car car6{ "Mazda", 2015, 7 };
	Car car7{ "Honda", 2014, 8 };
	Car car8{ "Ford", 2013, 9 };
	Car car9{ "Chevrolet", 2012, 10 };
	Car car10{ "Volkswagen", 2011, 11 };

	dealership.addCar(car1);
	dealership.addCar(car2);
	dealership.addCar(car3);
	dealership.addCar(car4);
	dealership.addCar(car5);
	dealership.addCar(car6);
	dealership.addCar(car7);
	dealership.addCar(car8);
	dealership.addCar(car9);
	dealership.addCar(car10);

	dealership.showCars();
	std::cout << "----------------------" << std::endl;
	dealership.showCarById(5);
	std::cout << "----------------------" << std::endl;
	dealership.findById(5);
	std::cout << "----------------------" << std::endl;
	dealership.findByName("Toyota");
	std::cout << "----------------------" << std::endl;
	dealership.sortById();
	dealership.showCars();
	std::cout << "----------------------" << std::endl;
	dealership.sortByName();
	dealership.showCars();
}