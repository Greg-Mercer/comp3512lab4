//
// Created by Greg on 2018-10-10.
//

#include "bird.hpp"

bird::bird() {
    cout << "Constructing bird..." << endl;
    location[0] = 0.0;
    location[1] = 0.0;
    location[3] = 0.0;
}

bird::bird(int age, double c1, double c2, double c3) {
    cout << "Constructing bird..." << endl;
    this->age = age;
    location[0] = c1;
    location[1] = c2;
    location[2] = c3;
}

void bird::move(double coords[3]) {
    location[0] = coords[0];
    location[1] = coords[1];
    location[2] = coords[2];
}

bird::bird(const bird& old) : animal() {
    cout << "Constructing bird..." << endl;
    age = old.age;
    id = old.id;
    alive = old.alive;
    location[0] = old.location[0];
    location[1] = old.location[1];
    location[2] = old.location[2];
}

bird::~bird() {
    cout << "Destroying bird..." << endl;
}

void bird::sleep() {
    cout << "Bird sleeping..." << endl;
}

void bird::eat() {
    cout << "Bird eating..." << endl;
}

ostream& operator<<(ostream& os, const bird& b) {
    os << "Bird: age=" << b.age << ", id=" << b.id << ", alive=" << b.alive << ", location=[" << b.location[0]
       << "," << b.location[1] << "," << b.location[2] << "]" << endl;
    return os;
}