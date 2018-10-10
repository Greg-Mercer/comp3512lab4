//
// Created by Greg on 2018-10-10.
//

#include <iostream>
#include "animal.hpp"

using namespace std;

animal::animal() {
    age = 0;
    id = 0; // todo: generate unique id
    location[0] = 0.0;
    location[1] = 0.0;
}

animal::animal(int age, double c1, double c2) {
    this->age = age;
    id = 0; // todo: generate unique id
    location[0] = c1;
    location[1] = c2;
}

void animal::move(double c1, double c2) {
    location[0] = c1;
    location[1] = c2;
}

animal::animal(const animal& old) {
    age = old.age;
    id = old.id;
    location[0] = old.location[0];
    location[1] = old.location[1];
}

animal::~animal() { }

void animal::sleep() {
    cout << "Animal sleeping..." << endl;
}

void animal::eat() {
    cout << "Animal eating..." << endl;
}

ostream& operator<<(ostream& os, const animal& a) {
    os << "Animal: age=" << a.age << ", id=" << a.id << ", location=[" << a.location[0]
        << "," << a.location[1] << "]" << endl;
    return os;
}