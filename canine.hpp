//
// Created by Greg on 2018-10-10.
//

#ifndef LAB4_CANINE_HPP
#define LAB4_CANINE_HPP

#include "animal.hpp"

class canine : public animal {

public:
    canine();
    canine(int age, double c1, double c2);
    void move(double coords[]) override;
    canine(const canine& old);
    ~canine() override;
    void sleep() const override;
    void eat() const override;
    void hunt() const;
    ostream& output(ostream& os) const override;
};


#endif //LAB4_CANINE_HPP
