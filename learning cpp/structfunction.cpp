#include <iostream>

struct car{
    int speed;
    int fuel;
    int person;
    void set_speed(car &car);
    void set_fuel(car &car);
    void set_person(car &car);
};

void set_speed(car &car)
{
    car.speed = 70;
}

void set_fuel(car &car)
{
    car.fuel = 40;
}

void set_person(car &car)
{
    car.person = 3;
}

int main()
{
    car nisan;
    set_speed(nisan);
    set_fuel(nisan);
    set_person(nisan);
    std::cout << nisan.speed << '\n';
    std::cout << nisan.fuel << '\n';
    std::cout << nisan.person << '\n';
}

