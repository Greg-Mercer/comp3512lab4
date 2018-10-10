//
// Created by Greg on 2018-10-10.
//

#ifndef LAB4_ANIMAL_HPP
#define LAB4_ANIMAL_HPP

#include <iostream>

using namespace std;

class animal {

private:
    int age;
    static long id;
    bool alive;
    double location[2];

public:
    animal();
    animal(int age, double c1, double c2);
    virtual void move(double c1, double c2);
    animal(const animal&);
    virtual ~animal();
    virtual void sleep();
    virtual void eat();
    friend ostream& operator<<(ostream& os, const animal& a);
};


#endif //LAB4_ANIMAL_HPP
