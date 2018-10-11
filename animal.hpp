//
// Created by Greg on 2018-10-10.
//

#ifndef LAB4_ANIMAL_HPP
#define LAB4_ANIMAL_HPP

#include <iostream>

using namespace std;

/*
 * An animal.
 */
class animal {

protected:
    int age; // this animal's age in years
    unsigned long id; // a unique id for this animal
    bool alive; // true if this animal is alive
    double location[3]; // this animal's location in coordinates

public:
    static long counter; // static counter used in id generation
    /*
     * Constructs an animal with default values (age 0, alive, living on null island).
     */
    animal();
    /*
     * Constructs an animal with given age and coordinates.
     * @param age this animal's age
     * @param c1 a land coordinate
     * @param c2 a land coordinate
     */
    animal(int age, double c1, double c2);
    /*
     * Moves this animal from its current place to another.
     * @param coords the coordinates to move to
     */
    virtual void move(double coords[]);
    /*
     * Standard copy constructor for animal.
     */
    animal(const animal&);
    /*
     * Standard destructor for animal.
     */
    virtual ~animal();
    /*
     * Prints a message to cout indicating that this animal is asleep.
     */
    virtual void sleep() const;
    /*
     * Prints a message to cout indicating that this animal is eating.
     */
    virtual void eat() const;
    /*
     * Calls a virtual member function to put animal contents into an output stream.
     * @param os the output stream to put animal info into
     * @param a the animal that the operator is being used on
     */
    friend ostream& operator<<(ostream& os, const animal& a);
    /*
     * Puts animal info into an output stream.
     * @param os the output stream to put animal info into
     */
    virtual ostream& output(ostream& os) const;
};


#endif //LAB4_ANIMAL_HPP
