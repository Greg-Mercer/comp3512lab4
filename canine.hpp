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
    void move(double coords[2]) override;
    canine(const canine& old);
    ~canine() override;
    void sleep() const override;
    void eat() const override;
    friend ostream& operator<<(ostream& os, const canine& b);
    void hunt() const;
};


#endif //LAB4_CANINE_HPP
