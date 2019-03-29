//
// Created by exoron on 29.03.19.
//

#include <iostream>

#include <gems/gems_units/GraniteWarrior.h>

GraniteWarrior::GraniteWarrior() {
  Say();
}

void GraniteWarrior::Say() const {
  std::cout << "I'm a granite warrior" << std::endl;
}