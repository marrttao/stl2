#ifndef CAR
#define CAR
#include "../../utils/libs/libs.h"

struct Car {
    int id;
    std::string name;
    int year;
    int engineVolume;

    Car(std::string name, int year, int engineVolume) : name(name), year(year), engineVolume(engineVolume) {
        static int idCounter = 0;
        id = idCounter++;
    }   

    bool operator==(const Car& other) const {
        return id == other.id;
    }
};


#endif // !CAR
