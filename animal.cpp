//
// Created by Greg on 2018-10-10.
//

#include <iostream>
#include "animal.hpp"

using namespace std;

animal::animal() {
    cout << "Constructing animal..." << endl;
    age = 0;
    id = (unsigned long)this;
    alive = true;
    location[0] = 0.0;
    location[1] = 0.0;
}

animal::animal(int age, double c1, double c2) {
    cout << "Constructing animal..." << endl;
    this->age = age;
    id = (unsigned long)this;
    alive = true;
    location[0] = c1;
    location[1] = c2;
}

void animal::move(double coords[]) {
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

void animal::sleep() const {
    cout << "Animal sleeping..." << endl;
}

void animal::eat() const {
    cout << "Animal eating..." << endl;
}

ostream& operator<<(ostream& os, const animal& a) {
    return a.output(os);
}

ostream& animal::output(ostream& os) const {
    os << "Animal: age=" << age << ", id=" << id << ", alive=" << alive << ", location=[" << location[0]
       << "," << location[1] << "]" << endl;
    return os;
}