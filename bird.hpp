//
// Created by Greg on 2018-10-10.
//

#ifndef LAB4_BIRD_HPP
#define LAB4_BIRD_HPP

#include "animal.hpp"

class bird : public animal {

private:
    double location[3];

public:
    bird();
    bird(int age, double c1, double c2, double c3);
    void move(double coords[3]) override;
    bird(const bird& old);
    ~bird() override;
    void sleep() override;
    void eat() override;
    friend ostream& operator<<(ostream& os, const bird& b);
};


#endif //LAB4_BIRD_HPP
