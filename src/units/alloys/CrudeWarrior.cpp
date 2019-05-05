//
// Created by exoron on 29.03.19.
//

#include <iostream>

#include <alloys/alloys_units/CrudeWarrior.h>

CrudeWarrior::CrudeWarrior() {
  Say();
}

void CrudeWarrior::Say() const {
  std::cout << "I'm a crude warrior" << std::endl;
}