//
// Created by Greg on 2018-10-10.
//

#ifndef LAB4_BIRD_HPP
#define LAB4_BIRD_HPP

#include "animal.hpp"

/*
 * A bird; a type of animal.
 */
class bird : public animal {

public:
    /*
     * Constructs a bird with default values (age 0, alive, living on null island).
     */
    bird();
    /*
     * Constructs a bird with given age and coordinates.
     * @param age this animal's age
     * @param c1 a land coordinate
     * @param c2 a land coordinate
     * @param c3 a height coordinate
     */
    bird(int age, double c1, double c2, double c3);
    /*
     * Moves this bird from its current place to another.
     * @param coords the coordinates to move to
     */
    void move(double coords[]) override;
    /*
     * Standard copy constructor for bird.
     */
    bird(const bird& old);
    /*
     * Standard destructor for bird.
     */
    ~bird() override;
    /*
     * Prints a message to cout indicating that this bird is sleeping.
     */
    void sleep() const override;
    /*
     * Prints a message to cout indicating that this bird is eating.
     */
    void eat() const override;
    /*
     * Puts bird info into an output stream.
     * @param os the output stream to put bird info into
     */
    ostream& output(ostream& os) const override;
};


#endif //LAB4_BIRD_HPP
