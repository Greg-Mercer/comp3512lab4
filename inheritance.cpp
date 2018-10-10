//
// Created by Greg on 2018-10-10.
//

#include <iostream>

#include "animal.hpp"
#include "bird.hpp"
#include "canine.hpp"

using namespace std;

int main() {

    animal a;
    bird b;
    canine c;

    animal& ar = a;
    animal& br = b;
    animal& cr = c;


    ar.eat();
    br.eat();
    cr.eat();

    c.hunt();

    cout << a << b << c;

    cout << ar << br << cr;

    return 0;
}