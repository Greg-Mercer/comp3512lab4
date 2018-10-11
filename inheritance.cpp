//
// Created by Greg on 2018-10-10.
//

#include <iostream>

#include "animal.hpp"
#include "bird.hpp"
#include "canine.hpp"

using namespace std;

int main() {

    double locations1[] = {2.4, 3.5};
    double locations2[] = {2.4, 3.5, 4.6};

    auto* ap1 = new animal;
    animal* ap2 = new bird;
    animal* ap3 = new canine;

    cout << *ap1 << *ap2 << *ap3;

    ap1->move(locations1);
    ap2->move(locations2);
    ap3->move(locations1);

    cout << *ap1 << *ap2 << *ap3;

    ap1->eat();
    ap1->sleep();

    ap2->eat();
    ap2->sleep();

    ap3->eat();
    ap3->sleep();
    dynamic_cast<canine *>(ap3)->hunt();

    canine c; // static allocation, for demonstrating destruction

    return 0;
}