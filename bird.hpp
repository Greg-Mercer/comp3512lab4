//
// Created by Greg on 2018-10-10.
//

#ifndef LAB4_BIRD_HPP
#define LAB4_BIRD_HPP

#include "animal.hpp"

class bird : public animal {

public:
    bird();
    bird(int age, double c1, double c2, double c3);
    void move(double coords[]) override;
    bird(const bird& old);
    ~bird() override;
    void sleep() const override;
    void eat() const override;
    ostream& output(ostream& os) const override;
};


#endif //LAB4_BIRD_HPP
