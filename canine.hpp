//
// Created by Greg on 2018-10-10.
//

#ifndef LAB4_CANINE_HPP
#define LAB4_CANINE_HPP

#include "animal.hpp"

/*
 * A canine; a type of animal.
 */
class canine : public animal {

public:
    /*
     * Constructs a canine with default values (age 0, alive, living on null island).
     */
    canine();
    /*
     * Constructs a canine with given age and coordinates.
     * @param age this animal's age
     * @param c1 a land coordinate
     * @param c2 a land coordinate
     */
    canine(int age, double c1, double c2);
    /*
     * Moves this canine from its current place to another.
     * @param coords the coordinates to move to
     */
    void move(double coords[]) override;
    /*
     * Standard copy constructor for canine.
     */
    canine(const canine& old);
    /*
     * Standard destructor for canine.
     */
    ~canine() override;
    /*
     * Prints a message to cout indicating that this canine is sleeping.
     */
    void sleep() const override;
    /*
     * Prints a message to cout indicating that this canine is eating.
     */
    void eat() const override;
    /*
     * Prints a message to cout indicating that this canine is hunting.
     */
    void hunt() const;
    /*
     * Puts canine info into an output stream.
     * @param os the output stream to put canine info into
     */
    ostream& output(ostream& os) const override;
};


#endif //LAB4_CANINE_HPP
