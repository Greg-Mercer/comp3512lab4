//
// Created by Greg on 2018-10-10.
//

#include "canine.hpp"
#include "animal.hpp"

//
// Created by Greg on 2018-10-10.
//

#include <iostream>
#include "animal.hpp"

using namespace std;

canine::canine() {
    cout << "Constructing canine..." << endl;
    age = 0;
    location[0] = 0.0;
    location[1] = 0.0;
}

canine::canine(int age, double c1, double c2) {
    cout << "Constructing canine..." << endl;
    this->age = age;
    location[0] = c1;
    location[1] = c2;
}

void canine::move(double coords[2]) {
    location[0] = coords[0];
    location[1] = coords[1];
}

canine::canine(const canine& old) : animal() {
    cout << "Constructing canine..." << endl;
    age = old.age;
    id = old.id;
    alive = old.alive;
    location[0] = old.location[0];
    location[1] = old.location[1];
}

canine::~canine() {
    cout << "Destroying canine..." << endl;
}

void canine::sleep() const {
    cout << "Canine sleeping..." << endl;
}

void canine::eat() const {
    cout << "Canine eating..." << endl;
}

ostream& operator<<(ostream& os, const canine& c) {
    os << "Canine: age=" << c.age << ", id=" << c.id << ", alive="<< c.alive << ", location=[" << c.location[0]
       << "," << c.location[1] << "]" << endl;
    return os;
}

void canine::hunt() const {
    cout << "Canine hunting..." << endl;
}
