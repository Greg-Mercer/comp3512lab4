//
// Created by Greg on 2018-10-10.
//

#include <iostream>
#include "animal.hpp"

using namespace std;

animal::animal() {
    cout << "Constructing animal..." << endl;
    age = 0;
    id = 0; // todo: generate unique id
    alive = true;
    location[0] = 0.0;
    location[1] = 0.0;
}

animal::animal(int age, double c1, double c2) {
    cout << "Constructing animal..." << endl;
    this->age = age;
    id = 0; // todo: generate unique id
    alive = true;
    location[0] = c1;
    location[1] = c2;
}

void animal::move(double coords[2]) {
    location[0] = coords[0];
    location[1] = coords[1];
}

animal::animal(const animal& old) {
    cout << "Constructing animal..." << endl;
    age = old.age;
    id = old.id;
    alive = old.alive;
    location[0] = old.location[0];
    location[1] = old.location[1];
}

animal::~animal() {
    cout << "Destroying animal..." << endl;
}

void animal::sleep() {
    cout << "Animal sleeping..." << endl;
}

void animal::eat() {
    cout << "Animal eating..." << endl;
}

ostream& operator<<(ostream& os, const animal& a) {
    os << "Animal: age=" << a.age << ", id=" << a.id << ", alive=" << a.alive << ", location=[" << a.location[0]
        << "," << a.location[1] << "]" << endl;
    return os;
}