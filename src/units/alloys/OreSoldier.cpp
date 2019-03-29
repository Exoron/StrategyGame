//
// Created by exoron on 29.03.19.
//

#include <iostream>

#include <alloys/alloys_units/OreSoldier.h>

OreSoldier::OreSoldier() {
  Say();
}

void OreSoldier::Say() const {
  std::cout << "I'm an ore soldier" << std::endl;
}