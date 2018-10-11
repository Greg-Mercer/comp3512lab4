//
// Created by Greg on 2018-10-10.
//

#ifndef LAB4_ANIMAL_HPP
#define LAB4_ANIMAL_HPP

#include <iostream>

using namespace std;

class animal {

protected:
    int age;
    unsigned long id;
    bool alive;
    double location[3];

public:
    static long counter;
    animal();
    animal(int age, double c1, double c2);
    virtual void move(double coords[]);
    animal(const animal&);
    virtual ~animal();
    virtual void sleep() const;
    virtual void eat() const;
    friend ostream& operator<<(ostream& os, const animal& a);
    virtual ostream& output(ostream& os) const;
};


#endif //LAB4_ANIMAL_HPP
